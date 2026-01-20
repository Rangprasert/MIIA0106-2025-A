#include <iostream>
#include <string>
using namespace std;

class Student
{
public: 
	int id;
	string nickname;
	float height; 
	float weight;

	void input()
	{
		cout << "Student id: ";
		cin >> id;
		cout << "Enter Nickname: ";
		cin >> nickname;
		cout << "Enter height (m): ";
		cin >> height;
		cout << "Enter weight (kg): ";
		cin >> weight;
	}
	void print()
	{
		cout << "ID: " << id << endl;
		cout << "Nickname: " << nickname << endl;
		cout << "Height: " << height << " m" << endl;
		cout << "Weight: " << weight << " kg" << endl;
	}
	double calcBMI()
	{
		double h = height / 100.0;
		return weight / (h * h);
	}
};

int main()
{
	Student s1;
	cout << "=== Input Student 1 ===\n";
	s1.input();
	cout << "\n=== Student Info ===\n";
	s1.print();
	cout << "BMI: " << s1.calcBMI() << endl;
}