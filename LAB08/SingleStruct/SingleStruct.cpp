// TODO 1) เติม field ใน struct Student ให้ครบ: id, nickname, lineId, phone
// TODO 2) รับค่าจากผู้ใช้เก็บลง s1
// TODO 3) แสดงผลข้อมูลของ s1

#include <iostream>
#include <string>
using namespace std;
struct Student {
	string id;
	string nickname;
	string lineId;
	string phone;
};
int main() {
	Student s1; // ตัวแปรเดี่ยวของ struct
	cout << "=== Input Student 1 ===\n";
	cout <<"studentID: ";
	cin >> s1.id;
	cout << "nickname: ";
	cin >> s1.nickname;
	cout << "lineID: ";
	cin >> s1.lineId;
	cout << "phone: ";
	cin >> s1.phone;

	cout << "\n=== Output Student 1 ===\n";
	cout << "studentID: " << s1.id << "\n";
	cout << "nickname: " << s1.nickname << "\n";
	cout << "lineID: " << s1.lineId << "\n";
	cout << "phone: " << s1.phone << "\n";

	return 0;
}