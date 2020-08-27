#include<iostream>
#include <string>
#include <fstream>
#include <cstdio>
#include "DriverClass.h"
using namespace std;
using namespace TelCoColorCoder;
extern int numberOfPairs;
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(constants::MajorColor major, constants::MinorColor minor);
void writeHeading();
void writeBody();

void WriteToFile()
{
	writeHeading();
	writeBody();	

}

void writeHeading()
{
	fstream fout;
	fout.open("Color-Number-Manual.txt", ios::out);
	fout<<"Manual for Telecom workers\nContains color codes and respective number associated ";
	fout<<"\nThe manual is in the form: (number: color1 color2)\n";
	fout.close();
}

void writeBody()
{
	fstream fout;
	fout.open("Color-Number-Manual.txt", ios::app);
	for(int i =1 ;i <=numberOfPairs;i++)
	{
		TelCoColorCoder::ColorPair color = GetColorFromPairNumber(i);
		string color_string = color.ToString();
		string output_string = to_string(i);
		output_string += ": ";
		output_string += color_string;
		fout<<output_string;
		fout<<" \n";
	}
	fout.close();
}
