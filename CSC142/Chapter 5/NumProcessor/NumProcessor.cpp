#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>

using namespace std;

int amount, sum, largest, smallest;
float average;
char filea[50];

int amtcheck();
int sumcheck();
int largecheck();
int smallcheck();

int main()
{
    char fileb[50];
    ofstream resultfile;
    
    cout << "Number Processor (To and from a file)" << endl
         << "(for the filename \".txt\" will be added automatically)" << endl
         << "-------------------------------------" << endl
         << "Filename: ";
    
    cin >> filea;
    
    strcpy(fileb, filea);
    
    strcat(filea, ".txt");
    strcat(fileb, "-results.txt");
    
    amount = amtcheck();
    sum = sumcheck();
    average = sum / amount;
    largest = largecheck();
    smallest = smallcheck();
    
    cout << endl
         << "Filename: " << filea << endl 
         << "Outputting to file: " << fileb << endl 
         << "There are " << amount << " numbers in the file." << endl 
         << "The sum of the numbers is: " << sum << endl 
         << "The average of the numbers is: " << average << endl 
         << "The smallest number in the file is " << smallest 
         << ", and the largest number is "<< largest << "." << endl << endl;
    
    resultfile.open(fileb);
    
    resultfile << "Filename: " << filea << endl
               << "Output to file: " << fileb << endl 
               << "There are " << amount << " numbers in the file." << endl 
               << "The sum of the numbers is: " << sum << endl 
               << "The average of the numbers is: " << average << endl 
               << "The smallest number in the file is " << smallest 
               << ", and the largest number is "<< largest << "." << endl;
    
    resultfile.close();
    
    system("pause");
}

int amtcheck()
{
    int nums;
    string filetext;
    ifstream fileamt;
    
    nums = 0;
    
    fileamt.open(filea);
    
    
    
    while(fileamt.good())
    {
        fileamt >> filetext;
        ++nums;
    }
    
    fileamt.close();
    
    return(nums);
}

int sumcheck()
{
    int fnum;
    int filetext;
    ifstream filesum;
    
    fnum = 0;
    
    filesum.open(filea);
    
    
    while(filesum.good())
    {
        filesum >> filetext;
        fnum += filetext;
    }
    
    filesum.close();
    
    return(fnum);
}

int largecheck()
{
    int lnum;
    int filetext;
    ifstream filelarge;
    
    lnum = 0;
    
    filelarge.open(filea);
    
    while(filelarge.good())
    {
        if(lnum < filetext)
        {
           lnum = filetext;
        }
        
        filelarge >> filetext;
    }
    
    filelarge.close();
    
    return(lnum);
}

int smallcheck()
{
    int snum;
    int filetext;
    ifstream filesmall;
    
    snum = 99999999;
    
    filesmall.open(filea);
    
    
    while(filesmall.good())
    {
        if(snum > filetext)
        {
           snum = filetext;
        }
        
        filesmall >> filetext;
    }
    
    filesmall.close();
    
    return(snum);
}
