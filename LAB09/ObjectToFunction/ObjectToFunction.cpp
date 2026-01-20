// TODO 1) เติม field และ method ใน class Student
// TODO 2) เขียนฟังก์ชัน printStudent(Student s)
// TODO 3) เรียกใช้งําน printStudent จําก main
#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
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
};
void printStudent(Student s)
{
	// TODO: แสดงข้อมูลจําก object s
	cout << "ID: " << s.id << endl;
	cout << "Nickname: " << s.nickname << endl;
	cout << "Line ID: " << s.lineId << endl;
	cout << "Phone: " << s.phone << endl;
}
int main()
{
	Student s1;
	cout << "=== Input Student 1 ===\n";
	s1.input();
	cout << "\n=== Output (from function) ===\n";
	printStudent(s1);
	return 0;
}