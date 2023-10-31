#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string match = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string fileInput;
	string sData;
	int largest = 0;

	int letterCount[26];

	for(int i = 0; i < 26; i++)
	{
		letterCount[i] = 0;
	}


	ifstream readfile;

	readfile.open("histogram.txt");

	while(readfile >> fileInput)
	{
		sData += fileInput;
	}
	readfile.close();

	for(int i = 0; i < sData.length(); i++)
	{
		for(int x = 0; x < match.length(); x++)
		{
			if(toupper(sData[i]) == match[x])
			{
				letterCount[x] += 1;
			}
		}
	}

	for(int i = 0; i < 26; i++)
	{
		if(largest < letterCount[i])
		{
			largest = letterCount[i];
		}
	}

	cout << largest;


	for(int i = largest; i > 0; i--)
	{
		cout << endl << i;
		for(int x = 0; x < 26; x++)
		{
			if(letterCount[x] >= i)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
	}

	cout << endl << " ABCDEFGHIJKLMNOPQRSTUVWXYZ" << endl << endl;


	return 0;
}
