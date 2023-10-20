//Program for calculating tax/tip
#include<iostream>

using namespace std;

int main()
{
    //Declaring variables and giving them values
    double meal;
    double tax;
    double tip;
    double total;
    
    
    //asking the user the cost of his meal, to be used as a calculated value
    cout << "What is the cost of the meal?" << endl;
    cin >> meal;
    
    //calculating the tip/tax/total
    
    tip = meal * .15;
    tax = meal * 0.0675;
    total = meal + tip;
    total = total + tax;
    
    //Outputting the bill in a readable format
    cout << "\nYour bill:" << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Tip: $" << tip << endl;
    cout << "Total $" << total << endl;
    
    system("pause");
    
    return 0;
}
