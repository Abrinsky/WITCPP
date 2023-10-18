#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <sstream>
#include <string>
#include <windows.h>

using namespace std;

//prototypes
void startchk();
void intro();
void questions();
void response();
void generation();
void getchildren();
void getdisease();
string getbname();
string getgname();
string getlname();
string getlocation();
string getpartner();
string getcod();
string gethealth();
string getheight();
string getweight();
string getloss();
string getlps();
int GetIntVal(string strConvert);

//global variables
char name[256];
int age;
int gender;
int orientation;
int boynames;
int girlnames;
int lastnames;
int locations;
int cods;
int dis;
int health;
char healthstat[25];
unsigned seed = time(0);
bool dbd;



int main()
{
    dbd = false;
    srand(seed);
    startchk();
    intro();
    questions();
    response();
    
    generation();
    
    return 0;
}



void startchk()
{
     ifstream bfile;
     ifstream gfile;
     ifstream lfile;
     ifstream locfile;
     ifstream codfile;
     ifstream disfile;
     string filetext;
     boynames = 0;
     girlnames = 0;
     lastnames = 0;
     locations = 0;
     cods = 0;
     dis = 0;
     string line;
     
     bfile.open("boynames.txt");
     while( getline(bfile, line) )
     {
         if(line[0] == '#')
         {
             continue;
         }
         else if(line == "")
         {
             continue;
         }
         
         boynames++;
     }
     bfile.close();
     
     
     gfile.open("girlnames.txt");
     while( getline(gfile, line) )
     {
         if(line[0] == '#')
         {
             continue;
         }
         else if(line == "")
         {
             continue;
         }
         
         girlnames++;
     }
     gfile.close();
     
     
     lfile.open("lastnames.txt");
     while( getline(lfile, line) )
     {
         if(line[0] == '#')
         {
             continue;
         }
         else if(line == "")
         {
             continue;
         }
         
         lastnames++;
     }
     lfile.close();
     
     
     locfile.open("locations.txt");
     while( getline(locfile, line) )
     {
         if(line[0] == '#')
         {
             continue;
         }
         else if(line == "")
         {
             continue;
         }
         
         locations++;
     }
     locfile.close();
     
     codfile.open("cods.txt");
     while( getline(codfile, line) )
     {
         if(line[0] == '#')
         {
             continue;
         }
         else if(line == "")
         {
             continue;
         }
         
         cods++;
     }
     codfile.close();
     
     disfile.open("harmful.txt");
     while( getline(disfile, line) )
     {
         if(line[0] == '#')
         {
             continue;
         }
         else if(line == "")
         {
             continue;
         }
         
         dis++;
     }
     disfile.close();
     
}

//This function displays the intro page
void intro()
{
     system("cls");
     
     cout << "Fortune Teller:" << endl
          << "B" << boynames << " - G"  << girlnames << " - L" << lastnames << " - LC" << locations << " - CD" << cods << " - DS" << dis << endl
          << "-----------------------------------------------------------------------" << endl
          << "Welcome, seeker of knowledge." << endl
          << "I, \"Fate\" am the perveyor of things to be known," << endl
          << "but have not yet come to pass..." << endl << endl
          << "The future if you will...." << endl << endl
          << "I shall bestow these secrets unto you, but there are a few details..." << endl
          << "Minor details, that I need, to form a link to your future..." << endl
          << "-----------------------------------------------------------------------" << endl
          << endl;
     system("pause");
}


//This function will ask the questions required to execute the program
void questions()
{
     system("cls");
     
     string gendercheck;
     string orientcheck;
     string agecheck;
     int i;
     bool ageask;
     bool namecheck;
     gender = 0;
     
     ageask = true;
     namecheck = true;
     
     do
     {
         cout << "What is your name?" << endl;
         cin.getline(name,256);
         
         if(name[0] == '\0' || name[0] == ' ')
         {
             Beep(200,200);
             Beep(100,200);
             continue;
         }
         else
         {
             namecheck = false;
         }
         
         
     }while(namecheck);
     
     cout << endl << "Ah " << name << ", I think I am starting remember you now..." << endl
          << "How old are you again?..." << endl;
           
     do
     {
         cin >> agecheck;
         
         stringstream s(agecheck);
         
         if((s >> i).fail())
         {
               cout << endl << "Invalid entry, try again..." << endl;
               Beep(200,200);
               Beep(100,200);
               continue;
         }
         
         ageask = false;
         
     }while(ageask);
     
     age = GetIntVal(agecheck);
     
     cout << endl << "Interesting... mmm." << endl;
     
     do
     {
         cout << "... Are you a male or a female?..." << endl;
         cin >> gendercheck;
         
         
         if(gendercheck == "male" || gendercheck == "Male" || gendercheck == "m" || gendercheck == "M")
         {
                    gender = 1;
         }
         else if(gendercheck == "female" || gendercheck == "Female" || gendercheck == "f" || gendercheck == "F")
         {
                    gender = 2;
         }
         else
         {
                    cout << endl << "I'm sorry, but I do not recognise the statement \"" << gendercheck << "\"..." << endl;
                    Beep(200,200);
                    Beep(100,200);
         }
     }while(gender < 1 || gender > 2);
     
     
     do
     {
         cout << endl << "... Are you into men, women, or both?..." << endl;
         cin >> orientcheck;
         
         
         if(orientcheck == "men" || orientcheck == "Men" || orientcheck == "m" || orientcheck == "M")
         {
                    if(gender == 1)
                    {
                              orientation = 4;
                    }
                    if(gender == 2)
                    {
                              orientation = 2;
                    }
         }
         else if(orientcheck == "women" || orientcheck == "Women" || orientcheck == "w" || orientcheck == "W")
         {
                    if(gender == 1)
                    {
                              orientation = 1;
                    }
                    if(gender == 2)
                    {
                              orientation = 5;
                    }
         }
         else if(orientcheck == "both" || orientcheck == "Both" || orientcheck == "b" || orientcheck == "B")
         {
                    orientation = 3;
         }
         else
         {
                    cout << endl << "I'm sorry, but I do not recognise the statement \"" << orientcheck << "\"..." << endl;
                    Beep(200,200);
                    Beep(100,200);
         }
     }while(orientation < 1 || orientation > 5);
     
     cout << endl << endl << "Ah, I see... hmmm...."
          << endl << endl;
     system("pause");
}


//This function will display a message before the fortune generation
void response()
{
     system("cls");
     
     cout << "Fortune Teller" << endl
          << "-----------------------------------------------------------------------" << endl
          << "I will now tell you that which you seek..." << endl
          << "BE WARNED, the future is always shifting, it's a very whispy thing." << endl
          << "What I tell you could change at any moment." << endl << endl
          << name << ", I believe you are ready to recieve the knowledge..." << endl << endl
          << "Remember, you must be careful with this knowledge..." << endl
          << "It will change you, in ways you could not even begin to imagine...." << endl
          << "-----------------------------------------------------------------------" << endl
          << endl << endl;
     system("pause");
     system("cls");
}

void generation()
{
     int partners;
     int partnum;
     int count;
     int agewhen;
     int lps;
     int events;
     string partnertxt;
     
     health = 100;
     count = 0;
     
     age += rand() % 20;
     
     partners = rand() % 7;
     
     events = 1 + rand() % 7;
     
     lps = rand() % 10;
     
     if(lps == 0)
     {
          lps++;
     }
     
     while(age < 18)
     {
          age++;
     }
     
     if(partners == 0)
     {
         cout << "I am sorry, but you will not have a partner..." << endl;
         
         while(events > 0)
         {
             getdisease();
             
             age += rand() % 10;
         
             health -= rand() % 10;
             
             events--;
             
             if(health < 1)
             {
                 events = 0;
             }
             
         }
             
     }
     
     else
     {
         cout << "You will have up to " << partners << " partner(s) in your life, " << name << "." << endl;
         partnum = partners;
         cout << "--------------------------------" << endl;
     }
     
     while(partners > 0)
     {
         ++count;
         
         
         
         cout << endl << endl << name << " at age: " << age << " | Status: " << gethealth() << endl;
         
         if(count == 1)
         {
             cout << "Your first partner will be " << getpartner() << endl << endl;
             getchildren();
             
             if(count != partnum)
             {
                 cout << getloss() << endl;
             }
             else
             {
                 if(lps > 0 && lps < 6)
                 {
                     cout << endl << getlps() << endl;
                 }
                 if(lps > 5 && lps < 11)
                 {
                     cout << "You and your partner live on together happily till the very end." << endl;
                 }
             }
         }
         else if(count == partnum && partnum != 1 || health < 1)
         {
             cout << "Your last partner will be " << getpartner() << endl << endl;
             getchildren();
             
             if(lps > 0 && lps < 6)
             {
                 cout << endl << getlps() << endl;
             }
             if(lps > 5 && lps < 11)
             {
                 cout << "You and your partner live on together happily till the very end." << endl;
             }
         }
         else
         {
             cout << "Your next partner will be " << getpartner() << endl << endl;
             getchildren();
             
             if(count != partnum)
             {
                 cout << getloss() << endl;
             }
         }
         
         age += rand() % 10;
         
         health -= rand() % 10;
         
         cout << endl;
         
         getdisease();
         
         cout << "--------------------------------" << endl;
         
         --partners;
         
         if(health < 1)
         {
             partners = 0;
         }
         
     }
     
     if(dbd == true)
     {
          cout << "You have died from health issues, at the age of " << age << " " << getlocation() << endl;
     }
     else if(dbd == false)
     {
          cout << "At the end of your " << age << " year lifespan, you are " << gethealth() << "\nYou will " << getcod() << " " << getlocation() << endl;
     }
     
     system("pause");
}

//Function to get a boy name from file
string getbname()
{
     string filetext;
     int line;
     
     ifstream rfile("boynames.txt");
     
     line = 1 + rand() % boynames;
     
     while(line < 0 || line > boynames)
             line = rand() % boynames;
     
     for(line > 0; line--;)
     {
              getline(rfile, filetext);
              if(filetext[0] == '#')
              {
                  line++;
              }
              else if(filetext == "")
              {
                  line++;
              }
     }
     
     rfile.close();
     
     return(filetext);
}

//Function to get a girl name from file
string getgname()
{
     string filetext;
     int line;
     
     ifstream rfile("girlnames.txt");
     
     line = 1 + rand() % girlnames;
     
     while(line < 0 || line > girlnames)
             line = rand() % girlnames;
     
     for(line > 0; line--;)
     {
              getline(rfile, filetext);
              if(filetext[0] == '#')
              {
                  line++;
              }
              else if(filetext == "")
              {
                  line++;
              }
     }
     
     rfile.close();
     
     return(filetext);
}

//Function to get a last name from file
string getlname()
{
     string filetext;
     int line;
     
     ifstream rfile("lastnames.txt");
     
     line = 1 + rand() % lastnames;
     
     while(line < 0 || line > lastnames)
             line = rand() % lastnames;
     
     for(line > 0; line--;)
     {
              getline(rfile, filetext);
              if(filetext[0] == '#')
              {
                  line++;
              }
              else if(filetext == "")
              {
                  line++;
              }
     }
     
     rfile.close();
     
     return(filetext);
}

//Function to get a location name from file
string getlocation()
{
     string filetext;
     int line;
     
     ifstream rfile("locations.txt");
     
     line = 1 + rand() % locations;
     
     while(line < 0 || line > locations)
             line = rand() % locations;
     
     for(line > 0; line--;)
     {
              getline(rfile, filetext);
              if(filetext[0] == '#')
              {
                  line++;
              }
              else if(filetext == "")
              {
                  line++;
              }
     }
     
     rfile.close();
     
     return(filetext);
}

//Function to get a cause of death from file
string getcod()
{
     string filetext;
     int line;
     
     ifstream rfile("cods.txt");
     
     line = 1 + rand() % cods;
     
     while(line < 0 || line > cods)
             line = 1 + rand() % cods;
     
     for(line > 0; line--;)
     {
              getline(rfile, filetext);
              if(filetext[0] == '#')
              {
                  line++;
              }
              else if(filetext == "")
              {
                  line++;
              }
     }
     
     rfile.close();
     
     return(filetext);
}

string getpartner()
{
     string partner;
     string gendtest;
     int gendnum;
     bool good;
     
     good = false;
     
     gendnum = 1 + rand() % 2;
     
     if(orientation == 1)
     {
         partner = "a " + getheight() + " and " + getweight() + " woman named:\n\n"
                 + getgname() + " " + getlname() +
                 + "\n\nYou will meet eachother " + getlocation() + ".";
     }
     if(orientation == 2)
     {
         partner = "a " + getheight() + " and " + getweight() + " man named:\n\n"
                 + getbname() + " " + getlname() 
                 + "\n\nYou will meet eachother " + getlocation() + ".";
     }
     if(orientation == 3)
     {
         if(gendnum == 1)
         {
             partner = "a " + getheight() + " and " + getweight() + " man named:\n\n"
                     + getbname() + " " + getlname() 
                     + "\n\nYou will meet eachother " + getlocation() + ".";
         }
         else if(gendnum == 2)
         {
             partner = "a " + getheight() + " and " + getweight() + " woman named:\n\n" 
                     + getgname() + " " + getlname() 
                     + "\n\nYou will meet eachother " + getlocation() + ".";
         }
     }
     if(orientation == 4)
     {
         partner = "a " + getheight() + " and " + getweight() + " man named:\n\n"
                 + getbname() + " " + getlname() 
                 + "\n\nYou will meet eachother " + getlocation() + ".";
     }
     if(orientation == 5)
     {
         partner = "a " + getheight() + " and " + getweight() + " woman named:\n\n"
                 + getgname() + " " + getlname() 
                 + "\n\nYou will meet eachother " + getlocation() + ".";
     }
     
     return(partner);
}

void getchildren()
{
     string child;
     int children;
     int childnum;
     int gendnum;
     int count;
     
     count = 0;
     
     children = rand() % 7;
         
     if(children == 0)
     {
          cout << "I am sorry, but you will not have or adopt kids together." << endl;
     }
     else
     {
          cout << "Together, you will have or adopt " << (children) << " kid(s)." << endl;
          childnum = children;
     }
         
     while(children > 0)
     {
          gendnum = 1 + rand() % 2;
          
          age += 1 + rand() % 5;
          
          
          
          ++count;
         
          if(count == 1)
          {
               if(gendnum == 1)
               {
                    cout << "Your first child will be a boy named " << getbname();
               }
               else if(gendnum == 2)
               {
                    cout << "Your first child will be a girl named " << getgname();
               }
         }
         else if(count == childnum && childnum != 1)
         {
               if(gendnum == 1)
               {
                    cout << "and your last child will be a boy named " << getbname();
               }
               else if(gendnum == 2)
               {
                    cout << "and your last child will be a girl named " << getgname();
               }
         }
         else
         {
               if(gendnum == 1)
               {
                    cout << "your next child will be a boy named " << getbname();
               }
               else if(gendnum == 2)
               {
                    cout << "your next child will be a girl named " << getgname();
               }
         }
         
         cout << " (" << name << " - Age " << age << ")" << endl;
         
         --children;
     }
     
     cout << endl << endl;
}

//Function to get a harmful
void getdisease()
{
     string filetext, stringafter;
     int disease, damage;
     damage = 0;
     
     ifstream rfile("harmful.txt");
     
     disease = 1 + rand() % 99;
     
     if(disease >= health)
     {
         int line;
         
         line = 1 + rand() % dis;
     
         while(line < 0 || line > dis)
             line = 1 + rand() % dis;
     
         for(line > 0; line--;)
         {
             getline(rfile, filetext);
             if(filetext[0] == '#')
             {
                 line++;
             }
             else if(filetext == "")
             {
                 line++;
             }
             
             stringstream ss (filetext, stringstream::in | stringstream::out);
 
             ss >> damage;
             getline(ss, filetext);
         }
         
         health -= damage;
         
         if(health > 0)
         {
             cout << "Oh no!" << filetext  << " (" << name << " - Age " << age << ")" << endl;
         }
         else
         {
             cout << "Oh no!" << filetext  << " (" << name << " - Age " << age << ")" << endl;
             dbd = true;
         }  
         
     }
     
     rfile.close();
}

//Function to get your health
string gethealth()
{
     string healthstat;
     
     if(health == 100)
     {
          healthstat = "Very Healthy";
     }
     else if(health < 100 && health >= 80)
     {
          healthstat = "Healthy";
     }
     else if(health < 80 && health >= 40)
     {
          healthstat = "Moderately Healthy";
     }
     else if(health < 40 && health >= 20)
     {
          healthstat = "Unhealthy";
     }
     else if(health < 20 && health > 0)
     {
          healthstat = "Dieing";
     }
     else
     {
          healthstat = "Dead";
     }
     return(healthstat);
}

//Function to get a height string
string getheight()
{
     string height;
     int tall;
          
     tall = rand() % 10;
     
     if(tall == 10)
     {
          height = "very tall";
     }
     else if(tall < 10 && tall >= 8)
     {
          height = "tall";
     }
     else if(tall < 8 && tall >= 4)
     {
          height = "normal height";
     }
     else if(tall < 4 && tall >= 2)
     {
          height = "short";
     }
     else if(tall < 2 && tall > 0)
     {
          height = "very short";
     }
     else
     {
          height = "dwarf height";
     }
     return(height);
}

//Function to get a weight string
string getweight()
{
     string weight;
     int pudge;
          
     pudge = rand() % 10;
     
     if(pudge == 10)
     {
          weight = "morbidly obese";
     }
     else if(pudge < 10 && pudge >= 9)
     {
          weight = "very chunky";
     }
     else if(pudge < 9 && pudge >= 5)
     {
          weight = "meaty";
     }
     else if(pudge < 5 && pudge >= 3)
     {
          weight = "average weight";
     }
     else if(pudge < 3 && pudge > 1)
     {
          weight = "skinny";
     }
     else
     {
          weight = "very skinny";
     }
     return(weight);
}

//Function to get a loss string
string getloss()
{
     string loss;
     int lossnum;
          
     lossnum = rand() % 10;
     
     if(lossnum == 10)
     {
          loss = "Your partner leaves you or someone else.";
     }
     else if(lossnum < 10 && lossnum >= 9)
     {
          loss = "Your partner is murdered.";
     }
     else if(lossnum < 9 && lossnum >= 5)
     {
          loss = "You and your partner get divorced.";
     }
     else if(lossnum < 5 && lossnum >= 3)
     {
          loss = "Your partner disappears, never to be found again.";
     }
     else if(lossnum < 3 && lossnum > 1)
     {
          loss = "Your partner passes away in their sleep.";
     }
     else
     {
          loss = "Your partner passes away from health issues.";
     }
     return(loss);
}

//Function to get a loss string
string getlps()
{
     string lps;
     int lpsnum;
          
     lpsnum = rand() % 10;
     
     if(lpsnum == 10)
     {
          lps = "Your partner leaves you or someone else.";
     }
     else if(lpsnum < 10 && lpsnum >= 9)
     {
          lps = "Your partner is murdered.";
     }
     else if(lpsnum < 9 && lpsnum >= 5)
     {
          lps = "You and your partner get divorced.";
     }
     else if(lpsnum < 5 && lpsnum >= 3)
     {
          lps = "Your partner disappears, never to be found again.";
     }
     else if(lpsnum < 3 && lpsnum > 1)
     {
          lps = "Your partner passes away in their sleep.";
     }
     else
     {
          lps = "Your partner passes away from health issues.";
     }
     return(lps);
}

//Function to convert a numerical string to an integer
int GetIntVal(string strConvert)
{ 
  int intReturn; 
  intReturn = atoi(strConvert.c_str()); 

  return(intReturn); 
}
