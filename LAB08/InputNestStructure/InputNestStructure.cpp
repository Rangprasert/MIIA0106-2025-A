#include <iostream>
#include <string>
using namespace std;
struct Phone {
	string mobile;
	string home;
};

struct Parents {
	string name;
	string relationship;
	Phone contact;
};
struct Student {
	string id;
	string nickname;
	string lineId;
	Phone  Mycontract;
	Parents Myparents;
};



int main()
{
	Student s1;
	Student* p = nullptr;

	p = &s1;
	cout << "=== Input Student 1 ===\n";
	cout << "studentID: "; cin >> s1.id;
	cout << "nickname: "; cin >> s1.nickname;
	cout << "lineID: "; cin >> s1.lineId;
	cout << "Contract Mobile: "; cin >> s1.Mycontract.mobile;
	cout << "Contract Home: "; cin >> s1.Mycontract.home;
	cout << "Parent Name: "; cin >> s1.Myparents.name;
	cout << "Parent Relationship: "; cin >> s1.Myparents.relationship;
	cout << "Parent Contact Mobile: "; cin >> s1.Myparents.contact.mobile;
	cout << "Parent Contact Home: "; cin >> s1.Myparents.contact.home;
	cout << "\n=== Output Student 1 ===\n";
	cout << "Student ID: " << p->id << endl;
	cout << "Student ID: " << p->id << endl;
	cout << "Nickname: " << p->nickname << endl;
	cout << "Line ID: " << p->lineId << endl;
	cout << "Contract Mobile: " << p->Mycontract.mobile << endl;
	cout << "Contract Home: " << p->Mycontract.home << endl;
	cout << "Parent Name: " << p->Myparents.name << endl;
	cout << "Parent Relationship: " << p->Myparents.relationship << endl;
	cout << "Parent Contact Mobile: " << p->Myparents.contact.mobile << endl;
	cout << "Parent Contact Home: " << p->Myparents.contact.home << endl;
	return 0;
}
