#include <iostream>
#include <string>

using namespace std;

//Function Prototypes
void funcChoiceAuto();
void funcChoiceManualDecode();
void funcChoiceManualEncode();
string funcDecode(string strConvert);
string funcEncode(string strConvert);

int main()
{
    string choice;
    
    do
    {
         system("cls");
         system("color 07");
         
         cout << "Abe's Decoder 1.0" << endl 
              << "-----------------" << endl
              << "Please enter a menu option:" << endl 
              << endl
              << "1 - Auto Entry" << endl
              << "2 - Manual Entry Decode" << endl
              << "3 - Manual Entry Encode" << endl
              << "4 - Exit" << endl
              << "-----------------" << endl
              << endl;
         
         cin >> choice;
         
         if ( choice == "1" )
         {
              funcChoiceAuto();
         }
         else if ( choice == "2" )
         {
              funcChoiceManualDecode();
         }
         else if ( choice == "3" )
         {
              funcChoiceManualEncode();
         }
         else if ( choice == "4" )
         {
              cout << endl
                   << " ---------------------" << endl
                   << "| TERMINATING PROGRAM |" << endl
                   << " ---------------------" << endl
                   << endl;
              system("pause");
         }
         else
         {
             cout << endl << endl
                  << "ERROR(1): INVALID ENTRY" << endl
                  << endl;
             system("color 7c");
             system("pause");
         }
              
    }while(choice != "4");
    
}

//Function: Automatically enters user data and displays output.
void funcChoiceAuto()
{
     system("cls");
     
     string autocode = "Yjr vpfr eptf od s voyu om Mre Uptl dysyr, ejovj od frdvtonrf sd s nodpm om yjr ID.";
     
     cout << "Abe's Decoder 1.0" << endl 
          << "-----------------" << endl
          << "Data to be input:" << endl
          << endl
          << autocode << endl
          << endl;
          
     system("pause");
     system("cls");
     
     cout << "Abe's Decoder 1.0" << endl 
          << "-----------------" << endl
          << "Data to be input:" << endl
          << endl
          << autocode << endl
          << endl
          << "Data output:" << endl
          << endl
          << funcDecode(autocode) << endl
          << endl
          << endl
          << "The answer: Buffalo" << endl
          << endl
          << "The program will now return to the home menu." << endl;
          
     system("pause");
}

//Function: Allows manual entry of data, to be Decoded by the program.
void funcChoiceManualDecode()
{
     system("cls");
     cin.ignore(1024, '\n');
     
     string strToDecode;
     
     cout << "Abe's Decoder 1.0" << endl 
          << "-----------------" << endl
          << "Data to be input:" << endl
          << endl;
          
     getline ( cin, strToDecode );
     
     system("pause");
     system("cls");
     
     cout << "Abe's Decoder 1.0" << endl 
          << "-----------------" << endl
          << "Data to be input:" << endl
          << endl
          << strToDecode << endl
          << endl
          << "Data output:" << endl
          << endl
          << funcDecode(strToDecode) << endl
          << endl
          << "The program will now return to the home menu." << endl;
          
     system("pause");
}

//Function: Allows manual entry of data, to be Encoded by the program.
void funcChoiceManualEncode()
{
     system("cls");
     cin.ignore(1024, '\n');
     
     string strToEncode;
     
     cout << "Abe's Decoder 1.0" << endl 
          << "-----------------" << endl
          << "Data to be input:" << endl
          << endl;
          
     getline ( cin, strToEncode );
     
     system("pause");
     system("cls");
     
     cout << "Abe's Decoder 1.0" << endl 
          << "-----------------" << endl
          << "Data to be input:" << endl
          << endl
          << strToEncode << endl
          << endl
          << "Data output:" << endl
          << endl
          << funcEncode(strToEncode) << endl
          << endl
          << "The program will now return to the home menu." << endl;
          
     system("pause");
}

//Function: Decode string then return
string funcDecode(string strToConvert)
{
    string strEnglish = " abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ,.";
    string strCode    = " lvxswdfguhjknbiopearycqztmLVXSWDFGUHJKNBIOPEARYCQZTM,.";
    string strConverted = strToConvert;
    
    for ( int i = 0; i < strToConvert.length(); i++ )
    {
        for ( int x = 0; x < strCode.length(); x++)
        {
            if ( strToConvert[i] == strEnglish[x] )
            {
                 strConverted[i] = strCode[x];
            }
        }
    }
    
    return strConverted;
    
}

//Function: Encode string then return
string funcEncode(string strToConvert)
{
    string strEnglish = " abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ,.";
    string strCode    = " lvxswdfguhjknbiopearycqztmLVXSWDFGUHJKNBIOPEARYCQZTM,.";
    string strConverted = strToConvert;
    
    for ( int i = 0; i < strToConvert.length(); i++ )
    {
        for ( int x = 0; x < strCode.length(); x++)
        {
            if ( strToConvert[i] == strCode[x] )
            {
                 strConverted[i] = strEnglish[x];
            }
        }
    }
    
    return strConverted;
    
}
