#include<iostream>
#include <string>
#include <fstream>
#include <cstdio>
using namespace std;

void WriteToFile(string combo)
{

	fstream fout;
	//remove("ColorCodingManual.txt");
	fout.open("ColorCodingManual.txt", fstream::app);
	if(fout.fail ())
	{
		cout<<"FOUT fialed";
	}
	fout<<combo;
	fout.close();
}
