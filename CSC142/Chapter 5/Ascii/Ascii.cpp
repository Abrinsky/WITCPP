#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

int main()
{
    int amount, numlet;
    char letter;

    letter = 32;
    amount = 0;

    cout << "ASCII Characters valued 32 - 126\n" << "---------------------------------\n" << setw(4);

    while(letter <= 126)
    {
                if(amount < 16)
                {
                          numlet = letter;
                          cout << letter << setw(4);
                          amount++;
                          letter++;
                }
                else
                {
                          cout << endl;
                          amount = 0;
                }

    }

    cout << endl << endl;

    system("pause");

    return 0;

}
