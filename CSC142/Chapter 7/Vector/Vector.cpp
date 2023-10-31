#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int size1, size2, high1 = 0, high2 = 0, low1 = 999999, low2 = 999999, comparisons = 0;
    
    unsigned seed = time(0);
    srand(seed);
    
    vector<int> list1(1 + rand() % 10);
    vector<int> list2(1 + rand() % 10);
    
    cout << "Starting Sheet:" << endl << endl;
    
    cout << "List 1: " << endl;
    for(int x = 0; x < list1.size(); x++)
    {
        list1[x] = 1 + rand() % 10;
        
        if(high1 < list1[x])
            high1 = list1[x];
            
        if(low1 > list1[x])
            low1 = list1[x];
    }
    cout << endl << "Highest # in list 1: " << high1
         << endl << "Lowest # in list 1: " << low1
         << endl << "Amount of numbers in list 1: " 
         << list1.size() << endl;
    
    
    cout << endl << "List 2: " << endl;
    for(int y = 0; y < list2.size(); y++)
    {
        list2[y] = 1 + rand() % 10;
        
        if(high2 < list2[y])
            high2 = list2[y];
            
        if(low2 > list2[y])
            low2 = list2[y];
    }
    cout << endl << "Highest # in list 2: " << high2
         << endl << "Lowest # in list 2: " << low2
         << endl << "Amount of numbers in list 2: " 
         << list2.size() << endl << endl;
         
    cout << "--------------------------------" << endl;
    
    if(list1.size() > list2.size())
    {
        while(list1.size() > list2.size())
            list1.pop_back();
    }
    else if(list2.size() > list1.size())
    {
        while(list2.size() > list1.size())
            list2.pop_back();
    }
    
    cout << "After alterations: " << endl << endl;
    
    high1 = 0, high2 = 0, low1 = 999999, low2 = 999999;
    
    cout << "List 1: " << endl;
    for(int x = 0; x < list1.size(); x++)
    {
        if(high1 < list1[x])
            high1 = list1[x];
            
        if(low1 > list1[x])
            low1 = list1[x];
    }
    cout << endl << "Highest # in list 1: " << high1
         << endl << "Lowest # in list 1: " << low1
         << endl << "Amount of numbers in list 1: " 
         << list1.size() << endl;
    
    
    cout << endl << "List 2: " << endl;
    for(int y = 0; y < list2.size(); y++)
    {
        if(high2 < list2[y])
            high2 = list2[y];
            
        if(low2 > list2[y])
            low2 = list2[y];
    }
    cout << endl << "Highest # in list 2: " << high2
         << endl << "Lowest # in list 2: " << low2
         << endl << "Amount of numbers in list 2: " 
         << list2.size() << endl << endl;
    
    cout << "--------------------------------" << endl;
    cout << "Comparison sheet: " << endl << endl;
    
    for(int z = 0; z < list1.size(); z++)
    {
        if(list1[z] == list2[z])
        {
            comparisons++;
            cout << "Position [" << z << "] match: " << list1[z] << " | " << list2[z] << endl;
        }
    }
    
    if(comparisons == 0)
        cout << "There are no matching values in matching positions." << endl;
        
    cout << endl << "List 1: " << endl;
    for(int q = 0; q < list1.size(); q++)
        cout << list1[q] << endl;
    
    
    cout << endl << "List 2: " << endl;
    for(int r = 0; r < list2.size(); r++)
        cout << list2[r] << endl;
    
    cout << endl;
    system("pause");
}
