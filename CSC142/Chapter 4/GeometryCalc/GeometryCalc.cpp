#include <iostream>

using namespace std;

int main()
{
    int option;
    const float PI = 3.14159;
    float area;
    float radius;
    float length;
    float width;
    float base;
    float height;
    
    system("cls");
    
    cout << "Geometry Calculator. Please enter a choice 1-4" << endl
         << "----------------------------------------------" << endl
         << "1. Area of a circle                          " << endl
         << "2. Area of a rectangle                       " << endl
         << "3. Area of a triangle                        " << endl
         << "4. Exit program                              " << endl
         << "----------------------------------------------" << endl << endl;
         
    cin >> option;
         
    if(option >= 1 && option <= 4)
    {
              system("cls");
              
              if(option == 1)
              {
                        cout << "Geometry Calculator: Area of a circle" << endl
                             << "-------------------------------------" << endl
                             << "Please enter the radius of a circle" << endl << endl
                             << "(Note: Can not be a negative #)" << endl
                             << "-------------------------------------" << endl << endl;
                             
                        cin >> radius;
                        
                        if(radius >= 0)
                        {
                                area = PI * (radius * radius);
                                
                                cout << endl << endl 
                                     << "The area of the circle is: " << area;
                        }
                        else
                        {
                                cout << endl << endl
                                     << "You have entered an invalid number... Restarting Program..." << endl;
                        }
              }
              
              else if(option == 2)
              {
                        cout << "Geometry Calculator: Area of a rectangle" << endl
                             << "-------------------------------------" << endl
                             << "Please enter the length & width of the rectangle" << endl << endl
                             << "(Note: Can not be negative #'s)" << endl
                             << "-------------------------------------" << endl << endl;
                             
                        cout << "Length: ";
                        cin >> length;
                        
                        cout << endl << "Width: ";
                        cin >> width;
                        
                        if(length >= 0 && width >= 0)
                        {
                                  area = length * width;
                                  
                                  cout << endl << endl
                                       << "The area of the rectangle is: " << area;
                        }
                        else
                        {
                                  cout << endl << endl
                                       << "You have entered an invalid number... Restarting Program..." << endl;
                        }
              }
              
              else if(option == 3)
              {
                        cout << "Geometry Calculator: Area of a triangle" << endl
                             << "-------------------------------------" << endl
                             << "Please enter the base & height of the triangle" << endl << endl
                             << "(Note: Can not be negative #'s)" << endl
                             << "-------------------------------------" << endl << endl;
                        
                        cout << "Base: ";
                        cin >> base;
                        
                        cout << "Height: ";
                        cin >> height;
                        
                        if(base >= 0 && height >= 0)
                        {
                                area = base * height * .5;
                                
                                
                                cout << endl << endl
                                     << "The area of the triangle is: " << area;
                        }
                        else
                        {
                                cout << endl << endl
                                     << "You have entered an invalid number... Restarting Program..." << endl;
                        }
              }
              
              else if(option == 4)
              {
                        cout << "<PROGRAM TERMINATING>" << endl << endl;
                        system("pause");
                        return 0;
              }
              
              cout << endl << endl
                   << "Returning to the main menu. ";
              system("pause");
              main();
              
    }
    else
    {
              cout << endl << endl
                   << "You have entered an invalid number... Restarting Program..." << endl;
                   
              system("pause");
              main();
    }
         
}
