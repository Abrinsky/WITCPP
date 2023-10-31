#include <iostream>

using namespace std;

int main()
{
	
	char data[81];
	
	for( int i = 0; i < 80; i++)
	{
		data[i] = 0;
	}
	
	cin >> data;
	
	for( int i = 0; i < 80; i++)
	{
		data[i] += 7;
		
		if(data[i] == 'f' && data[i+1] != 0)
		{
			data[i] = ' ';
		}
		
		if(data[i] == 'f' && data[i+1] == 0)
		{
			data[i] = 33;
		}
	}
	
	for(int i = 0; i < 80; i++)
	{
		if (data[i] != 0)
		{
			cout << data[i];
		}
		else
		{
			break;
		}
	}
	
	cout << endl;

	system("pause");
	return 0;
}
