//Program to take input, and calculate and display mpg
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //Declaring the variables
    int gallons;
    double miles;
    double mpg;
    
    //Asking for gallons put into the tank
    cout << "How many gallons of gas did you put in your car?" << endl;
    cin >> gallons;
    
    //Asking for number of miles driven
    cout << "\n \nHow many miles did you drive?" << endl;
    cin >> miles;
    
    //Calculating the miles per gallon
    mpg = miles / gallons;
    
    //outputting the result
    cout << setprecision(2) << fixed;
    cout << "\n \nYour car gets: " << mpg << "mpg" << endl;
    
    system("pause");
    
    return 0;
    
}
