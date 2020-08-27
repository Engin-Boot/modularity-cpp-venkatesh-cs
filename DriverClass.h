#include<iostream>
#include<string>
using namespace std;

namespace TelCoColorCoder
{
    class constants
	{
        public:
	enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
	enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };
    const string MajorColorNames[5] = { "White", "Red", "Black", "Yellow", "Violet" };
    const string MinorColorNames[5] = {"Blue", "Orange", "Green", "Brown", "Slate"};
	int numberOfMajorColors =sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
	int numberOfMinorColors =sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
	};
    class ColorPair {
	private:
		constants::MajorColor majorColor;
		constants::MinorColor minorColor;
        constants obj;
	public:
		ColorPair(constants::MajorColor major, constants::MinorColor minor) : majorColor(major), minorColor(minor){}
		constants::MajorColor getMajor() {
			return majorColor;
		}
		constants::MinorColor getMinor() {
			return minorColor;
		}
        string ToString() {
		string colorPairStr = obj.MajorColorNames[majorColor];
		colorPairStr += " ";
		colorPairStr += obj.MinorColorNames[minorColor];
		return colorPairStr;
		}
	};
}