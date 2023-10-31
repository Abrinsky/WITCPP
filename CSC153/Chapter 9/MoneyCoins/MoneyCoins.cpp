#include <iostream>
#include <iomanip>
#include <windows.h>

using namespace std;

//prototypes
string AskForName();
void AskForCoins(string name, int &fiftys, int &quarters, int &dimes, int &nickels, int &pennies);
void TotalAndWrite(string name, int fiftys, int quarters, int dimes, int nickels, int pennies, bool &again);

int main()
{
    bool again;
    string name;
    int fiftys, quarters, dimes, nickels, pennies;

    again = true;

    cout << "Hello there! Lets calculate some coins! :D" << endl << endl;
    system("pause");

    system("cls");

    name = AskForName();

    while(again == true)
    {
        system("cls");

        AskForCoins(name, fiftys, quarters, dimes, nickels, pennies);

        system("cls");

        TotalAndWrite(name, fiftys, quarters, dimes, nickels, pennies, again);
    }


}

string AskForName()
{
    string name;
    cout << "Why dont we start off with, what is your name?" << endl;
    cin >> name;

    system("cls");

    return name;
}

void AskForCoins(string name, int &fiftys, int &quarters, int &dimes, int &nickels, int &pennies)
{
    cout << "Ah, " << name << ". Well now that I know your name, shall we begin?" << endl << endl
         << "How many fifty-cent pieces do you have?" << endl;
    cin >> fiftys;

    cout << endl << "How many quarters do you have?" << endl;
    cin >> quarters;

    cout << endl << "How many dimes do you have?" << endl;
    cin >> dimes;

    cout << endl << "How many nickels do you have?" << endl;
    cin >> nickels;

    cout << endl << "How many pennies do you have?" << endl;
    cin >> pennies;

    system("pause");
}

void TotalAndWrite(string name, int fiftys, int quarters, int dimes, int nickels, int pennies, bool &again)
{
    float fiftysv, quartersv, dimesv, nickelsv, penniesv, total;
    int ctotal;
    char againt;

    fiftysv = 0.00;
    quartersv = 0.00;
    dimesv = 0.00;
    nickelsv = 0.00;
    penniesv = 0.00;
    total = 0.00;

    ctotal = 0;

    cout << "Alright " << name << ", let's see what we've got:" << endl;

    for(int i = 0; i < fiftys; i++)
    {
        fiftysv += 0.50;
    }

    for(int i = 0; i < quarters; i++)
    {
        quartersv += 0.25;
    }

    for(int i = 0; i < dimes; i++)
    {
        dimesv += 0.10;
    }

    for(int i = 0; i < nickels; i++)
    {
        nickelsv += 0.05;
    }

    for(int i = 0; i < pennies; i++)
    {
        penniesv += 0.01;
    }

    total = fiftysv + quartersv + dimesv + nickelsv + penniesv;
    ctotal = fiftys + quarters + dimes + nickels + pennies;

    cout << fixed << setprecision(2) << endl
         << fiftys << " fifty-cent pieces: $" << fiftysv << endl
         << quarters << " quarters: $" << quartersv << endl
         << dimes << " dimes: $" << dimesv << endl
         << nickels << " nickels: $" << nickelsv << endl
         << pennies << " pennies: $" << penniesv << endl
         << endl << "You have " << ctotal << " coins all together, worth a total of: $" << total << endl << endl;

    system("pause");

    cout << endl << endl << "Would you like to calculate more change? Y/N" << endl;
    cin >> againt;

    if(againt == 'Y' || againt == 'y')
    {
        again = true;
    }
    if(againt == 'N' || againt == 'n')
    {
        again = false;
    }
}
