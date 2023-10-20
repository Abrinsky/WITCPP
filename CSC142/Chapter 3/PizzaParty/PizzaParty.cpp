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
    int people;
    int pizzas;
    int perperson;
    
    cout << "What is the diameter of the pizza? (in inches)" << endl;
    cin >> pizza_diam;
    
    cout << endl << "How many people are attending the party?" << endl;
    cin >> people;
    cout << endl << endl;
    
    pizza_radius = pizza_diam / 2;
    pizza_area = PI * pow(pizza_radius, 2.0);
    slices = pizza_area / 14.125;
    
    
    perperson = people * 4;
    
    pizzas = perperson / slices;
    
    
    double temp = pizzas * slices;
    
    
    if(temp<perperson)
    {
                      pizzas += 1;
    }
    cout << setprecision(1) << fixed;
    cout << "\nYou need " << pizzas << " pizzas." << endl;
    cout << "\nYour pizzas need to be cut into " << slices << "in. slices." << endl;
    
    system("pause");
    
    return 0;
}
