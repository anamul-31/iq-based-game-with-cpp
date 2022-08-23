#include<iostream>
#include<string>
#include<Windows.h>
#include<conio.h>
using namespace std;
int Guess;
int Total;
// Question Class
class Question {
private:
    string Question_Text;
    string Answer_1;
    string Answer_2;
    string Answer_3;
    string Answer_4;
    int Correct_Answer;
    int Question_Score;

public:
    // Setter Function
    void setValues(string, string,string, string,string, int, int);

    // Function to ask questions
    void askQuestion();
};

// Driver code
int main()
{
    int a=400;
    cout<<"\n\n\n\n\n\n";system("color 1F");
    cout<<"                             \t\t\tT";Sleep(a);cout<<"a";Sleep(a);cout<<"k";Sleep(a);cout<<"e";Sleep(a);
    cout<<" ";Sleep(a);cout<<"a";Sleep(a);cout<<"n";Sleep(a);
    cout<<" ";Sleep(a);cout<<"I";Sleep(a);cout<<"Q";Sleep(a);
    cout<<" ";Sleep(a);cout<<"T";Sleep(a);cout<<"e";Sleep(a);cout<<"s";Sleep(a);cout<<"t";Sleep(1000);cout<<endl;
    cout<<"\n\t\t\tSee";Sleep(a);cout<<" where";Sleep(a);cout<<" you";Sleep(a);cout<<" stand";Sleep(a);cout<<" among";Sleep(a);
    cout<<" millions";Sleep(a);cout<<" of";Sleep(a);cout<<" other";Sleep(a);cout<<" people";Sleep(a);
    cout<<" across";Sleep(a);cout<<" the";Sleep(a);cout<<" globe!"<<endl;Sleep(1000);
    cout << "\nPress Enter to start "<< "the quiz... " << endl;Sleep(1000);
    // Input
    cin.get();
    char Name[100];
    int Age;
    // Input the details
    cout << "What is your name?"<< endl;
    gets(Name);
    cout << endl;
    cout << "How old are you?"<< endl;
    cin >> Age;
    cout << endl;

    string Respond;
    cout << "Are you ready to take"
         << " the test " << Name
         << "? yes/no" << endl;
    cin >> Respond;

    if (Respond == "yes") {
        cout << endl;
        cout << "Good Luck!" << endl;Sleep(2000);system("cls");
        cout << "\n\t\t\t\t\t             Test Instructions" << "\n";
		cout << " \t\t\t\t\t-----------------------------------------------" << endl;
		cout << " \t\t\t\t\t|              20 Questions                   |" << endl;
		cout << " \t\t\t\t\t|               200 Marks                     |" << endl;
		cout << " \t\t\t\t\t|           LEVEL 1: 10 Questions             |" << endl;
		cout << " \t\t\t\t\t|If you get marks>=50 then you can participant|" << endl;
		cout << " \t\t\t\t\t|                                             |" << endl;
		cout << " \t\t\t\t\t|           LEVEL 2: 5 Questions              |" << endl;
		cout << " \t\t\t\t\t|If you get marks>=130then you can participant|" << endl;
		cout << " \t\t\t\t\t|                                             |" << endl;
		cout << " \t\t\t\t\t|           LEVEL 3: 5 Questions              |" << endl;
		cout << " \t\t\t\t\t|        If you get marks>=160 then           |" << endl;
		cout << " \t\t\t\t\t|            You Pass all the level           |" << endl;
		cout << " \t\t\t\t\t-----------------------------------------------" << endl;
		cout << "\n\t\t\t\t\t\t          LET's "<< "GO... " << endl;
		cout << "Press any key to continue checking..." << endl;
		getch();
		cout<<system("cls");
		   cout << "\n\n\n\n\n\n\n\n\n\n                           L";
	Sleep(1500);
	cout << " O"; Sleep(280); cout << " A"; Sleep(280); cout << " D"; Sleep(280); cout << " I"; Sleep(280);
    cout << " N"; Sleep(280); cout << " G"; Sleep(280); cout << " ."; Sleep(280); cout << " ."; Sleep(280);
    cout << " ."; cout << " ."; Sleep(280); cout << " ."; Sleep(280); cout << " ."; Sleep(280); cout << " ."; Sleep(280);
	cout << " .";  Sleep(400); cout << " ."; Sleep(400); cout << " ."; Sleep(400); cout << " .";  Sleep(400);
	cout << " ."; Sleep(400); cout << " ."; Sleep(400); cout << " .";  Sleep(400);system("cls");

    }
else
    {
        cout << "Okay Good Bye!" << endl;
        return 0;
    }
    cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t            L"; Sleep(400);
    cout << "E"; Sleep(400); cout << "V"; Sleep(400); cout << "E"; Sleep(400); cout << "L"; Sleep(400);
    cout << " - 1"; Sleep(400);cout<<"(EASY)";Sleep(2000);system("cls");

    {
  // Objects of Question Class
    Question q1;
    Question q2;
    Question q3;
    Question q4;
    Question q5;
    Question q6;
    Question q7;
    Question q8;
    Question q9;
    Question q10;

    q1.setValues("1.Which number should come next in the pattern?\n \t\t 37, 34, 31, 28", "22","24", "25","32", 3, 10);
    q2.setValues("2.Book is to Reading as Fork is to: ", "drawing","writing", "stirring","eating", 4, 10);
    q3.setValues("3.8:4 as 10:", "2","5", "12","32", 2, 10);
    q4.setValues("4.Which number should be there next in this series? 25, 24, 22, 19, 15", "14","12", "10","9", 3, 10);
    q5.setValues("5.Which is the larger fraction?", "3/7","13/28", "5/14","13/26", 4, 10);
    q6.setValues("6.What number should replace the question mark?\n 24,30,?,60,84,114  ", "38","40", "42","44", 3, 10);
    q7.setValues("7.Finger is to Hand as Leaf is to: ", "Twig","Tree", "Branch","Blossom", 1, 10);
    q8.setValues("8.If a circle is one,how many is an heptagon?", "8","7", "6","1", 2, 10);
    q9.setValues("9.The sum of the first five prime numbers is: ", "11","18", "28","17", 3, 10);
    q10.setValues("10.Three lemons cost 45$.How much does 1.5 dozen cost? ", "270","540", "810","1620", 1, 10);

    q1.askQuestion();
    Sleep(2000);system("cls");
    q2.askQuestion();
    Sleep(2000);system("cls");
    q3.askQuestion();
    Sleep(2000);system("cls");
    q4.askQuestion();
    Sleep(2000);system("cls");
    q5.askQuestion();
    Sleep(2000);system("cls");
    q6.askQuestion();
    Sleep(2000);system("cls");
    q7.askQuestion();
    Sleep(2000);system("cls");
    q8.askQuestion();
    Sleep(2000);system("cls");
    q9.askQuestion();
    Sleep(2000);system("cls");
    q10.askQuestion();
    Sleep(2000);system("cls");
    }
// Display the total score
   cout << "Total Score = " << Total<< " out of 200"<<endl;Sleep(2000);
// Display the results
// If the player pass the quiz
if(Total<50)
    {
        cout << "Your intelligence level is below the average"<< endl;
        cout << "Better luck next time."<< endl;
    }

else if (Total >= 50)
{
    cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tCongrats you passed the"<< " First level."
                              << "\n\n\t\t\t\t\tYou have an average IQ level"<<endl;Sleep(4000);system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t            L"; Sleep(400);
    cout << "E"; Sleep(400); cout << "V"; Sleep(400); cout << "E"; Sleep(400); cout << "L"; Sleep(400);
    cout << " - 2"; Sleep(400);cout<<"(MEDIUM)";Sleep(2000);system("cls");

{
  // Objects of Question Class
    Question q11;
    Question q12;
    Question q13;
    Question q14;
    Question q15;

    q11.setValues("11.How much is half of 2+2", "1+1","2", "3","None", 3, 10);
    q12.setValues("12.A shepherd has 18 goats.All but 6 die.How many are left?", "18","6", "12","24", 2, 10);
    q13.setValues("13.Ralpha likes 25 but not 24,he likes 400 but not 300,he likes 144 but not 145\n Which does he like",
                   "200","220", "225","230", 3, 10);
    q14.setValues("14.Akhi,who is sixteen years old,is four times as old as her brother.How old will Akhi be when she is twice as old as her brother? ",
                  "20","24", "25","26", 2, 10);
    q15.setValues("15.Choose the number that is 1/4 of 1/2 of 1/5 of 200?", "2","5","10","50",2,10);
    q11.askQuestion();
    Sleep(2000);system("cls");
    q12.askQuestion();
    Sleep(2000);system("cls");
    q13.askQuestion();
    Sleep(2000);system("cls");
    q14.askQuestion();
    Sleep(2000);system("cls");
    q15.askQuestion();
    Sleep(2000);system("cls");
}

    cout << "Total Score = " << Total<< "out of 200" << endl;Sleep(2000);
// Display the results
// If the player pass the quiz
   if((Total>=50)&&(Total<130)){
        cout << "Your intelligence level is above average."
             << endl;
        cout << "Better luck next time."
             << endl;
    }
    else if (Total >= 130)
    {
       cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tCongrats you passed the"<<" Second level."
                << "\n\n\t\t\t\t\tYou have high level of intelligence."<<endl;Sleep(4000);system("cls");

       cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t            L"; Sleep(400);
       cout << "E"; Sleep(400); cout << "V"; Sleep(400); cout << "E"; Sleep(400); cout << "L"; Sleep(400);
       cout << " - 3"; Sleep(400);cout<<"(HARD)";Sleep(2000);system("cls");


  // Objects of Question Class
    Question q31;
    Question q32;
    Question q33;
    Question q34;
    Question q35;


    // 3 is the position of
    // correct answer
    q31.setValues("16.I am a male.If Ashik's son is my son's father,what is the relationship between Ashik and me?", "He is my brother",
                 "He is my father", "I am Ashik","He is my uncle", 2, 10);
    q32.setValues("17.If Dhaka to Chittagong=400 km, Chittagong to Dhaka=400 km  then Saturday to Friday=6 days,Friday to Saturday=?", "6","7", "1","400", 3, 10);
    q33.setValues("18.6  15  18  20  ?=FORTY: ", "25","28", "30","none", 1, 10);
    q34.setValues("19.A calender year has how many seconds", "3600","365", "24","12", 4, 10);
    q35.setValues("20.A clock shows 2pm.Through how many degrees has the hour hand rotated when the clock is showing 7:30 pm?"
                  , "120","150", "165","180", 3, 10);

    q31.askQuestion();
    Sleep(2000);system("cls");
    q32.askQuestion();
    Sleep(2000);system("cls");
    q33.askQuestion();
    Sleep(2000);system("cls");
    q34.askQuestion();
    Sleep(2000);system("cls");
    q35.askQuestion();
    Sleep(2000);system("cls");


   }
    if (Total >= 160)
    {
        cout << "Total Score = " << Total<< " out of 200" << endl;
        cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tCongrats you passed the"
             << " Third level" << "\n\n\t\t\t\t You have Gifted or very advanced IQ level\n\n"<<endl;
    }
}
       if((Total>=130)&&(Total<160)) {
        cout << "Total Score = " << Total;
        cout << "You are well developed,you have a subtle mind,and your logical thinking is on the high level too."
             << endl;
        cout << "Better luck next time."
             << endl;
        }

    return 0;
}

// Function to set the values of
// the questions
void Question::setValues(string q, string a1,string a2, string a3,string a4, int ca, int pa)
{
    Question_Text = q;
    Answer_1 = a1;
    Answer_2 = a2;
    Answer_3 = a3;
    Answer_4 = a4;
    Correct_Answer = ca;
    Question_Score = pa;
}

// Function to ask questions
void Question::askQuestion()
{
    cout << endl;

    // Print the questions
    cout << Question_Text << endl;
    cout << "1. " << Answer_1 << endl;
    cout << "2. " << Answer_2 << endl;
    cout << "3. " << Answer_3 << endl;
    cout << "4. " << Answer_4 << endl;
    cout << endl;

    // Display the answer
    cout << "What is your answer?(in number)"
         << endl;
    cin >> Guess;

    // If the answer is correct
    if (Guess == Correct_Answer) {
        cout << endl;
        cout << "Correct !" << endl;

        // Update the correct score
        Total = Total + Question_Score;
        cout << "Score = " << Question_Score
             << " out of "
             << Question_Score
             << "!" << endl;
        cout << endl;
    }

    // Otherwise
    else {
        cout << endl;
        cout << "Wrong !" << endl;
        cout << "Score = 0"
             << " out of "
             << Question_Score
             << "!" << endl;
        cout << "Correct answer = "
             << Correct_Answer
             << "." << endl;
        cout << endl;
    }
}
