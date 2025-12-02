#include <iostream>
using namespace std;
int score;
string StudentName;
string GPA;
int main()
{
	cout << "Enter your name...";
	cin >> StudentName;
	cout << "Enter your Score...";
	cin >> score; 
	while (!(cin >> score)) {
		cin.clear(); 
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input! Please enter numeric score only: ";
	}
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
	cout << StudentName << "Total score is "<< score << " GPA is " << GPA << endl;
}

