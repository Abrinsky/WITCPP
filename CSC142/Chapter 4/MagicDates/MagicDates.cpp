//Program to check for magic dates, also validates the dates.
#include <iostream>

using namespace std;

int main()
{
    int month, day, year, magic;
    
    cout << "Enter a month (in numeric form such as 7 or 12)." << endl;
    cin >> month;
    
    cout << "\nChecking if month is a valid number..." << endl;
    
    if(month < 13 && month > 0)
             cout << "\nSuccess! Month check passed" << endl;
             
             else
             {
                 cout << "\nYou have entered an invalid number, please restart the program and try again..." << endl << endl;
        
                 system("pause");
        
                 return 0;
             }
             
             cout << "\nEnter a day (in numeric form such as 1 or 31)." << endl;
             cin >> day;
             
             cout << "\nChecking if day is a valid number..." << endl;
           
            if(day < 1 || day > 31)
            {
            cout << "\nYou have entered an invalid number, please restart the program and try again..." << endl << endl;
       
            system("pause");
       
            return 0;
               }
             
             if(month == 1 || month == 5 || month == 3 || month == 7 || month == 8 || month == 10 || month == 12)
             {
                      if(day < 32 && day > 0)
                      {
                             cout << "\nSuccess! Day check 1 passed" << endl;
                      }
             }
             else if(month == 4 || month == 6 || month == 9 || month == 11)
             {
                      if(day < 31 && day > 0)
                      {
                             cout << "\nSuccess! Day check 2 passed" << endl;
                      }
             }
             else if(month == 2)
             {
                      if(day < 30 && day > 0)
                      {
                            cout << "\nSuccess! Day check 3 passed" << endl;
                      }
             }
             
             cout << "enter year";
             cin >> year;
             
             magic = month * day;
             
            if(month == 2 && day == 29 && year % 4 != 0)
            {
                     cout << magic << "\nYou have entered an invalid number, this year isnt a leap year, please restart the program and try again..." << endl << endl;
                     system("pause");
                     return 0;
                     
            }
                     if(magic == year)
                       cout << "\nBecause the month times the day equals the year, you have yourself a magic date! Congratulations!" << endl << endl;
                     
                     else if(magic != year)
                           cout << "\nI'm sorry but because the month times the day is not equal to the year, this is not a magic date. Better luck next time :(" << endl << endl;
                       
    
     system("pause");
    
    return 0;
}
