#include <iostream>
#include <assert.h>
#include <string>
#include "Driver.h"
#include "ResulltToFile.h"
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
void writeManualToFile()
{
		WriteToFile("This manual gives the combination of color codes with respective number \nColor code is in the form: (number:color1 color2)");
		for(int i=1;i<=25;i++)
		{
			ColorPair colorpair = GetColorFromPairNumber(i);
			string colorpair_string = colorpair.ToString();
			string color = to_string(i);
			color += ":";
			color += colorpair_string;
			color += "\n"	;	
			WriteToFile(color);
		}
}

int main() 
{
	testNumberToPair(4, TelCoColorCoder::MajorColor::WHITE, TelCoColorCoder::MinorColor::BROWN);
	testNumberToPair(5, TelCoColorCoder::MajorColor::WHITE, TelCoColorCoder::MinorColor::SLATE);
	testPairToNumber(TelCoColorCoder::MajorColor::BLACK, TelCoColorCoder::MinorColor::ORANGE, 12);
	testPairToNumber(TelCoColorCoder::MajorColor::VIOLET, TelCoColorCoder::MinorColor::SLATE, 25);
	writeManualToFile();
	return 0;
}
