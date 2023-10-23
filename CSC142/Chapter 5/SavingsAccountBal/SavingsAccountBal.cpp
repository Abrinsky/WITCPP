#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

//Prototypes
void display();
void display2();

//Global Variables
float entry, entry2, balance, anuint, monint, months, amtdeposited, amtwithdrawn, interest, interesttotal;
int month, deposits, withdraws;
bool good;

int main()
{
    cout << fixed << showpoint << setprecision (2);
    interesttotal = 0;
    amtdeposited = 0;
    amtwithdrawn = 0;
    entry = -1;
    entry2 = -1;
    balance = 0;
    anuint = 0;
    monint = 0;
    months = 0;
    month = 0;
    interest = 0;
    deposits = 0;
    withdraws = 0;
    good = false;
    
    ofstream infile;
    
    do
    {
         cout << "Please enter the annual interest rate." << endl << "$";
         cin >> anuint;
         
         if(anuint >= 0)
         {
              good = true;
         }
    }while(!good);
    
    monint = anuint / 12;
    
    good = false;
    
    do
    {
         cout << endl << "Please enter the starting account balance." << endl << "$";
         cin >> balance;
         
         if(balance >= 0)
         {
              good = true;
         }
    }while(!good);
    
    good = false;
    
    do
    {
         cout << endl << "Number of months since account was established." << endl;
         cin >> months;
         
         if(anuint >= 0)
         {
              good = true;
         }
    }while(!good);
    
    
    
    while(month < months)
    {
         display();
         
         do
         {
              good = false;
              cin >> entry;
         
              if(entry < 0)
              {
                   cout << "Invalid entry... Try again: ";
              }
              else if(entry > 0)
              {
                   good = true;
                   deposits++;
              }
              else
              {
                   good = true;
              }
              
         }while(!good);
         
         balance += entry;
         amtdeposited += entry;
         
         good = false;
         
         display2();
         
         do
         {
              good = false;
              cin >> entry2;
         
              if(entry2 < 0)
              {
                   cout << "Invalid entry... Try again: ";
              }
              else if(entry > 0)
              {
                   good = true;
                   withdraws++;
              }
              else
              {
                   good = true;
              }
              
         }while(!good);
         
         balance -= entry2;
         amtwithdrawn += entry2;
         
         interest = balance * monint;
         
         if(balance <= 0)
         {
             interest = 0;
         }
         
         interesttotal += interest;
         balance += interest;
         
         month++;
    }
    
    infile.open("monthly-balance.txt");
    
    infile << fixed << showpoint << setprecision (2) << "Ending balance: $" << balance << endl
           << "Amount Deposited: $" << amtdeposited << endl
           << "Amount Withdrawn: $" << amtwithdrawn << endl
           << "Total Deposits: " << deposits << endl
           << "Total withdraws: " << withdraws << endl
           << "Total Interest Earned: $" << interesttotal;
    
    infile.close();
    
    system("cls");
    
    cout << fixed << showpoint << setprecision (2) << "Ending balance: $" << balance << endl
           << "Amount Deposited: $" << amtdeposited << endl
           << "Amount Withdrawn: $" << amtwithdrawn << endl
           << "Total Deposits: " << deposits << endl
           << "Total withdraws: " << withdraws << endl
           << "Total Interest Earned: $" << interesttotal << endl
           << "Output to file: monthly-balance.txt" << endl << endl;
           
    system("pause");
}


void display()
{
    system("cls");
    
    cout << "Account Balance Program" << endl
         << "------------------------" << endl
         << "Month: " << month + 1 << " | Balance: $" << balance << endl
         << "Please enter the amount deposited during the month." << endl
         << "------------------------" << endl << "$";
}


void display2()
{
    system("cls");
    
    cout << "Account Balance Program" << endl
         << "------------------------" << endl
         << "Month: " << month + 1 << " | Balance: $" << balance << endl
         << "Please enter the amount withdrawn during the month." << endl
         << "------------------------" << endl << "$";
}
