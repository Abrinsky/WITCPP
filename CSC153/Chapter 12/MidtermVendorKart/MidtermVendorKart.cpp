#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <string>

using namespace std;

//declaring the structure
struct Kart
{ 
     string listItem;
     double listPrice;
     int itemOnHand;
     int itemBought;
};

//function prototypes
void menu(Kart *);
void bill(Kart *);
void stock(Kart *);

int main()
{
    Kart salesList[] =
     {  
         {"Hammer", 2.98, 20, 0},
         {"Power Saw", 34.50, 20, 0},
         {"Box of Nails", 7.89,20, 0},
         {"Wrench", 8.29, 20, 0},
         {"Screw Driver", 2.98, 20, 0},
         {"Power Drill", 29.99, 20, 0},
         {"Box of Screws", 8.97, 20, 0}
     };
     
     Kart *kartPtr;
     kartPtr=&salesList[0];
     
     menu(salesList);
     bill(salesList);
     
     system("pause");
     return 0;
}

void menu(Kart *salesList)
{
    int choice, choice2, choice3, total;
    bool done, goodchoice;
    done = false;
    goodchoice = false;
    
    while(!done)
    {
        total = 0;
        for(int r = 0; r < 7; r++)
        {
            total += salesList[r].itemOnHand;
        }
        if(total <= 70)
        {
            stock(salesList); 
        }
        
        system("cls");
        cout << "Abe's Korner Kart" << endl
             << "=================" << endl;
        
        for(int i = 0; i < 7; i++)
        {
            cout << setprecision(2) << fixed << i + 1 << ". \"" << salesList[i].listItem << "\" $" << salesList[i].listPrice << endl;
            
            if(salesList[i].itemOnHand > 0)
            {
                cout << "    - Stock: " << salesList[i].itemOnHand << endl << endl;
            }
            else
            {
                cout << "    - OUT OF STOCK " << endl << endl;
            }
        }
        
        cout << "Please choose an item you would like to purchase: ";
        cin >> choice;
        
        goodchoice = false;
        
        while(!goodchoice)
        {
            system("cls");
            cout << "Abe's Korner Kart" << endl
                 << "=================" << endl
                 << "\""<< salesList[choice - 1].listItem << "\" available for purchase: " << salesList[choice - 1].itemOnHand << endl << endl
                 << "How many of \"" << salesList[choice - 1].listItem << "\" would you like to buy: ";
            cin >> choice2;
            
            
            if(choice2 <= salesList[choice - 1].itemOnHand)
            {
                salesList[choice - 1].itemOnHand -= choice2;
                salesList[choice - 1].itemBought += choice2;
                goodchoice = true;
            }
            else
            {
                system("cls");
                cout << "Abe's Korner Kart" << endl
                     << "=================" << endl
                     << "I'm sorry, but we don't have " << choice2 << " of that item on hand at the moment..." << endl
                     << "Please enter your choice again..." << endl << endl;
                system("pause");
            }
        }
        
        system("cls");
        cout << "Abe's Korner Kart" << endl
             << "=================" << endl
             << "1. Continue shopping" << endl
             << "2. Finish and see bill" << endl << endl
             << "What would you like to do: ";
        cin >> choice3;
        
        if(choice3 == 2)
        {
            done = true;
        }
             
    }
}

void bill(Kart *salesList)
{
    double total, payment, change;
    total = 0;
    payment = -1;
    
    system("cls");
    cout << "Abe's Korner Kart" << endl
         << "=================" << endl;
         
    for(int i = 0; i < 7; i++)
    {
        if(salesList[i].itemBought > 0)
        {
            cout << setprecision(2) << fixed << salesList[i].itemBought << "x  \"" << salesList[i].listItem << "\" $" << salesList[i].listPrice * salesList[i].itemBought << endl;
            total += salesList[i].listPrice * salesList[i].itemBought;
        }
    }
    
    cout << endl << setprecision(2) << fixed << "Total: $" << total << endl << endl;
    
    while(payment < total)
    {
        cout << "How much money are you paying with: ";
        cin >> payment;
        
        if(payment > total)
        {
            change = payment - total;
            cout << endl << setprecision(2) << fixed << "Thank you, your change will be: $" << change << endl;
        }
        else if(payment == total)
        {
            change = payment - total;
            cout << endl << setprecision(2) << fixed << "Thank you, have a nice day." << change << endl;
        }
        else
        {
            cout << endl << "I'm sorry, but that is not enough to cover the bill..." << endl << endl;
            payment = -1;
        }
    }
}

void stock(Kart *salesList)
{
    system("cls");
    cout << "Abe's Korner Kart" << endl
         << "=================" << endl
         << "Please hold a moment while the vendor cart restocks..." << endl
         << "Thank you for your patronage!" << endl << endl;
    
    for(int i = 0; i < 7; i++)
    {
        salesList[i].itemOnHand = 20; 
    }
    
    system("pause");  
}
