#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    system("cls");
    unsigned seed = time(0);
    int magic;
    int guess;
    int times;
    bool again;
    
    srand(seed);
    
    again = true;
    times = 0;
    magic = 1 + rand() % 100;
    
    
    cout << "Welcome to Abe's Magical Guessing Game! | Times tried: " << times 
         << "\n---------------------------------------------------------" 
         << "\nThe ultimate test of mental capabilities!"
         << "\nJust enter the value you think is the answer."
         << "\n(Hint: It has to be between 1 and 100)"
         << "\n(If at any time you would like to exit the program, enter 101.)" 
         << "\n---------------------------------------------------------" 
         << endl << endl;
    
    do
    {
         cin >> guess;
         
         if(guess < 1 || guess > 101)
         {
                  system("cls");
                  cout << "I'm sorry, but it appears you have entered an invalid number..." 
                       << "\nThe program must now reset.." 
                       << endl << endl;
                  system("pause");
                  SYSTEM("restart");
         }
         else if(guess == 101)
         {
              cout << "\n<EXITING PROGRAM>" 
              << endl << endl;
              again = false;
              break;
         }
         else if(guess == magic)
         {
              if(times == 0)
              {
                       system("cls");
                       cout << "Congratulations!!! You have the mental powers of a wizard or something!"
                            << "\nIt only took you " << times << " try!"
                            << "\nAfter you press any key, the program will restart." 
                            << endl << endl;
                       system("pause");
                       main();
              }
              else if(times > 0 && times <= 5)
              {
                       system("cls");
                       cout << "Congratulations!!! You must have some leprechaun magic in you!"
                            << "\nIt only took you " << times << " tries!"
                            << "\nAfter you press any key, the program will restart." 
                            << endl << endl;
                       system("pause");
                       main();
              }
              else if(times > 4 && times <= 15)
              {
                       system("cls");
                       cout << "Congratulations!!! You must have some untapped mental capabilities!"
                            << "\nIt only took you " << times << " tries!"
                            << "\nAfter you press any key, the program will restart." 
                            << endl << endl;
                       system("pause");
                       main();
              }
              else if(times > 14 && times <= 25)
              {
                       system("cls");
                       cout << "Congratulations!!! You finally got it!"
                            << "\nIt took you " << times << " tries."
                            << "\nAfter you press any key, the program will restart." 
                            << endl << endl;
                       system("pause");
                       main();
              }
         }
         else if(times > 24)
         {
              system("cls");
              cout << "I'm terribly sorry, but you have tried " << times << " times..."
                   << "\nI can almost guarantee you have no magical talent whatsoever..."
                   << "\nThe magic number was: " << magic << " you dummy!"
                   << "\nAfter you press any key, the program will restart." 
                   << endl << endl;
              system("pause");
              main();
         }
         
         times += 1;  
         system("cls");
         cout << "Welcome to Abe's Magical Guessing Game! | Times tried: " << times 
              << "\n---------------------------------------------------------" 
              << "\nThe ultimate test of mental capabilities!"
              << "\nJust enter the value you think is the answer."
              << "\n(Hint: It has to be between 1 and 100)"
              << "\n(If at any time you would like to exit the program, enter 101.)" 
              << "\n---------------------------------------------------------";
         if(guess < magic)
         {
                  cout << "\nSorry but your guess of " << guess << " wasn't the right number :( \n(Hint: You need to guess higher!):"
                       << endl << endl;
         }
         else if(guess > magic && guess != 101)
         {
                  cout << "\nSorry but your guess of " << guess << " wasn't the right number :( \n(Hint: You need to guess lower!):"
                       << endl << endl;
         }
              
         
         
    }while(again == true);
    
    cout << "^_^ Thanks for playing! ^_^" << endl << endl;
    
    system("pause");
    return 0;
}
