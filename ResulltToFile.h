#include<iostream>
#include <string>
#include <fstream>
#include <cstdio>
using namespace std;

void WriteToFile(string combo, int WriteHeading)
{
	if (WriteHeading==1)
	{
		fstream fout;
		fout.open("ColorCodingManual.txt", fstream::out);
		fout<<combo;
		fout<<"\n";
		fout.close();
	}

	if(WriteHeading==0)
	{
		fstream fout;
		fout.open("ColorCodingManual.txt", fstream::app);
		if(fout.fail ())
		{
			cout<<"FOUT fialed";
		}
		fout<<combo;
		fout<<"\n";
		fout.close();
	}
}
