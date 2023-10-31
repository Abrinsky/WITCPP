#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

int main()
{
	const int mapSize = 800;
	int testMap[mapSize][mapSize];

	int rect1X, rect1Y, rect1W, rect1H, rect2X, rect2Y, rect2W, rect2H;

	bool overlap = false;

	cin >> rect1X;
	cin >> rect1Y;
	cin >> rect1W;
	cin >> rect1H;
	cin >> rect2X;
	cin >> rect2Y;
	cin >> rect2W;
	cin >> rect2H;

	for (int i = 0; i < mapSize; i++)
	{
		for(int x = 0; x < mapSize; x++)
		{
			testMap[i][x] = 0;
		}
	}

	for (int i = rect1X; i < rect1W; i++)
	{
		for(int x = rect1Y; x < rect1H; x++)
		{
			testMap[i][x] += 1;
		}
	}

	for (int i = rect2X; i < rect2W; i++)
	{
		for(int x = rect2Y; x < rect2H; x++)
		{
			testMap[i][x] += 1;
		}
	}

	for (int i = 0; i < mapSize; i++)
	{

		for(int x = 0; x < mapSize; x++)
		{
			if(testMap[i][x] == 2)
			{
				overlap = true;
			}
		}
	}


	if(overlap == true)
	{
		cout << "Overlap" << endl;
	}
	else
	{
		cout << "No Overlap" << endl;
	}

	system("pause");
	return 0;
}
