#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <vector>
#include <cstdlib>

using namespace std;

//globals
ofstream w2file;

//prototypes
void writestart();
void readstart(string &str1, string &str2, string &str3);
void charcount(string *, int strnum);
void palindrome(string *, int strnum);
void wordcount(string *, int strnum);
void lettercount(string *, int strnum);
void vowelcount(string *, int strnum);
void conscount(string *, int strnum);
void upcount(string *, int strnum);
void lowcount(string *, int strnum);
void spacecount(string *, int strnum);
void digitcount(string *, int strnum);
void digitotal(vector<int>);

int main()
{
    int done1 = 0, done2 = 0, done3 = 0, choice = 0;
    string str1, str2, str3;
    string *strptr1, *strptr2, *strptr3;
    
    
    strptr1 = &str1;
    strptr2 = &str2;
    strptr3 = &str3;
    
    writestart();
    readstart(str1, str2, str3);
    
    system("cls");
    
    while(choice != 4)
    {
        cout << "Please enter a choice: " << endl
             << "1. View the results of the data by string" << endl
             << "2. View the results by function" << endl
             << "3. View the results of each by length" << endl
             << "4. Exit" << endl << endl;
        cin >> choice;
        
        system("cls");
        
        if(choice == 1 && done1 == 0)
        {
            done1 = 1;
            w2file.open("choice 1.txt");
            
            cout << endl << "String 1: "; 
            w2file << "String 1: "; 
            charcount(strptr1, 1); palindrome(strptr1, 1); wordcount(strptr1, 1); 
            lettercount(strptr1, 1); vowelcount(strptr1, 1); conscount(strptr1, 1); upcount(strptr1, 1); lowcount(strptr1, 1); 
            spacecount(strptr1, 1); digitcount(strptr1, 1);  
            
            cout << endl << endl << "String 2: "; 
            w2file << endl << endl << "String 2: "; 
            charcount(strptr2, 2); palindrome(strptr2, 2); wordcount(strptr2, 2); 
            lettercount(strptr2, 2); vowelcount(strptr2, 2); conscount(strptr2, 2); upcount(strptr2, 2); lowcount(strptr2, 2);
            spacecount(strptr2, 2); digitcount(strptr2, 2);
            
            cout << endl << endl << "String 3: "; 
            w2file << endl << endl << "String 3: "; 
            charcount(strptr3, 3); palindrome(strptr3, 3); wordcount(strptr3, 3); 
            lettercount(strptr3, 3); vowelcount(strptr3, 3); conscount(strptr3, 3); upcount(strptr3, 3); lowcount(strptr3, 3);
            spacecount(strptr3, 3); digitcount(strptr3, 3);
            
            cout << endl << endl;
            w2file << endl << endl;
            w2file.close();
            
        }
        else if(choice == 2 && done2 == 0)
        {
            done2 = 1;
            
            w2file.open("choice 2.txt");
            
            cout << endl << "Characters Function: "; 
            w2file << endl << "Characters Function: "; 
            charcount(strptr1, 1); charcount(strptr2, 2);charcount(strptr3, 3);
            cout << endl << endl << "Palindrome Function: "; 
            w2file << endl << endl << "Palindrome Function: "; 
            palindrome(strptr1, 1); palindrome(strptr2, 2); palindrome(strptr3, 3);
            cout << endl << endl << "Words Function: "; 
            w2file << endl << endl << "Words Function: "; 
            wordcount(strptr1, 1); wordcount(strptr2, 2); wordcount(strptr3, 3);
            cout << endl << endl << "Letters Function: "; 
            w2file << endl << endl << "Letters Function: "; 
            lettercount(strptr1, 1); lettercount(strptr2, 2); lettercount(strptr3, 3);
            cout << endl << endl << "Vowels Function: "; 
            w2file << endl << endl << "Vowels Function: "; 
            vowelcount(strptr1, 1); vowelcount(strptr2, 2); vowelcount(strptr3, 3);
            cout << endl << endl << "Consonants Function: "; 
            w2file << endl << endl << "Consonants Function: "; 
            conscount(strptr1, 1); conscount(strptr2, 2); conscount(strptr3, 3);
            cout << endl << endl << "Uppercase Function: "; 
            w2file << endl << endl << "Uppercase Function: "; 
            upcount(strptr1, 1); upcount(strptr2, 2); upcount(strptr3, 3);
            cout << endl << endl << "Lowercase Function: "; 
            w2file << endl << endl << "Lowercase Function: "; 
            lowcount(strptr1, 1); lowcount(strptr2, 2); lowcount(strptr3, 3);
            cout << endl << endl << "Space Function: "; 
            w2file << endl << endl << "Space Function: "; 
            spacecount(strptr1, 1); spacecount(strptr2, 2); spacecount(strptr3, 3);
            cout << endl << endl << "Digits Function: "; 
            w2file << endl << endl << "Digits Function: "; 
            digitcount(strptr1, 1); digitcount(strptr2, 2); digitcount(strptr3, 3);
            
            cout << endl << endl;
            w2file << endl << endl;
            w2file.close();
        }
        else if(choice == 3 && done3 == 0)
        {
            done3 = 1;
            
            w2file.open("choice 3.txt");
            
			if(str1 > str2 && str1 > str3)
			{
				cout << endl << "String 1: "; 
				w2file << "String 1: "; 
				charcount(strptr1, 1); palindrome(strptr1, 1); wordcount(strptr1, 1); 
				lettercount(strptr1, 1); vowelcount(strptr1, 1); conscount(strptr1, 1); upcount(strptr1, 1); lowcount(strptr1, 1); 
				spacecount(strptr1, 1); digitcount(strptr1, 1);

				if(str2 > str3)
				{
					cout << endl << endl << "String 2: "; 
					w2file << endl << endl << "String 2: "; 
					charcount(strptr2, 2); palindrome(strptr2, 2); wordcount(strptr2, 2); 
					lettercount(strptr2, 2); vowelcount(strptr2, 2); conscount(strptr2, 2); upcount(strptr2, 2); lowcount(strptr2, 2);
					spacecount(strptr2, 2); digitcount(strptr2, 2);

					cout << endl << endl << "String 3: "; 
                    w2file << endl << endl << "String 3: "; 
					charcount(strptr3, 3); palindrome(strptr3, 3); wordcount(strptr3, 3); 
					lettercount(strptr3, 3); vowelcount(strptr3, 3); conscount(strptr3, 3); upcount(strptr3, 3); lowcount(strptr3, 3);
					spacecount(strptr3, 3); digitcount(strptr3, 3);
				}
				else
				{
					cout << endl << endl << "String 3: "; 
                    w2file << endl << endl << "String 3: "; 
					charcount(strptr3, 3); palindrome(strptr3, 3); wordcount(strptr3, 3); 
					lettercount(strptr3, 3); vowelcount(strptr3, 3); conscount(strptr3, 3); upcount(strptr3, 3); lowcount(strptr3, 3);
					spacecount(strptr3, 3); digitcount(strptr3, 3);

					cout << endl << endl << "String 2: "; 
					w2file << endl << endl << "String 2: "; 
					charcount(strptr2, 2); palindrome(strptr2, 2); wordcount(strptr2, 2); 
					lettercount(strptr2, 2); vowelcount(strptr2, 2); conscount(strptr2, 2); upcount(strptr2, 2); lowcount(strptr2, 2);
					spacecount(strptr2, 2); digitcount(strptr2, 2);
				}
				cout << endl << endl;
                w2file << endl << endl;
                w2file.close();
			}
    
			if(str2 > str3 && str2 > str1)
			{
				cout << endl << "String 2: "; 
				w2file << "String 2: "; 
				charcount(strptr2, 2); palindrome(strptr2, 2); wordcount(strptr2, 2); 
				lettercount(strptr2, 2); vowelcount(strptr2, 2); conscount(strptr2, 2); upcount(strptr2, 2); lowcount(strptr2, 2);
				spacecount(strptr2, 2); digitcount(strptr2, 2);

				if(str3 > str1)
				{
					cout << endl << endl << "String 3: "; 
                    w2file << endl << endl << "String 3: "; 
					charcount(strptr3, 3); palindrome(strptr3, 3); wordcount(strptr3, 3); 
					lettercount(strptr3, 3); vowelcount(strptr3, 3); conscount(strptr3, 3); upcount(strptr3, 3); lowcount(strptr3, 3);
					spacecount(strptr3, 3); digitcount(strptr3, 3);

					cout << endl << endl << "String 1: "; 
					w2file << endl << endl << "String 1: "; 
					charcount(strptr1, 1); palindrome(strptr1, 1); wordcount(strptr1, 1); 
					lettercount(strptr1, 1); vowelcount(strptr1, 1); conscount(strptr1, 1); upcount(strptr1, 1); lowcount(strptr1, 1); 
					spacecount(strptr1, 1); digitcount(strptr1, 1);
				}
				else
				{
					cout << endl << endl << "String 1: "; 
					w2file << endl << endl << "String 1: "; 
					charcount(strptr1, 1); palindrome(strptr1, 1); wordcount(strptr1, 1); 
					lettercount(strptr1, 1); vowelcount(strptr1, 1); conscount(strptr1, 1); upcount(strptr1, 1); lowcount(strptr1, 1); 
					spacecount(strptr1, 1); digitcount(strptr1, 1);

					cout << endl << endl << "String 3: "; 
					w2file << endl << endl << "String 3: "; 
					charcount(strptr3, 3); palindrome(strptr3, 3); wordcount(strptr3, 3); 
					lettercount(strptr3, 3); vowelcount(strptr3, 3); conscount(strptr3, 3); upcount(strptr3, 3); lowcount(strptr3, 3);
					spacecount(strptr3, 3); digitcount(strptr3, 3);
				}
				cout << endl << endl;
                w2file << endl << endl;
                w2file.close();
			}
    
			if(str3 > str2 && str3 > str1)
			{
				cout << endl << "String 3: "; 
				w2file << "String 3: "; 
				charcount(strptr3, 3); palindrome(strptr3, 3); wordcount(strptr3, 3); 
				lettercount(strptr3, 3); vowelcount(strptr3, 3); conscount(strptr3, 3); upcount(strptr3, 3); lowcount(strptr3, 3);
				spacecount(strptr3, 3); digitcount(strptr3, 3);

				if(str2 > str1)
				{
					cout << endl << endl << "String 2: "; 
					w2file << endl << endl << "String 2: "; 
					charcount(strptr2, 2); palindrome(strptr2, 2); wordcount(strptr2, 2); 
					lettercount(strptr2, 2); vowelcount(strptr2, 2); conscount(strptr2, 2); upcount(strptr2, 2); lowcount(strptr2, 2);
					spacecount(strptr2, 2); digitcount(strptr2, 2);

					cout << endl << endl << "String 1: "; 
					w2file << endl << endl << "String 1: "; 
					charcount(strptr1, 1); palindrome(strptr1, 1); wordcount(strptr1, 1); 
					lettercount(strptr1, 1); vowelcount(strptr1, 1); conscount(strptr1, 1); upcount(strptr1, 1); lowcount(strptr1, 1); 
					spacecount(strptr1, 1); digitcount(strptr1, 1);
				}
				else
				{
					cout << endl << endl << "String 1: "; 
					w2file << endl << endl << "String 1: "; 
					charcount(strptr1, 1); palindrome(strptr1, 1); wordcount(strptr1, 1); 
					lettercount(strptr1, 1); vowelcount(strptr1, 1); conscount(strptr1, 1); upcount(strptr1, 1); lowcount(strptr1, 1); 
					spacecount(strptr1, 1); digitcount(strptr1, 1);

					cout << endl << endl << "String 2: "; 
					w2file << endl << endl << "String 2: "; 
					charcount(strptr2, 2); palindrome(strptr2, 2); wordcount(strptr2, 2); 
					lettercount(strptr2, 2); vowelcount(strptr2, 2); conscount(strptr2, 2); upcount(strptr2, 2); lowcount(strptr2, 2);
					spacecount(strptr2, 2); digitcount(strptr2, 2);
				}
				cout << endl << endl;
                w2file << endl << endl;
                w2file.close();
			}
        }
        else if(choice == 4)
        {
            break;
        }
        else
        {
            cout << "I'm sorry, but you have either given an invalid choice, or you have already chosen that option..." << endl << endl;
        }
    }
    
    cout << endl;
    system("pause");
}

//Starting Function that asks for the strings from user input to write to file for later usage.
void writestart()
{
    ofstream wfile;
    string str1, str2, str3;
    
    cout << "Please enter your first string:" << endl;
    getline (cin,str1);
    
    cout << "Please enter your second string:" << endl;
    getline (cin,str2);
    
    cout << "Please enter your third string:" << endl;
    getline (cin,str3);
    
    wfile.open("Stringfile.txt");
    wfile << str1 << endl
          << str2 << endl
          << str3 << endl;
    wfile.close();
}

//Function that reads the strings in for the program to use/format etc...
void readstart(string &str1, string &str2, string &str3)
{
    ifstream rfile("Stringfile.txt");
    getline(rfile, str1);
    getline(rfile, str2);
    getline(rfile, str3);
    rfile.close();
}

//Determines and returns the number of characters in a string.
void charcount(string *str, int strnum)
{
    cout << endl << "Character(s) in string " << strnum << ": " << (*str).length();
    w2file << endl << "Character(s) in string " << strnum << ": " << (*str).length();
}

//Reverses a string, displays it both forwards and backwards, and states if it is a palindrome
void palindrome(string *str, int strnum)
{
    int length = (*str).length();
    string reverse;
    
    for(int i = 0; i < length + 1; i++)
    {
        reverse.append(*str, length - i, 1);
    }
    
    if(reverse == *str)
    {
        cout << endl << "String " << strnum << " is: a palindrome" << endl;
        w2file << endl << "String " << strnum << " is: a palindrome" << endl;
    }
    else
    {
        cout << endl << "String " << strnum << " is: not a palindrome" << endl;
        w2file << endl << "String " << strnum << " is: not a palindrome" << endl;
    }
    
    cout << "    Original: " << *str << endl
         << "    Reversed: " << reverse;
    
    w2file << "    Original: " << *str << endl
           << "    Reversed: " << reverse;
}

//Counts and displays the number of words in a string
void wordcount(string *str, int strnum)
{
    int length = (*str).length();
    int words = 1;
    
    for(int i = 0; i < length; i++)
    {
        if(isalnum((*str)[i]) && isspace((*str)[i + 1]))
            words++;
    }
    
    if(*str == "")
        words = 0;
    
    cout << endl << "String " << strnum << " has: " << words << " word(s) in it.";
    w2file << endl << "String " << strnum << " has: " << words << " word(s) in it.";
}

//Counts the number of characters in each word and displays the number of words by 'number of letters'
void lettercount(string *str, int strnum)
{
    int length = (*str).length();
    int letters = 0;
    vector<int> wordsizes(length + 1, 0);
    
    for(int i = 0; i < length; i++)
    {
        if(isalpha((*str)[i]))
            letters++;
        
        if(isprint((*str)[i]) && isspace((*str)[i + 1]))
        {
            wordsizes[letters] += 1;
            letters = 0;
        }
        else if(isprint((*str)[i]) && !isprint((*str)[i + 1]))
        {
            wordsizes[letters] += 1;
            letters = 0;
        }
    }
    
    for(int x = 1; x < wordsizes.size(); x++)
    {
        if(wordsizes[x] != 0)
        {
            cout << endl << "String " << strnum << " has: " << wordsizes[x] << ", " << x << " letter word(s) in it.";
            w2file << endl << "String " << strnum << " has: " << wordsizes[x] << ", " << x << " letter word(s) in it.";
        }
    }
}

//Displays the number of vowels in a string
void vowelcount(string *str, int strnum)
{
    int length = (*str).length();
    int vowels = 0;
    
    for(int i = 0; i < length; i++)
    {
        if((*str)[i] == 'a' || (*str)[i] == 'e' || (*str)[i] == 'i' || (*str)[i] == 'o' || (*str)[i] == 'u' || (*str)[i] == 'y' || 
           (*str)[i] == 'A' || (*str)[i] == 'E' || (*str)[i] == 'I' || (*str)[i] == 'O' || (*str)[i] == 'U' || (*str)[i] == 'Y')
            vowels++;
    }
    cout << endl << "String " << strnum << " has: " << vowels << " vowel(s) in it.";
    w2file << endl << "String " << strnum << " has: " << vowels << " vowel(s) in it.";
}

//Displays the number of consonants in a string
void conscount(string *str, int strnum)
{
    int length = (*str).length();
    int consonants = 0;
    
    for(int i = 0; i < length; i++)
    {
        if((*str)[i] != 'a' && (*str)[i] != 'e' && (*str)[i] != 'i' && (*str)[i] != 'o' && (*str)[i] != 'u' && (*str)[i] != 'y' && 
           (*str)[i] != 'A' && (*str)[i] != 'E' && (*str)[i] != 'I' && (*str)[i] != 'O' && (*str)[i] != 'U' && (*str)[i] != 'Y' && isalpha((*str)[i]))
            consonants++;
    }
    cout << endl << "String " << strnum << " has: " << consonants << " consonant(s) in it.";
    w2file << endl << "String " << strnum << " has: " << consonants << " consonant(s) in it.";
}

//Displays the number of uppercase characters in a string
void upcount(string *str, int strnum)
{
    int length = (*str).length();
    int uppercase = 0;
    
    for(int i = 0; i < length; i++)
    {
        if(isupper((*str)[i]))
            uppercase++;
    }
    cout << endl << "String " << strnum << " has: " << uppercase << " uppercase letters in it.";
    w2file << endl << "String " << strnum << " has: " << uppercase << " uppercase letters in it.";
}

//Displays the number of lowercase characters in a string
void lowcount(string *str, int strnum)
{
    int length = (*str).length();
    int lowercase = 0;
    
    for(int i = 0; i < length; i++)
    {
        if(islower((*str)[i]))
            lowercase++;
    }
    cout << endl << "String " << strnum << " has: " << lowercase << " lowercase letters in it.";
    w2file << endl << "String " << strnum << " has: " << lowercase << " lowercase letters in it.";
}

//Displays the number of white spaces in a string
void spacecount(string *str, int strnum)
{
    int length = (*str).length();
    int spaces = 0;
    
    for(int i = 0; i < length; i++)
    {
        if(isspace((*str)[i]))
            spaces++;
    }
    cout << endl << "String " << strnum << " has: " << spaces << " white spaces in it.";
    w2file << endl << "String " << strnum << " has: " << spaces << " white spaces in it.";
}

//Displays the number of digits in a string
void digitcount(string *str, int strnum)
{
    int length = (*str).length();
    int digits = 0;
    int test = 0;
    
    vector<int> digital(length, 0);
    
    cout << digital.size();
    
    for(int i = 0; i < length; i++)
    {
        if(isdigit((*str)[i]))
        {
            digits++;
            digital[i] = (*str)[i];
        }
    }
    
    if(digits > 0)
    {
        cout << endl << "String " << strnum << " has: " << digits << " digits in it:" << endl;
        w2file << endl << "String " << strnum << " has: " << digits << " digits in it:" << endl;
        digitotal(digital);
    }
    else
    {
        cout << endl << "String " << strnum << " has no digits in it.";
        w2file << endl << "String " << strnum << " has no digits in it.";
    }
}

//Displays the digits in a string and their total
void digitotal(vector<int> digital)
{
    int length = digital.size();
    char temp[length];
    int temp2[length];
    int total = 0;
    
    for(int p = 0; p < length; p++)
    {
        if(digital[p] != 0)
            digital[p] -= 48;
    }
    
    
    for(int i = 0; i < length; i++)
    {
        if(digital[i] != 0)
        {
            cout << " " << digital[i];
            w2file << " " << digital[i];
            total += digital[i];
        }
    }
    cout << ", Total of these numbers is: " << total;
    w2file << ", Total of these numbers is: " << total;
}
