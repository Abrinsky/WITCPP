#include <iostream>

using namespace std;

int main()
{
	double infant = 0, child = 0, mature = 52, minutes = 0, centimeters = 0, inches = 0, feet = 0;

	while(feet < 50.00)
	{
		mature += child;
		child = 0;
		child += infant;
		infant = mature;
		minutes += 5;
		centimeters = mature / 8.2;
		inches = centimeters / 2.54;
		feet = inches / 12;
	}
    cout << "Time Remaining: " << minutes << " Minutes" << endl << endl
		 << "Pounds of Crud: " << mature << endl << endl;
	system("pause");
	return 0;
}
