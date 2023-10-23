#include <iostream>

using namespace std;

int main()
{
    float height;
    float weight;
    float bmi;
    
    system("cls");
    
    cout << "Please enter your height(In inches): ";
    cin >> height;
    
    cout << endl << "Please enter your weight(In pounds): ";
    cin >> weight;
    
    bmi = weight * 703 / (height * height);
    
    if(bmi >= 18.5 && bmi <= 25)
    {
           cout << endl << endl
                << "Congratulations! you have an optimal BMI(Body Mass Index) of: "
                << bmi;
    }
    else
    {
           cout << endl << endl
                << "Sadly you do not have an optimal BMI(Body Mass Index). Your BMI is: "
                << bmi;
    }
    
    cout << endl << endl
         << "The program will now restart. ";
    
    system("pause");
    main();
}
    
    
    
