#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int win;
int lose;
int tie;

int main()
{
    unsigned seed = time(0);
    int npc;
    int choice;
    bool again;
    void menu();
    void winmsg();
    void tiemsg();
    void losemsg();
    
    srand(seed);
    
    again = true;
    
    do
    {
        menu();
        
        npc = 1 + rand() % 5;
        cout << endl << "Choice: ";
        cin >> choice;
        
        system("cls");
        
        if(choice > 6 || choice < 1)
        {
             continue;
        }
        else if(choice == 1)
        {
             cout << endl << endl 
                  << "Rock (The Crusher)" 
                  << endl << endl
                  << "- - - VS - - -"
                  << endl << endl;
             
             if(npc == 1)
             {
                  tie++;
                  cout << "Rock (The Crusher)"
                       << endl << endl << endl;
                  tiemsg();
             }
             else if(npc == 2)
             {
                  lose++;
                  cout << "Paper (The Crumply One)"
                       << endl << endl << endl;
                  losemsg();
             }
             else if(npc == 3)
             {
                  win++;
                  cout << "Scissors (The Deft Assassin)" 
                       << endl << endl << endl;
                  winmsg();
             }
             else if(npc == 4)
             {
                  win++;
                  cout << "Lizard (The Monster)" 
                       << endl << endl << endl;
                  winmsg();
             }
             else if(npc == 5)
             {
                  lose++;
                  cout << "Spock (The Thinker)"
                       << endl << endl << endl;
                  losemsg();
             }
        }
        else if(choice == 2)
        {
             cout << endl << endl 
                  << "Paper (The Crumply One)" 
                  << endl << endl
                  << "- - - VS - - -"
                  << endl << endl;
             
             if(npc == 1)
             {
                  win++;
                  cout << "Rock (The Crusher)"
                       << endl << endl << endl;
                  winmsg();
             }
             else if(npc == 2)
             {
                  tie++;
                  cout << "Paper (The Crumply One)"
                       << endl << endl << endl; 
                  tiemsg();
             }
             else if(npc == 3)
             {
                  lose++;
                  cout << "Scissors (The Deft Assassin)" 
                       << endl << endl << endl;
                  losemsg();
             }
             else if(npc == 4)
             {
                  lose++;
                  cout << "Lizard (The Monster)" 
                       << endl << endl << endl;
                  losemsg();
             }
             else if(npc == 5)
             {
                  win++;
                  cout << "Spock (The Thinker)"
                       << endl << endl << endl;
                  winmsg();
             }
        }
        else if(choice == 3)
        {
             cout << endl << endl 
                  << "Scissors (The Deft Assassin)" 
                  << endl << endl
                  << "- - - VS - - -"
                  << endl << endl;
             
             if(npc == 1)
             {
                  lose++;
                  cout << "Rock (The Crusher)"
                       << endl << endl << endl;
                  losemsg();
             }
             else if(npc == 2)
             {
                  win++;
                  cout << "Paper (The Crumply One)"
                       << endl << endl << endl;
                  winmsg();
             }
             else if(npc == 3)
             {
                  tie++;
                  cout << "Scissors (The Deft Assassin)" 
                       << endl << endl << endl;
                  
                  tiemsg();
             }
             else if(npc == 4)
             {
                  win++;
                  cout << "Lizard (The Monster)" 
                       << endl << endl << endl;
                  winmsg();
             }
             else if(npc == 5)
             {
                  lose++;
                  cout << "Spock (The Thinker)"
                       << endl << endl << endl;
                  losemsg();
             }
        }
        else if(choice == 4)
        {
             cout << endl << endl 
                  << "Lizard (The Monster)" 
                  << endl << endl
                  << "- - - VS - - -"
                  << endl << endl;
             
             if(npc == 1)
             {
                  lose++;
                  cout << "Rock (The Crusher)"
                       << endl << endl << endl;
                  losemsg();
             }
             else if(npc == 2)
             {
                  win++;
                  cout << "Paper (The Crumply One)"
                       << endl << endl << endl;
                  winmsg();
             }
             else if(npc == 3)
             {
                  lose++;
                  cout << "Scissors (The Deft Assassin)" 
                       << endl << endl << endl;
                  losemsg();
             }
             else if(npc == 4)
             {
                  tie++;
                  cout << "Lizard (The Monster)" 
                       << endl << endl << endl;
                  tiemsg();
             }
             else if(npc == 5)
             {
                  win++;
                  cout << "Spock (The Thinker)"
                       << endl << endl << endl;
                  winmsg();
             }
        }
        else if(choice == 5)
        {
             cout << endl << endl 
                  << "Spock (The Thinker)" 
                  << endl << endl
                  << "- - - VS - - -"
                  << endl << endl;
             
             if(npc == 1)
             {
                  win++;
                  cout << "Rock (The Crusher)"
                       << endl << endl << endl;
                  winmsg();
             }
             else if(npc == 2)
             {
                  lose++;
                  cout << "Paper (The Crumply One)"
                       << endl << endl << endl;
                  losemsg();
             }
             else if(npc == 3)
             {
                  win++;
                  cout << "Scissors (The Deft Assassin)" 
                       << endl << endl << endl;
                  winmsg();
             }
             else if(npc == 4)
             {
                  lose++;
                  cout << "Lizard (The Monster)" 
                       << endl << endl << endl;
                  losemsg();
             }
             else if(npc == 5)
             {
                  tie++;
                  cout << "Spock (The Thinker)"
                       << endl << endl << endl;
                  tiemsg();
             }
        }
        else if(choice == 6)
        {
             cout << endl << endl 
                  << "Quitting Game..." << endl;
             again = false;
        }
        
        cout << endl << endl;
        system("pause");
        
    }while(again);
    
    return 0;
}

void menu()
{
     system("cls");
     
     cout << "Welcome Challenger, to RPSLS." << endl
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
         << "6. Quit Game" << endl
         << "----------------------------------------";
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
          << "Congratulations Challenger, you have won the match!";
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
          << "The announcers voice, now merely a whisper, \"The Challenger has been defeated!\"" << endl
          << "Your battle is lost, but you fought valiantly, and the war is not yet over...";
}
