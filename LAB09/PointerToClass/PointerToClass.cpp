#include <iostream>
#include <string>
using namespace std;
class Student
{
public: // TODO 
	int id;
	string nickname;

	void input()
	{
		cout << "Student id: ";
		cin >> id;
		cout << "Enter Nickname: ";
		cin >> nickname;
	}
	void print()
	{
		cout << "ID: " << id << endl;
		cout << "Nickname: " << nickname << endl;
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