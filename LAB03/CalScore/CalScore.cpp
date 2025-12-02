#include <iostream>
using namespace std;
#include <limits>


int score;
string StudentName;
string StudentID;
string GPA;
int main()
{
	cout << "Enter your Student ID...";
	cin >> StudentID;
	cout << "Enter your name...";
	cin >> StudentName;
	cout << "Enter your Score...";
	cin >> score; 
	if (score >= 90 && score <= 100) {
		GPA = "A";
	}
	else if (score >= 80 && score <= 89) {
		GPA = "B";
	}
	else if (score >= 70 && score <= 79) {
		GPA = "C";
	}
	else if (score >= 60 && score <= 69) {
		GPA = "D";
	}
	else{
		GPA = "F";
	}
	cout << StudentID <<" Your name " << StudentName << " Total score is " << score << " GPA is " << GPA << endl;
}

