#include <iostream>
#include <cstdlib>
#include <fstream>
#include <ctime>
#include <cmath>
#include <sstream>
#include <string>

using namespace std;

void menu();
void dicecheck();
void rollnh();
void rollh();
int GetIntVal(string strConvert);

int main()
{
    bool choose;
    string choice;

    choose = true;

    do
    {
        menu();

        cin >> choice;

        if (choice == "1")
        {
            cout << endl << "Yea" << endl;
            dicecheck();
        }
        else if (choice == "0")
        {
            cout << endl << "<EXITING PROGRAM>" << endl;
            choose = false;
        }

        cout << endl;
        system("pause");
    }
    while (choose);

    return 0;
}

void menu()
{
    system("cls");

    cout << "DND Helper Program" << endl
        << "-------------------" << endl
        << "[1] Dice Roller" << endl
        << "[0] Exit" << endl
        << "-------------------" << endl
        << "Choice: ";
}

void dicecheck()
{
    system("cls");

    bool choose;
    string histcheck;

    choose = true;


    do
    {
        system("cls");

        cout << "DND Dice Roller" << endl
            << "-------------------" << endl
            << "[2] Don't Save History" << endl
            << "[1] Save History" << endl
            << "[0] Main Menu" << endl
            << "-------------------" << endl
            << "Choice: ";

        cin >> histcheck;

        if (histcheck == "2")
        {
            rollnh();
            break;
        }
        else if (histcheck == "1")
        {
            rollh();
            break;
        }
        else if (histcheck == "0")
        {
            choose = false;
            cout << endl << "Returning to Main Menu..." << endl;
        }
    }
    while (choose);
}

void rollnh()
{
    system("cls");

    int total;
    int roll;
    int rolls;
    int dice;
    int side;
    string dices;
    string sides;
    bool choose;
    choose = true;


    system("cls");

    cout << "DND Dice Roller" << endl
        << "-------------------" << endl
        << "Please enter the number of dice and then how many sides." << endl
        << "(If you want to return to main menu just put 0 for either)" << endl
        << "-------------------" << endl;

    do
    {
        unsigned seed = time(0);
        srand(seed);
        int i;
        rolls = 0;
        roll = 0;


        cout << "dice: ";
        cin >> dices;

        if (dices == "0")
        {
            choose = false;
            cout << endl << "Returning to Main Menu..." << endl;
            break;
        }

        stringstream d(dices);

        if ((d >> i).fail())
        {
            cout << endl << "Invalid entry, try again..." << endl;
            system("pause");
            continue;
        }


        cout << "Sides: ";
        cin >> sides;

        if (sides == "0")
        {
            choose = false;
            cout << endl << "Returning to Main Menu..." << endl;
            break;
        }

        stringstream s(sides);

        if ((s >> i).fail())
        {
            cout << endl << "Invalid entry, try again..." << endl;
            system("pause");
            continue;
        }


        cout << endl
            << "--------------------------------------------" << endl
            << "Rolling " << dices << " dice, each with " << sides << " sides:" << endl;


        total = 0;
        dice = GetIntVal(dices);
        side = GetIntVal(sides);

        for (int d = dice; d > 0; d--)
        {
            roll = 1 + rand() % side;
            ++rolls;

            total += roll;
            cout << rolls << ". " << roll << endl;
        }

        cout << "--------------------------" << endl
            << "With a sum total of: " << total << endl
            << "--------------------------" << endl << endl;
    }
    while (choose);
}

void rollh()
{
    system("cls");

    int total;
    int roll;
    int rolls;
    int dice;
    int side;
    string dices;
    string sides;
    bool choose;
    char fname[50];
    char dater[10];
    _strdate(dater);
    ofstream rollfile;
    choose = true;

    cout << "DND Dice Roller" << endl
        << "-------------------" << endl
        << "Please enter the name you want to save the file as..." << endl
        << "(.txt will be added to the end automagically!)" << endl
        << "-------------------" << endl
        << "Filename: ";

    cin >> fname;
    strcat(fname, ".txt");

    system("cls");

    cout << "DND Dice Roller" << endl
        << "-------------------" << endl
        << "Please enter the number of dice and then how many sides." << endl
        << "(If you want to return to main menu just put 0 for either)" << endl
        << "-------------------" << endl;

    rollfile.open(fname, ios::app | std::ios::out);


    rollfile << "Dice Roll History:" << endl
        << "File: " << fname << endl
        << "Date: " << dater << endl
        << "--------------------------------------------" << endl << endl;

    do
    {
        unsigned seed = time(0);
        srand(seed);
        int i;
        rolls = 0;
        roll = 0;


        cout << "dice: ";
        cin >> dices;

        if (dices == "0")
        {
            choose = false;
            cout << endl << "Returning to Main Menu..." << endl;
            break;
        }

        stringstream d(dices);

        if ((d >> i).fail())
        {
            cout << endl << "Invalid entry, try again..." << endl;
            system("pause");
            continue;
        }


        cout << "Sides: ";
        cin >> sides;

        if (sides == "0")
        {
            choose = false;
            cout << endl << "Returning to Main Menu..." << endl;
            break;
        }

        stringstream s(sides);

        if ((s >> i).fail())
        {
            cout << endl << "Invalid entry, try again..." << endl;
            system("pause");
            continue;
        }


        cout << endl
            << "--------------------------------------------" << endl
            << "Rolling " << dices << " dice, each with " << sides << " sides:" << endl;

        rollfile << "Rolling " << dices << " dice, each with " << sides << " sides:" << endl;


        total = 0;
        dice = GetIntVal(dices);
        side = GetIntVal(sides);

        for (int d = dice; d > 0; d--)
        {
            roll = 1 + rand() % side;
            ++rolls;

            total += roll;
            cout << rolls << ". " << roll << endl;
            rollfile << rolls << ". " << roll << endl;
        }

        cout << "--------------------------" << endl
            << "With a sum total of: " << total << endl
            << "--------------------------" << endl << endl;

        rollfile << endl << endl << "With a sum total of: " << total << endl << endl
            << "--------------------------------------------" << endl << endl;
    }
    while (choose);

    rollfile.close();
}


int GetIntVal(string strConvert)
{
    int intReturn;
    intReturn = atoi(strConvert.c_str());

    return (intReturn);
}
