#include <iostream>
#include <assert.h>
#include <string>
#include "Driver.h"
using namespace std;
using namespace TelCoColorCoder;

void testNumberToPair(int pairNumber, TelCoColorCoder::MajorColor expectedMajor, TelCoColorCoder::MinorColor expectedMinor)
{
	TelCoColorCoder::ColorPair colorPair =
	TelCoColorCoder::GetColorFromPairNumber(pairNumber);
	cout << "Got pair ";
	string a = colorPair.ToString();
	cout << a << endl;
	assert(colorPair.getMajor() == expectedMajor);
	assert(colorPair.getMinor() == expectedMinor);
}

void testPairToNumber( TelCoColorCoder::MajorColor major , TelCoColorCoder::MinorColor minor , int expectedPairNumber)
{
	int pairNumber = TelCoColorCoder::GetPairNumberFromColor(major, minor);
	cout << "Got pair number " << pairNumber << endl;
	assert(pairNumber == expectedPairNumber);
}

int main() 
{
	testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
	testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);
	testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
	testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

	return 0;
}
