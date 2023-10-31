#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Prototypes
void bubsort(int [], int);
int selsort(int [], int);
void linsearch(int [], int);
void binsearch(int [], int);

int main()
{
    unsigned seed = time(0);
    srand(seed);
    int size;
    size = 0;
    
    ofstream afile;
    ifstream bfile;
    
    cout << "Hey there, please choose a number of random numbers to generate:" << endl;
    cin >> size;
    
    int array[size];
    int array2[size];
    int sortarray[size];
    
    afile.open("Array File.txt");
    
    for(int i = 0; i < size; i++)
    {
        array[i] = rand();
        afile << array[i] << endl;
    }
    
    afile.close();
    
    bfile.open("Array File.txt");
    
    cout << endl << "Original Set - After being read back in from file." << endl;
    
    for(int i = 0; i < size; i++)
    {
        bfile >> array2[i];
        cout << array2[i] << endl;
    }
    
    bfile.close();
    
    bubsort(array, size);
    selsort(array, size);
    
    system("pause");
}

void bubsort(int array[],int size)
{
    int comparison, comparisons, swap, swaps, swaps2;
    bool compare;
    compare = true;
    swaps = 0;
    comparisons = 0;
    do
    {
        comparison = 0;
        swaps2 = 0;
        
        for(int i = 0; i < size - 1; i++)
        {
            comparison += 1;
            if(array[i] > array[i + 1])
            {
                swap = array[i];
                array[i] = array[i + 1];
                array[i + 1] = swap;
                swaps += 1;
                swaps2 += 1;
            }
        }
        
        if(swaps2 == 0)
            compare = false;
            
        comparisons += comparison;
    }while(compare);
    
    cout << endl << "Bubble Sort Method:" << endl;
    for(int i = 0; i < size; i++)
    {
        cout << i << ". " << array[i] << endl;
    }
    cout << endl << "Number of comparisons: " << comparisons << endl
         << "Number of swaps: " << swaps << endl;
}
    
int selsort(int array[],int size)
{
    int startScan, minIndex, minValue, swaps = 0, comparisons = 0;
    
    for(startScan = 0; startScan < (size - 1); startScan++)
    {
        swaps++;
        minIndex = startScan;
        minValue = array[startScan];
        for(int index = startScan + 1; index < size; index++)
        {
            comparisons++;
            if(array[index] < minValue)
            {
                minValue = array[index];
                minIndex = index;
                
            }
        }
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
        
    }
    
    cout << endl << "Selection Sort Method:" << endl;
    for(int i = 0; i < size; i++)
    {
        cout << i << ". " << array[i] << endl;
    }
    cout << endl << "Number of comparisons: " << comparisons << endl
         << "Number of swaps: " << swaps << endl;
        
}
