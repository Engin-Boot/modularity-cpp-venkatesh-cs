#include <iostream>
#include <assert.h>
#include <string>
#include "DriverClass.h"
using namespace std;
using namespace TelCoColorCoder;

ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(constants::MajorColor major, constants::MinorColor minor);
void testNumberToPair(int pairNumber, constants::MajorColor expectedMajor, constants::MinorColor expectedMinor);
void testPairToNumber(constants::MajorColor major , constants::MinorColor minor , int expectedPairNumber);
void WriteToFile();

int main() 
{
	testNumberToPair(4, constants::MajorColor::WHITE, constants::MinorColor::BROWN);
	testNumberToPair(5, constants::MajorColor::WHITE, constants::MinorColor::SLATE);
	testPairToNumber(constants::MajorColor::BLACK, constants::MinorColor::ORANGE, 12);
	testPairToNumber(constants::MajorColor::VIOLET, constants::MinorColor::SLATE, 25);
	WriteToFile();
	return 0;
}
