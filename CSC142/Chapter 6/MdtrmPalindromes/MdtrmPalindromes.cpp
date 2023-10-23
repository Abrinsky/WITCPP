#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

void menuitem1();
void menuitem2();

int main()
{
    system("cls");
    
    int choice = 0;
    
    cout << "Palindrome Checker Menu" << endl
         << "-------------------------------" << endl
         << "1. Enter a number" << endl
         << "2. Generate a list" << endl
         << "3. Exit" << endl
         << "-------------------------------" << endl;
    
    cin >> choice;
         
    if(choice == 1)
    {
              menuitem1();
    }
    else if(choice == 2)
    {
              menuitem2();
    }
    else if(choice == 3)
    {
         cout << "\n<EXITING PROGRAM>" << endl << endl;
         system("pause");
         return 0;
    }
}

void menuitem1()
{
     system("cls");
     int entry = 0;
     int entrys = 0;
     int rev = 0;
     
     cout << "Palindrome Checker Menu" << endl
          << "-------------------------------" << endl
          << "Please enter a 5 digit whole number." << endl
          << "Examples: 1, 2, 3... 200, 300..." << endl
          << "86452, 86278, 1111..." << endl
          << "-------------------------------" << endl
          << "Entry:      ";
         
     cin >> entry;
     
     entrys = entry;
     
     while(entrys>0)
     {
              rev *= 10;
              rev += entrys%10;
              entrys /= 10;
     }
     
     
     if(entry > 99999 || entry < 10000)
     {
            cout << endl << endl
                 << "I'm sorry but you seem to have entered an invalid number" << endl
                 << "Please try again..." << endl;
            system("pause");
            menuitem1();
     }
     else if(entry == rev)
     {
            cout << "Reverse:    " << rev
                 << endl << endl 
                 << "That means you have a palindrome." << endl
                 << "The number is the same backwards as it is forward." 
                 << endl << endl;
     }
     else if(entry != rev)
     {
            cout << "Reverse:    " << rev
                 << endl << endl 
                 << "That means you do not have a palindrome." << endl
                 << "The number is not the same backwards as it is forward." 
                 << endl << endl;
     }
     system("pause");
     main();
}

void menuitem2()
{    
     system("cls");
     
     int rev = 0;
     int dromes = 0;
     int regs = 0;
     int amount;
     int amounts;
     int rnumber;
     unsigned seed = time(0);
     char filename[50];
     char filename2[50];
     int filetext;
     int filetexts;
     srand(seed);
     ofstream rfile;
     ifstream wfile;
     ifstream qfile;
     ofstream cfile;
     
     cout << "Palindrome Checker Menu" << endl
          << "-------------------------------" << endl
          << "This is going to generate" << endl
          << "a list of random numbers." << endl
          << "What would you like to name the files?" << endl
          << "(20 character limit.)" << endl
          << "(The .txt will be added automatically.)" << endl
          << "-------------------------------" << endl;
          
     cin >> filename;
     
     cout << endl 
          << "and" 
          << endl << endl;
     
     cin >> filename2;
     
     system("cls");
     
     cout << "Palindrome Checker Menu" << endl
          << "-------------------------------" << endl
          << "This is going to generate" << endl
          << "a list of random numbers." << endl
          << "How many numbers would you like to generate?" << endl
          << "(Whole numbers only please)" << endl
          << "(All numbers will be 5 digits)" << endl
          << "-------------------------------" << endl;
     
     cin >> amount;
     
     amounts = amount;
     
     strcat(filename, ".txt");
     strcat(filename2, ".txt");
     
     rfile.open(filename);
     
     if(amount <= 0)
     {
          cout << endl << endl
               << "You seem to have entered an invalid number, returning to Main Menu..." << endl;
          system("pause");
          main();
     }
     
     
     do
     {    
          
          rnumber = 1 + rand() % 100000;
          
          if(rnumber > 9999)
          {
                     rfile << rnumber << "\n";
                     amount -= 1;
          }
     }while(amount > 0);
     
     rfile.close();
     
     system("cls");
     
     wfile.open(filename);
     cfile.open(filename2);
     
     cout << "Palindrome Checker Menu" << endl
          << "-------------------------------" << endl
          << "Here is your generated list." << endl
          << "Filename: " << filename << " and " << filename2 << endl
          << "Amount of numbers: " << amounts << endl
          << "-------------------------------" << endl
          << "Palindromes: " << endl;
          
     cfile << "Palindrome Checker Menu" << endl
           << "-------------------------------" << endl
           << "Here is your generated list." << endl
           << "Filenames: " << filename << " and " << filename2 << endl
           << "Amount of numbers: " << amounts << endl
           << "-------------------------------" << endl << endl
           << "Palindromes: " << endl;
     
     wfile >> filetext;
     while(wfile.good())
     {
             rev = 0;
             
             filetexts = filetext;
             
             while(filetexts > 0)
             {
                    rev *= 10;
                    rev += filetexts%10;
                    filetexts /= 10;
             }
             
             if(filetext == rev)
             {
                         dromes++;
                         cout << dromes << ". " << filetext << "  (Reverse: " << rev << ")" << endl;
                         cfile << dromes << ". " << filetext << "  (Reverse: " << rev << ")" << endl;
             }
             wfile >> filetext;
     }
     
     if(dromes == 0)
     {
               
               cout << "There are no Palindromes in your list." << endl;
     
     }
     
     cfile << endl
           << "-------------------------------" << endl
           << "Out of " << amounts << " tested..." << endl
           << "You have " << dromes << " palindromes." << endl;
     
     wfile.close();
     cfile.close();
     
     
     qfile.open(filename);
     
     qfile >> filetext;
     while(qfile.good())
     {
             rev = 0;
             
             filetexts += filetext;
             
             while(filetexts > 0)
             {
                    rev *= 10;
                    rev += filetexts%10;
                    filetexts /= 10;
             }
             
             if(filetext != rev)
             {
                         regs++;
             }
             qfile >> filetext;
     }
     
     qfile.close();
     
     cout << endl
          << "Palindromes: " << dromes << endl
          << "Regular Numbers: " << regs << endl
          << "Numbers Tested: " << amounts << endl << endl;
     
     
     system("pause");
     main();
}
