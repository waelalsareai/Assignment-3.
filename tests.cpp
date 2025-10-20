//----------------------------------------------------------
// CS161 Assignment Starter Code
// Copyright Andrew Scholer (ascholer@chemeketa.edu)
// Neither this code, nor any works derived from it
//    may be republished without approval.
//----------------------------------------------------------

//Bring in unit testing code and tell it to build a main function
//If you have multiple unit test files, only one should have this define
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

//Use Approx from doctest without saying doctest::Approx
using doctest::Approx;

//-----------------------------------------------------------------------------------

#include <iostream>
using namespace std;

//Your functions here
int getArea(int width, int length) {
    return width * length;
}

int getVolume(int width, int length, int height) {
    return width * length * height;
}

int leftoverCardboard(int cutoutSize)
{
    // Four corner squares of size x by x are removed
    return 4 * cutoutSize * cutoutSize;
}

int getMaxHeight(int width, int length)
{
    int m = std::min(width, length);
    int h = static_cast<int>(std::floor((m - 1) / 2.0));
    return h;
}

///----------------------------------------------------------------------------------
/// Tests
/// Uncomment tests to work on them. Make sure any test that does not compile or
/// causes a crash gets commented back out. Any test that runs should be left
/// on (uncommented), even if the test fails.
///----------------------------------------------------------------------------------

TEST_CASE( "getArea" ) {
    cout << "1: getArea" << endl;
    CHECK( getArea(2, 4) == 8 );
    CHECK( getArea(12, 7) == 84 );
}

TEST_CASE( "getVolume" ) {
    cout << "2: getVolume" << endl;
    CHECK( getVolume(2, 4, 3) == 24 );
    CHECK( getVolume(12, 7, 2) == 168 );
}

TEST_CASE( "leftoverCardboard" ) {
    cout << "3: leftoverCardboard" << endl;
    CHECK( leftoverCardboard(3) == 36 );
    CHECK( leftoverCardboard(10) == 400 );
}

TEST_CASE( "getMaxHeight" ) {
    cout << "4: getMaxHeight" << endl;
    CHECK( getMaxHeight(5, 10) == 2 );
    CHECK( getMaxHeight(10, 5) == 2 );
    CHECK( getMaxHeight(12, 16) == 5 );
    CHECK( getMaxHeight(18, 16) == 7 );
}

//Add your own test case for bowLength here
TEST_CASE("bowlength"){
    cout << "5: bowLength" << end1;
