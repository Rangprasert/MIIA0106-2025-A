#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void displayStudentInfo(const string& name, const string& id, double score, char grade)
{
	cout << "Student Name : " << name << "\n";
	cout << "Student ID   : " << id << "\n";
	cout << "Score        : " << fixed << setprecision(2) << score << "\n";
	cout << "Grade        : " << grade << "\n";
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
	const int N = 3; // students
	const int M = 4; // subjects
	string name[N], id[N];
	double score[N][M];
	double total[N] = { 0.0 };
	char grade[N];

	for (int i = 0; i < N; i++)
	{
		cout << "Enter student " << i + 1 << " name : ";
		getline(cin >> ws, name[i]);
		cout << "Enter student " << i + 1 << " id   : ";
		cin >> id[i];
		total[i] = 0.0;

		int j = 0;
		do	
		{
			cout << "Enter student " << i + 1 << " score" << (j + 1) << " : ";
			cin >> score[i][j];
			total[i] += score[i][j];
			j++;
		}while (j < M);
			calculateGrade(total[i], grade[i]);
			cout << "\n";
	}
	int i = 0;
	while(i < N)
	{
		displayStudentInfo(name[i], id[i], total[i], grade[i]);
		cout << "\n";
		i++;
	}

	return 0;
}







