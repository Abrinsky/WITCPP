//Program to take test scores, format them, and then output a result
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //declaring the variables
    double score1;
    double score2;
    double score3;
    double score4;
    double score5;
    double average;
    
    //Asking for the input
    cout << "Please input your test scores" << endl;
    cout << "Score #1:  ";
    cin >> score1;
    cout << "Score #2:  ";
    cin >> score2;
    cout << "Score #3:  ";
    cin >> score3;
    cout << "Score #4:  ";
    cin >> score4;
    cout << "Score #5:  ";
    cin >> score5;
    
    //calculate the average
    average = (score1 + score2 + score3 + score4 + score5) / 5;
    
    cout << setprecision(1) << fixed;
    cout << "\n \nYour average test score is: " << average << endl << endl;
    
    system("pause");
    
    return 0;
    
}
    
