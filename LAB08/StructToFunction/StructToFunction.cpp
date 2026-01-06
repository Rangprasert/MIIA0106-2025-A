// TODO 1) เติม field ใน struct Student ให้ครบ: id, nickname, lineId, phone
// TODO 2) เขียนฟังก์ชัน printStudent(Student s) ให้แสดงผลครบทุก field
// TODO 3) ใน main รับข้อมูล 1 คน แล้วเรียก printStudent(s1)

#include <iostream>
#include <string>
using namespace std;
struct Student {
	string id;
	string nickname;
	string lineId;
	string phone;
};
// TODO: เขียนฟังก์ชันนี้
void printStudent(Student s) {
	cout << "Student ID: "<<endl;
	cout << s.id <<endl;

	cout << "Nickname: " << endl;
	cout << s.nickname <<endl;

	cout << "Line ID: " << endl;
	cout << s.lineId <<endl;

	cout << "Phone: " << endl;
	cout << s.phone <<endl;
}
int main() {
	Student s1;
	cout << "=== Input Student 1 ===\n";
	cout << "studentID: ";
	cin >> s1.id;
	cout << "nickname: ";
	cin >> s1.nickname;
	cout << "lineID: ";
	cin >> s1.lineId;
	cout << "phone: ";
	cin >> s1.phone;
	cout << "\n=== Output (from function) ===\n";
	printStudent(s1);
	return 0;
}