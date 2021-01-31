
#define DOCTEST_CONFIG_IMPLEMENT
#include<iostream>
#include "calc.h"
#include "doctest.h"
using namespace std;

/*
TEST_CASE("testing add") {
    Calculator myCalc;
    CHECK(myCalc.add(3,7) == 10);
    CHECK(myCalc.add(20,-5) == 15);
    CHECK(myCalc.add(0, 0) == 0);
    CHECK(myCalc.add(3, -8) == -5);
}
*/

int main(int argc, char** argv){
    //doctest::Context context;
    Calculator myCalc;

    cout<<myCalc.add(1,2)<<endl;
    cout<<myCalc.multiply(5,3)<<endl;
    cout<<myCalc.modulus(23,4)<<endl;
    //int res = context.run();
}

