//Program to calculate number of pizza slices for any pizza.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define PI 3.14159

int main()
{
    double pizza_diam, pizza_radius, pizza_area;
    double slices;
    
    cout << "What is the diameter of the pizza? (in inches)" << endl;
    cin >> pizza_diam;
    
    pizza_radius = pizza_diam / 2;
    pizza_area = PI * pow(pizza_radius, 2.0);
    slices = pizza_area / 14.125;
    
    cout << setprecision(1) << fixed;
    cout << "\nYour pizza needs to be cut into " << slices << " slices." << endl << endl;
    
    system("pause");
    
    return 0;
}
