#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void displayStudentInfo(string name,string id, double score, char grade)
{
	cout << "Student Name: " << name << "\n";
	cout << "Student ID : " << id << "\n";
	cout << "Score : " << fixed << setprecision(2) << score << "\n";
	cout << "Grade : " << grade << "\n";
}

void calculateGrade(double score, char& grade)
{
	if (score >= 90) grade = 'A';
	else if (score >= 80) grade = 'B';
	else if (score >= 70) grade = 'C';
	else if (score >= 60) grade = 'D';
	else grade = 'F';
}

int main()
{
	const int N = 5;
	string name[N], id[N];
	double score[N];
	char grade[N];

	for (int i = 0; i < N; i++) {
		cout << "Student " << i + 1 << " information" << "\n";
		cout << "Enter student " << i + 1 << " name: ";
		getline(cin >> ws, name[i]);          
		cout << "Enter student " << i + 1 << " id: ";
		cin >> id[i];
		cout << "Enter student " << i + 1 << " score: ";
		cin >> score[i];
		calculateGrade(score[i], grade[i]);
	}
	for (int j = 0; j < N; j++)
	{
		cout << "\nStudent " << j + 1 << " information" << "\n";
		displayStudentInfo(name[j], id[j], score[j], grade[j]);
	}

	return 0;
}