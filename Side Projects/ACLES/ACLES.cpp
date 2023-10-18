//Title: Active Collective Lexicon Estimation Software (ACLES)
//Description: Using association to the kent rosanoff wordlist to estimate the size of an active collective lexicon
//Software Dev: Abraham Galinsky
//Dated: 4/25/2012

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <vector>
#include "FileCount.h"

using namespace std;

//declaring the structure
struct strucWord
{ 
	string responseWord;
	string wordYear;
	int responseCount;
	int wordLoc;
};

//Function Prototypes
void funcPrintMainMenu(string strMaster);
void funcFileRead(string strMaster, string);

//Main Function
int main()
{

	string strMaster = "WordlistDefault.txt";
	string strChoice = "5";

	funcPrintMainMenu(strMaster);

	do
	{

		getline(cin, strChoice);

		if (strChoice == "4")
		{
			cout << "#####################################################" << endl
				<< "# Goodbye - TERMINATING PROGRAM" << endl
				<< "#####################################################" << endl;
		}
		else if (strChoice == "1")
		{
			strChoice = "1910";
			funcFileRead(strMaster, strChoice);
		}
		else if (strChoice == "2")
		{
			strChoice = "1955";
			funcFileRead(strMaster, strChoice);
		}
		else if (strChoice == "3")
		{
			strChoice = "1997";
			funcFileRead(strMaster, strChoice);
		}
		else
		{

			strChoice = "5";

			cout << "#####################################################" << endl
				<< "# ERROR 1 - INVALID ENTRY. Please try again..." << endl
				<< "#####################################################" << endl
				<< "# " << endl
				<< "# ";

		}

	}while(strChoice == "5");

	cin.get();

	return 0;

}

//Print Main Menu Function
void funcPrintMainMenu(string strMaster)
{

	cout << "#####################################################" << endl
		<< "# Active Collective Lexicon Estimation Software " << endl
		<< "# " << endl
		<< "# Master list used - " << strMaster << ":" << endl
		<< "# Using 1910: " << fileCount(strMaster, "1910") << " Files detected"<< endl
		<< "# Using 1955: " << fileCount(strMaster, "1955") << " Files detected"<< endl
		<< "# Using 1997: " << fileCount(strMaster, "1997") << " Files detected"<< endl
		<< "#####################################################" << endl
		<< "# Which year would you like to view data on?" << endl
		<< "# [1] - 1910" << endl
		<< "# [2] - 1955" << endl
		<< "# [3] - 1997" << endl
		<< "# [4] - Exit" << endl
		<< "# " << endl
		<< "# ";

}

//Read From File(s) Function
void funcFileRead(string strMaster, string strYearToUse)
{

	bool boFoundResponse = false;

	int masterSize = fileCount(strMaster, "n/a");
	int successCount = 0;
	int wordLocation = 1;
	int newResponses = 0;
	int wordResponseTotal = 0;

	vector<strucWord> responseList;
	responseList.push_back(strucWord());
	responseList.back().responseWord = "DEFAULT";
	responseList.back().responseCount = 1;
	responseList.back().wordYear = strYearToUse;
	responseList.back().wordLoc = wordLocation;

	fstream ifFromWords, ifFromList;
	string strLine;
	string strLastResponse;

	cout << "#####################################################" << endl
		<< "# Using \"" << strYearToUse << "\" words." << endl
		<< "# New Responses Found Per Word:" << endl
		<< "# " << endl
		<< "# " << right << setw(10) << "Word" << right << setw(28) << "New Responses / Total" << endl
		<< "# " << endl;

	ifFromWords.open(strMaster.c_str());

	while(getline(ifFromWords, strLine))
	{

		cout << "# " << right << setw(4) << wordLocation << left << setw(1) << ". " << left << setfill('_')<< setw(15) << strLine ;

		strLine += strYearToUse + ".txt";
		
		wordResponseTotal = 0;
		strLastResponse = "DEFAULT";
		
		ifFromList.open(strLine.c_str());

		if (ifFromList.is_open())
		{

			while(getline(ifFromList,strLine))
			{
				if (strLine != strLastResponse)
				{
					wordResponseTotal++;
					strLastResponse = strLine;
				}


				for(int i = 0; i < responseList.size(); i++)
				{

					if (strLine == responseList[i].responseWord)
					{
						boFoundResponse = true;
						responseList[i].responseCount += 1;
						break;
					}

				}

				if (boFoundResponse == false)
				{
					newResponses++;
					responseList.push_back(strucWord());
					responseList.back().responseWord = strLine;
					responseList.back().responseCount = 1;
					responseList.back().wordYear = strYearToUse;
					responseList.back().wordLoc = wordLocation;
				}
				else
				{
					boFoundResponse = false;
				}

			}

			successCount++;

			cout << right << setfill('_') << setw(11) << newResponses << setw(3) << setfill(' ') << "/ " << setw(3) << setfill(' ') << wordResponseTotal << endl;

			newResponses = 0;

			ifFromList.close();

		}
		else
		{
			cout << right << setfill('_') << setw(11) << "###" << setw(3) << setfill(' ') << "/ " << setw(3) << setfill(' ') << "###" << endl;
		}
		wordLocation++;

	}

	ifFromWords.close();
	cout << "#####################################################" << endl;

}
