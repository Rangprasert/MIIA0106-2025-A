#include <iostream>
#include <string>
using namespace std;
class Student
{
public: // TODO 
	int id;
	string nickname;
	string lineId;
	string phone;

	void input()
	{
		cout << "Student id: ";
		cin >> id;
		cout << "Enter Nickname: ";
		cin >> nickname;
		cout << "Enter line id: ";
		cin >> lineId;
		cout << "Enter phone: ";
		cin >> phone;
	}
	void print()
	{
		cout << "ID: " << id << endl;
		cout << "Nickname: " << nickname << endl;
		cout << "Line ID: " << lineId << endl;
		cout << "Phone number" << phone << endl;
	}
};
int main()
{
	Student s1;
	Student* p = nullptr;
	p = &s1;

	p->input();
	p->print();


	return 0;
}