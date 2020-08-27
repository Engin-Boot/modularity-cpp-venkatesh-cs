#include<iostream>
#include<string>
#include <assert.h>
#include "DriverClass.h"
using namespace std;
using namespace TelCoColorCoder;

ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(constants::MajorColor major, constants::MinorColor minor);

void testNumberToPair(int pairNumber, constants::MajorColor expectedMajor, constants::MinorColor expectedMinor)
{
	ColorPair colorPair =
	GetColorFromPairNumber(pairNumber);
	cout << "Got pair ";
	string a = colorPair.ToString();
	cout << a << endl;
	assert(colorPair.getMajor() == expectedMajor);
	assert(colorPair.getMinor() == expectedMinor);
}

void testPairToNumber( constants::MajorColor major , constants::MinorColor minor , int expectedPairNumber)
{
	int pairNumber = GetPairNumberFromColor(major, minor);
	cout << "Got pair number " << pairNumber << endl;
	assert(pairNumber == expectedPairNumber);
}