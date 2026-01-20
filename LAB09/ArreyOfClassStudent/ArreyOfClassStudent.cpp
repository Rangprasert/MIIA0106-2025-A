// TODO 1) เติม field และ method ใน class Student
// TODO 2) รับข้อมูลนักศึกษํา 5 คน
// TODO 3) แสดงผลข้อมูลนักศึกษําทั้งหมด
#include <iostream>
#include <string>
using namespace std;
class Student {
public:
	// TODO
	string id;
	string nickname;
	string lineId;
	string phone;

	void input() {
		cout << "Student id: ";
		cin >> id;
		cout << "Enter Nickname: ";
		cin >> nickname;
		cout << "Enter line id: ";
		cin >> lineId;
		cout << "Enter phone: ";
		cin >> phone;
	}
	void print() {
		cout << "ID: " << id << endl;
		cout << "Nickname: " << nickname << endl;
		cout << "Line ID: " << lineId << endl;
		cout << "Phone: " << phone << endl;
	}
};
int main()
{
	const int SIZE = 5;
	Student students[SIZE];
	// INPUT
	for (int i = 0; i < SIZE; i++)
	{
		cout << "=== Input Student " << (i + 1) << " ===\n";
		students[i].input();
		cout << endl;
	}
	// OUTPUT
	cout << "\n===== Student List =====\n";
	for (int i = 0; i < SIZE; i++)
	{
		students[i].print();
		cout << "----------------------\n";
	}
	return 0;
}