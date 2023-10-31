#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

//globals
int total;
int zero;
int size;

//prototypes
void write();
void read();

int main()
{
    write();
    read();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}


void write()
{   
    ofstream file;
    file.open ("RandNumbers.txt");
    
    cout << "Number of numbers to generate?:" << endl;
    cin >> size;
    
    cout << endl;
    
    int test[size];
    srand ( time(NULL) );
    zero = 0;
    
    
    //Write to file
    for(int number = 0; number < size; number++)
    {     
        int RN = rand() % 5000 + 1;
        test[number] = RN;
        file << test[number] << endl;  
        total = test[number] + zero;        
    }
    file.close();
}

void read()
{
    //Read + display
    int test[size];
    { 
        const char* fileName = "RandNumbers.txt";
        ifstream file(fileName);
        int copy = 0;
        int low = 1000;
        int total = 0;
        
        for(int number = 0; number < size; number++)
        {
            while(file >> test[number])
            {
            cout << test[number] << endl;
           
            if(copy < test[number])
                copy = test[number];
             
            if(low > test[number])
                low = test[number];
            
            if(test[number])
                total += test[number];
            } 
        }
  
        cout << endl << "The largest number is: " << copy << endl;  
        cout << "The lowest number is: " << low << endl;
        cout << "The total of all the numbers are: " << total << endl << endl;
                       
        file.close();
    }
}
