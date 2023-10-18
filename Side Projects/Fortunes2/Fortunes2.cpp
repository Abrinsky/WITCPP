//###############################################
//# Fortunes: Reveal your high detail future!
//#
//# Written By: Abe Galinsky
//#
//###############################################

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <sstream>
#include <algorithm>
#include <string>

using namespace std;

//Function Prototypes
void tellerDialog(string strDialogID, string strTarget);
void fortuneRoller(string strDialogID, string strTarget);
string yourDialog();
string getData(string strNameType);
int getFileCount(string strFileName);
int getIntVal(string strConvert);
int diceRoll(int lowNum, int highNum);

int main()
{
    string strUserName, strUserAge, strUserGender, strUserOrientation, strUserPrint;
    bool bNameCheck, bAgeCheck, bGenderCheck, bOrientationCheck, bPrintCheck;
    int intUserAge, intOrientationID = 0;
    unsigned seed = time(0);
    srand(seed);

    tellerDialog("dIntroName", "");

    //---------------------------------------
    //check to get a good username
    //---------------------------------------
    do
    {
        strUserName = yourDialog();

        if(strUserName[0] == '\0' || strUserName[0] == ' ')
        {
            tellerDialog("dIntroNameRe", "");
            bNameCheck = true;
        }
        else
        {
            bNameCheck = false;
        }

    }
    while(bNameCheck);

    tellerDialog("dIntroAge", strUserName);

    //---------------------------------------
    //check to get a good user age
    //---------------------------------------
    do
    {
        strUserAge = yourDialog();

        stringstream ssAgeTest(strUserAge);

        if((ssAgeTest >> intUserAge).fail())
        {
            tellerDialog("dIntroAgeRe", "");
            bAgeCheck = true;
        }
        else
        {
            intUserAge = getIntVal(strUserAge);
            bAgeCheck = false;
        }

    }
    while(bAgeCheck);

    tellerDialog("dIntroGender", strUserName);

    //---------------------------------------
    //check to get a good gender
    //---------------------------------------
    do
    {
        strUserGender = yourDialog();

        if(tolower(strUserGender[0]) == 'm')
        {
            intOrientationID += 10;
            bGenderCheck = false;
        }
        else if(tolower(strUserGender[0]) == 'f')
        {
            intOrientationID += 20;
            bGenderCheck = false;
        }
        else
        {
            tellerDialog("dIntroGenderRe", "");
            bGenderCheck = true;
        }

    }
    while(bGenderCheck);

    tellerDialog("dIntroOrientation", "");

    //---------------------------------------
    //check to get a good orientation
    //---------------------------------------
    do
    {
        strUserOrientation = yourDialog();

        if(tolower(strUserOrientation[0]) == 'm')
        {
            intOrientationID += 1;
            bOrientationCheck = false;
        }
        else if(tolower(strUserOrientation[0]) == 'w')
        {
            intOrientationID += 2;
            bOrientationCheck = false;
        }
        else if(tolower(strUserOrientation[0]) == 'b')
        {
            intOrientationID += 3;
            bOrientationCheck = false;
        }
        else
        {
            tellerDialog("dIntroOrientationRe", "");
            bOrientationCheck = true;
        }

    }
    while(bOrientationCheck);

    tellerDialog("dIntroFinal", strUserName);

    //---------------------------------------
    //check whether to print the fortune to a file
    //---------------------------------------
    do
    {
        strUserPrint = yourDialog();

        if(tolower(strUserPrint[0]) == 'y')
        {

            bPrintCheck = false;
        }
        else if(tolower(strUserPrint[0]) == 'n')
        {

            bPrintCheck = false;
        }
        else
        {
            tellerDialog("dIntroFinalRe", "");
            bPrintCheck = true;
        }

    }
    while(bPrintCheck);



    return 0;
}

//---------------------------------------
//Function: no return, displays dialog. requires ID and a name or blank.
//---------------------------------------
void tellerDialog(string strDialogID, string strTarget)
{
    cout << "Fortune Teller:" << endl << endl;

    if (strDialogID == "DEBUG")
    {
        cout << "DEBUG INFORMATION" << endl
             << endl
             << "File Info" << endl
             << endl
             << "boynames.txt contains " << getFileCount("boynames.txt") << " lines of text." << endl
             << "girlnames.txt contains "  << getFileCount("girlnames.txt") << " lines of text." << endl
             << "lastnames.txt contains " << getFileCount("lastnames.txt") << " lines of text." << endl
             << endl
             << "Name Test" << endl
             << endl
             << "Girl Tests (x5): " << endl
             << "1. " << getData("GirlName") << " " << getData("LastName") << endl
             << "2. " << getData("GirlName") << " " << getData("LastName") << endl
             << "3. " << getData("GirlName") << " " << getData("LastName") << endl
             << "4. " << getData("GirlName") << " " << getData("LastName") << endl
             << "5. " << getData("GirlName") << " " << getData("LastName") << endl
             << endl
             << "Boy Tests (x5): "  << endl
             << "1. " << getData("BoyName") << " " << getData("LastName") << endl
             << "2. " << getData("BoyName") << " " << getData("LastName") << endl
             << "3. " << getData("BoyName") << " " << getData("LastName") << endl
             << "4. " << getData("BoyName") << " " << getData("LastName") << endl
             << "5. " << getData("BoyName") << " " << getData("LastName") << endl
             << endl
             << "Dice Test (10)  : " << diceRoll(1, 10) << endl
             << "Dice Test (100) : " << diceRoll(1, 100) << endl
             << "Dice Test (1000): " << diceRoll(1, 1000) << endl
             << endl;
    }
    else if (strDialogID == "dIntroName")
    {
        cout << "Welcome, seeker of knowledge." << endl
             << "I, \"Fate\" am the perveyor of things to be known," << endl
             << "but have not yet come to pass..." << endl
             << endl
             << "The future if you will...." << endl
             << endl
             << "I shall bestow these secrets unto you, but there are a few details..." << endl
             << "Minor details, that I need, to form a link to your future..." << endl
             << endl
             << "First, What might your name be?" << endl;
    }
    else if (strDialogID == "dIntroNameRe")
    {
        cout << "... What might your name be?" << endl;
    }
    else if (strDialogID == "dIntroAge")
    {
        cout << "Ah " << strTarget << ", I think I am starting remember you now..." << endl
             << "How old are you again?..." << endl;
    }
    else if (strDialogID == "dIntroAgeRe")
    {
        cout << "... How old are you again?" << endl;
    }
    else if (strDialogID == "dIntroGender")
    {
        cout << "Interesting... mmm." << endl
             << "Are you a male or a female?..." << endl;
    }
    else if (strDialogID == "dIntroGenderRe")
    {
        cout << "... Are you a male or a female?" << endl;
    }
    else if(strDialogID == "dIntroOrientation")
    {
        cout << "Ah right, excuse my memory..." << endl
             << "Are you into men, women, or both?..." << endl;
    }
    else if(strDialogID == "dIntroOrientationRe")
    {
        cout << "... Are you into men, women, or both?" << endl;
    }
    else if(strDialogID == "dIntroFinal")
    {
        cout << "I will now tell you that which you seek..." << endl
             << "BE WARNED, the future is always shifting, it's a very whispy thing." << endl
             << "What I tell you could change at any moment." << endl
             << endl
             << strTarget << ", I believe you are ready to recieve the knowledge..." << endl
             << endl
             << "Remember, you must be careful with this knowledge..." << endl
             << "It will change you, in ways you could not even begin to imagine...." << endl
             << endl
             << "As a final question before we begin..." << endl
             << "Would you like to print the finished fortune to a file as well, yes or no?" << endl;

    }
    else if(strDialogID == "dIntroFinalRe")
    {
        cout << "... Do you want to print the finished fortune to a file, yes or no?" << endl;

    }
    else
    {
        cout << "Error 1: Dialog ID: (" << strDialogID << ") does not exist..." << endl;
    }


    cout << endl
         << "-----------------------------------------------------------------------" << endl
         << endl;
}

//---------------------------------------
//Function: Returns a string value. Call to recieve user input.
//---------------------------------------
string yourDialog()
{
    string strReply;
    cout << "You:" << endl << endl;

    getline(cin, strReply);

    cout << endl
         << "-----------------------------------------------------------------------" << endl
         << endl;

    if(strReply == "DEBUG")
    {
        tellerDialog("DEBUG", "");
        strReply = " ";
    }

    return strReply;
}

//---------------------------------------
//Function: Returns a string value. Call to receive a random name of specified type.
//---------------------------------------
string getData(string strNameType)
{
    ifstream ifFromFile;
    string strName = " ", strFileName, strLine;
    int intDataLine;

    if(strNameType == "GirlName")
    {
        strFileName = "girlnames.txt";
    }
    else if(strNameType == "BoyName")
    {
        strFileName = "boynames.txt";
    }
    else if(strNameType == "LastName")
    {
        strFileName = "lastnames.txt";
    }
    else
    {
        strName = "DEFAULT_NAME";
    }

    if(strName != "DEFAULT_NAME")
    {
        ifFromFile.open(strFileName.c_str());

        do
        {
            intDataLine = 1 + rand() % getFileCount(strFileName);

            for(int intReading = 0; intReading < intDataLine; intReading++)
            {
                getline(ifFromFile,strLine);
            }

        }
        while(strLine[0] == '#' || strLine == "");

        ifFromFile.close();

        strName = strLine;
    }

    return strName;
}

//---------------------------------------
//Function: Returns an int value. Call to receive number of lines with text in a file. Requires filename as string.
//---------------------------------------
int getFileCount(string strFileName)
{
    ifstream ifFromFile;
    string strLine;
    int intCount = 0;

    ifFromFile.open(strFileName.c_str());

    while(getline(ifFromFile,strLine))
    {
        intCount++;
    }

    ifFromFile.close();

    return intCount;
}

//Function to convert a numerical string to an integer
int getIntVal(string strConvert)
{
    int intReturn;
    intReturn = atoi(strConvert.c_str());
    return(intReturn);
}

int diceRoll(int lowNum, int highNum)
{
    return lowNum + rand() % highNum;
}
