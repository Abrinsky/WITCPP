#include <iostream>
#include <string>

using namespace std;

class Questions
{
   private:
      string question;
      string ans1;
      string ans2;
      string ans3;
      string ans4;
   public:
      void setQues(string);
      void setAns(int, string);
      string getAns(int);
      string getQues();
};

void Questions::setQues(string quest)
{
    question = quest;
}

void Questions::setAns(int num, string answer)
{
    if(num == 1)
    {
        ans1 = answer;
    }
    else if(num == 2)
    {
        ans2 = answer;
    }
    else if(num == 3)
    {
        ans3 = answer;
    }
    else if(num == 4)
    {
        ans4 = answer;
    }
}

string Questions::getAns(int num)
{
    if(num == 1)
    {
        return ans1;
    }
    else if(num == 2)
    {
        return ans2;
    }
    else if(num == 3)
    {
        return ans3;
    }
    else if(num == 4)
    {
        return ans4;
    }
    else
    {
        return 0;
    }
}

string Questions::getQues()
{
    return question;
}

int main()
{
    char choice;
    int play1score = 0, play2score = 0;
    string play1, play2;
    cout << "Welcome to Abe's trivia game, please enter your name player 1: " << endl;
    getline(cin,play1);
    
    cout << endl << "Please enter your name player 2: " << endl;
    getline(cin,play2);
    
    Questions ques1, ques2, ques3, ques4, ques5, ques6, ques7, ques8, ques9, ques10;
    
    string que1 = "Which of the following is NOT an example of disk care:", ans1a = "Avoid contact with magnets", ans1b = "Store disks in a bright, warm area", ans1c = "Keep metal slider in place", ans1d = "Use virus check programs";
    string que2 = "Which part is the \"brain\" of the computer?", ans2a = "RAM", ans2b = "ROM", ans2c = "CPU", ans2d = "Monitor";
    string que3 = "Which of the following statements is TRUE concerning maintenance of computer hardware:", ans3a = "One should periodically clean hardware with appropriate cleaners", ans3b = "Dust will not affect hardware", ans3c = "Less expensive printers are easier to maintain", ans3d = "Monitors should be turned off frequently";
    string que4 = "What is a spider:", ans4a = "A computer virus", ans4b = "A program that catalogs websites", ans4c = "A hacker who breaks into corporate computer systems", ans4d = "An application for viewing websites";
    string que5 = "If a computer is constantly rebooting itself, what is most likely the problem:", ans5a = "The memory is bad/defective", ans5b = "There are bad sectors on the hard drive", ans5c = "The processor is overheating", ans5d = "There is insufficient power coming from the power supply";
    string que6 = "Which device allows your computer to talk to other computers over a telephone line as well as access the internet:", ans6a = "RAM", ans6b = "Hard Drive", ans6c = "CD-ROM Drive", ans6d = "Modem";
    string que7 = "Playing a lifelike video game while wearing special gear such as goggles and gloves with wires that track hand movements, is an example of:", ans7a = "Artificial Intelligence", ans7b = "Computer Imaging", ans7c = "Robotics", ans7d = "Virtual Reality";
    string que8 = "Which is the best search tool for finding Web sites that have been hand-picked and recommended by someone else:", ans8a = "Subject directories", ans8b = "Search engines", ans8c = "Meta-search engines", ans8d = "discussion groups";
    string que9 = "Approximately how many Bytes make one Megabyte:", ans9a = "One Million", ans9b = "One Hundred", ans9c = "Ten Thousand", ans9d = "One Thousand";
    string que10 = "How many Bits are in a nibble:", ans10a = "2", ans10b = "6", ans10c = "4", ans10d = "8";
    
    ques1.setQues(que1);
    ques1.setAns(1, ans1a);
    ques1.setAns(2, ans1b);
    ques1.setAns(3, ans1c);
    ques1.setAns(4, ans1d);
    
    ques2.setQues(que2);
    ques2.setAns(1, ans2a);
    ques2.setAns(2, ans2b);
    ques2.setAns(3, ans2c);
    ques2.setAns(4, ans2d);
    
    ques3.setQues(que3);
    ques3.setAns(1, ans3a);
    ques3.setAns(2, ans3b);
    ques3.setAns(3, ans3c);
    ques3.setAns(4, ans3d);
    
    ques4.setQues(que4);
    ques4.setAns(1, ans4a);
    ques4.setAns(2, ans4b);
    ques4.setAns(3, ans4c);
    ques4.setAns(4, ans4d);
    
    ques5.setQues(que5);
    ques5.setAns(1, ans5a);
    ques5.setAns(2, ans5b);
    ques5.setAns(3, ans5c);
    ques5.setAns(4, ans5d);
    
    ques6.setQues(que6);
    ques6.setAns(1, ans6a);
    ques6.setAns(2, ans6b);
    ques6.setAns(3, ans6c);
    ques6.setAns(4, ans6d);
    
    ques7.setQues(que7);
    ques7.setAns(1, ans7a);
    ques7.setAns(2, ans7b);
    ques7.setAns(3, ans7c);
    ques7.setAns(4, ans7d);
    
    ques8.setQues(que8);
    ques8.setAns(1, ans8a);
    ques8.setAns(2, ans8b);
    ques8.setAns(3, ans8c);
    ques8.setAns(4, ans8d);
    
    ques9.setQues(que9);
    ques9.setAns(1, ans9a);
    ques9.setAns(2, ans9b);
    ques9.setAns(3, ans9c);
    ques9.setAns(4, ans9d);
    
    ques10.setQues(que10);
    ques10.setAns(1, ans10a);
    ques10.setAns(2, ans10b);
    ques10.setAns(3, ans10c);
    ques10.setAns(4, ans10d);
    
    system("cls");
    
    cout << play1 << "'s turn:" << endl;
    
    cout << "Question 1" << endl << ques1.getQues() << endl;
    for(int i = 1; i < 5; i++)
    {
        cout << "  " << i << ". " << ques1.getAns(i) << endl;
    }
    cin >> choice;
    
    if(choice == '2' || choice == 'b' || choice == 'B')
        play1score += 1;
        
    system("cls");
    
    cout << play2 << "'s turn:" << endl;
    
    cout << "Question 1" << endl << ques6.getQues() << endl;
    for(int i = 1; i < 5; i++)
    {
        cout << "  " << i << ". " << ques6.getAns(i) << endl;
    }
    cin >> choice;
    
    if(choice == '4' || choice == 'd' || choice == 'D')
        play2score += 1;
        
    system("cls");
    
    cout << play1 << "'s turn:" << endl;
    
    cout << "Question 2" << endl << ques2.getQues() << endl;
    for(int i = 1; i < 5; i++)
    {
        cout << "  " << i << ". " << ques2.getAns(i) << endl;
    }
    cin >> choice;
    
    if(choice == '3' || choice == 'c' || choice == 'C')
        play1score += 1;
        
    system("cls");
    
    cout << play2 << "'s turn:" << endl;
    
    cout << "Question 2" << endl << ques7.getQues() << endl;
    for(int i = 1; i < 5; i++)
    {
        cout << "  " << i << ". " << ques7.getAns(i) << endl;
    }
    cin >> choice;
    
    if(choice == '4' || choice == 'd' || choice == 'D')
        play2score += 1;
        
    system("cls");
    
    cout << play1 << "'s turn:" << endl;
    
    cout << "Question 3" << endl << ques3.getQues() << endl;
    for(int i = 1; i < 5; i++)
    {
        cout << "  " << i << ". " << ques3.getAns(i) << endl;
    }
    cin >> choice;
    
    if(choice == '1' || choice == 'a' || choice == 'A')
        play1score += 1;
        
    system("cls");
    
    cout << play2 << "'s turn:" << endl;
    
    cout << "Question 3" << endl << ques8.getQues() << endl;
    for(int i = 1; i < 5; i++)
    {
        cout << "  " << i << ". " << ques8.getAns(i) << endl;
    }
    cin >> choice;
    
    if(choice == '1' || choice == 'a' || choice == 'A')
        play2score += 1;
        
    system("cls");
    
    cout << play1 << "'s turn:" << endl;
    
    cout << "Question 4" << endl << ques4.getQues() << endl;
    for(int i = 1; i < 5; i++)
    {
        cout << "  " << i << ". " << ques4.getAns(i) << endl;
    }
    cin >> choice;
    
    if(choice == '2' || choice == 'b' || choice == 'B')
        play1score += 1;
        
    system("cls");
    
    cout << play2 << "'s turn:" << endl;
    
    cout << "Question 4" << endl << ques9.getQues() << endl;
    for(int i = 1; i < 5; i++)
    {
        cout << "  " << i << ". " << ques9.getAns(i) << endl;
    }
    cin >> choice;
    
    if(choice == '1' || choice == 'a' || choice == 'A')
        play2score += 1;
        
    system("cls");
    
    cout << play1 << "'s turn:" << endl;
    
    cout << "Question 5" << endl << ques5.getQues() << endl;
    for(int i = 1; i < 5; i++)
    {
        cout << "  " << i << ". " << ques5.getAns(i) << endl;
    }
    cin >> choice;
    
    if(choice == '4' || choice == 'd' || choice == 'D')
        play1score += 1;
        
    system("cls");
    
    cout << play2 << "'s turn:" << endl;
    
    cout << "Question 5" << endl << ques10.getQues() << endl;
    for(int i = 1; i < 5; i++)
    {
        cout << "  " << i << ". " << ques10.getAns(i) << endl;
    }
    cin >> choice;
    
    if(choice == '3' || choice == 'c' || choice == 'C')
        play2score += 1;
    
    
    if(play1score > play2score)
    {
        cout << endl << "Congratulations " << play1 << ", you are the victor with a score of " << play1score << " to " << play2score << "!" << endl;
    }
    else if(play1score = play2score)
    {
        cout << endl << "Congratulations to both of you, it was a tie with a score of " << play1score << " to " << play2score << "!" << endl;
    }
    else if(play1score < play2score)
    {
        cout << endl << "Congratulations " << play2 << ", you are the victor with a score of " << play2score << " to " << play1score << "!" << endl;
    }
    
    system("pause");
}
    
