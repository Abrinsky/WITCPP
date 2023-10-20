//Program for calculating byte amount for different data types
#include<iostream>

using namespace std;

int main()
{
    //Declaring the variables
    double amountc; //char
    double amounti; //int
    double amountf; //float
    double amountd; //double
    
    //Outputting the values
    cout << "A char is stored in: " << sizeof(char) << " bytes";
    cout << "\nThe float variable amount is stored in: " << sizeof(amountc) << " bytes";
    cout << "\nAn int is stored in: " << sizeof(int) << " bytes";
    cout << "\nThe float variable amount is stored in: " << sizeof(amounti) << " bytes";
    cout << "\nA float is stored in: " << sizeof(float) << " bytes";
    cout << "\nThe float variable amount is stored in: " << sizeof(amountf) << " bytes";
    cout << "\nA double is stored in: " << sizeof(double) << " bytes";
    cout << "\nThe float variable amount is stored in: " << sizeof(amountd) << " bytes\n";
    
    system("pause");
    
    return 0;
}
