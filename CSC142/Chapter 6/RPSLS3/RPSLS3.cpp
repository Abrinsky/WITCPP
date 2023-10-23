#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

char name[10];
char saves[50];
int win;
int lose;
int tie;

int main()
{
    void mainmenu();
    void winmsg();
    void tiemsg();
    void losemsg();
    void loadmenu();
    void savemenu();
    void battlemenu();
    bool openmain;
    ofstream sfile;
    ifstream lfile;
    
    strcat(saves, "saves.txt");
    strcat(name, "Challenger");
    win = 0;
    lose = 0;
    tie = 0;
    openmain = true;
    
    
    
    do
    {
         system("cls");
         
         mainmenu();
         
         
    }while(openmain);
         
         
}

void mainmenu()
{
     system("cls");
     
     cout << "Welcome " << name << ", to RPSLS." << endl
          << "(Rock, Paper, Scissors, Lizard, Spock)" << endl
          << "----------------------------------------" << endl
          << "Please enter one of the choices below." 
          << endl << endl
          << "1. Start Game"
          << endl << endl
          << "2. Load Game"
          << endl << endl
          << "3. Save Game"
          << endl << endl
          << "4. Quit Game";
          system("pause");
}

void battlemenu()
{
     system("cls");
     
     cout << "Welcome " << name << ", to RPSLS." << endl
         << "(Rock, Paper, Scissors, Lizard, Spock)" << endl
         << "----------------------------------------" << endl
         << "Wins: " << win << " | Losses: " << lose << " | Ties: " << tie << endl
         << "----------------------------------------" << endl
         << "Please enter one of the choices below." 
         << endl << endl
         << "1. Rock (The Crusher)" << endl
         << "   It crushes Lizard and Scissors." 
         << endl << endl
         << "2. Paper (The Crumply One)" << endl
         << "   It can cover Rock, and it can disprove Spock." 
         << endl << endl
         << "3. Scissors (The Deft Assassin)" << endl
         << "   Capable of cutting through Paper, and can decapitate Lizard."
         << endl << endl
         << "4. Lizard (The Monster)" << endl
         << "   This monster devours Paper, and its poisons work on Spock."
         << endl << endl
         << "5. Spock (The Thinker)" << endl
         << "   Can easily bend Scissors, and vaporizes Rock."
         << endl << endl
         << "6. Main Menu" << endl
         << "----------------------------------------";
         system("pause");
}

void winmsg()
{
     cout << "Battle Outcome:" << endl
          << "---------------------------------------" << endl
          << "The match begins, this time around you feel somehow prepared..." << endl
          << "You leap into action, and an all out battle begins!" << endl
          << "You feel somehow stronger than your opponent, the battle is coming easy." << endl
          << "Having the upper hand you notice your opponent starting to weaken." << endl
          << "You spot an opening... and BAM!!, Your opponent has collapsed!" << endl
          << "Congratulations " << name << ", you have won the match!";
}

void tiemsg()
{
     cout << "Battle Outcome:" << endl
          << "---------------------------------------" << endl
          << "The match begins, you stare eachother down..." << endl
          << "You leap into action, and an all out battle begins!" << endl
          << "You are fighting toe to toe on equal ground with your opponent!" << endl
          << "The battle rages on for a very long time, counters, strikes, and cheap shots." << endl
          << "But alas, it is too even a fight, exhausted, you both collapse..." << endl
          << "Congratulations Competitors, the match is a tie!";
}

void losemsg()
{
     cout << "Battle Outcome:" << endl
          << "---------------------------------------" << endl
          << "The match begins, you stare eachother down..." << endl
          << "You leap into action, and an all out battle begins!" << endl
          << "You are fighting toe to toe, and you feel your opponent is very strong." << endl
          << "the match seems to go on forever, your wearing down and taking a beating..." << endl
          << "Your start to feel faint, and your body feels like a lead weight..." << endl
          << "As your opponent strikes a final blow, everything goes hazy..." << endl
          << "The announcers voice, now merely a whisper, \"" << name << " has been defeated!\"" << endl
          << "Your battle is lost, but you fought valiantly, and the war is not yet over...";
}
void savemenu()
{
}
