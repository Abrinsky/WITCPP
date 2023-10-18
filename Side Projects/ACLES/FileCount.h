//Title: FileCount Header
//Description: Header file to recieve a filename input, and output the number of lines in the file.
//Software Dev: Abraham Galinsky
//Dated: 5/14/2012

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int fileCount(string strFileName, string strAppend)
{
	ifstream ifFromFile, ifWorkingFile;
	string strLine;
	int intCount = 0;

	ifFromFile.open(strFileName.c_str());

	if (strAppend != "n/a")
	{
		while(getline(ifFromFile,strLine))
		{

			strLine += strAppend + ".txt";

			ifWorkingFile.open(strLine.c_str());

			if(ifWorkingFile.is_open())
			{
				intCount++;
				ifWorkingFile.close();
			}
		}
	}
	else
	{
		while(getline(ifFromFile,strLine))
		{
			intCount++;
		}
	}
	ifFromFile.close();

	return intCount;
}
