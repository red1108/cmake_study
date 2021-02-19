#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include<iostream>
#include "calc.h"
#include "doctest.h"
using namespace std;


TEST_CASE("testing add") {
    Calculator myCalc;
    CHECK(myCalc.add(3,7) == 10);
    CHECK(myCalc.add(20,-5) == 15);
    CHECK(myCalc.add(0, 0) == 0);
    CHECK(myCalc.add(3, -8) == -5);
}

TEST_CASE("testing mult") {
    Calculator myCalc;
    CHECK(myCalc.multiply(3,7) == 21);
    CHECK(myCalc.multiply(-1,7) == -7);
    CHECK(myCalc.multiply(32,5) == 160);
    CHECK(myCalc.multiply(5,0) == 0);
}

TEST_CASE("testing mod") {
    Calculator myCalc;
    CHECK(myCalc.modulus(3,7) == 3);
    CHECK(myCalc.modulus(-1,7) == -1);
    CHECK(myCalc.modulus(32,5) == 2);
    CHECK(myCalc.modulus(32,8) == 0);
}