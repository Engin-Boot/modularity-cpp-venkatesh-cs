#include <iostream>
#include<string>
#include "DriverClass.h"
using namespace std;
using namespace TelCoColorCoder;

int numberOfPairs = 0;

ColorPair GetColorFromPairNumber(int pairNumber) {
    constants obj;
    numberOfPairs = obj.numberOfMajorColors * obj.numberOfMinorColors;
		int zeroBasedPairNumber = pairNumber - 1;
		constants::MajorColor majorColor = (constants::MajorColor)(zeroBasedPairNumber / obj.numberOfMinorColors);
		constants::MinorColor minorColor = (constants::MinorColor)(zeroBasedPairNumber % obj.numberOfMinorColors);
		return ColorPair(majorColor, minorColor);
}
int GetPairNumberFromColor(constants::MajorColor major, constants::MinorColor minor) {
    constants obj;
		return major * obj.numberOfMinorColors + minor + 1;
}
