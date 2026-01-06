// TODO 1) เติม field ใน struct Student ให้ครบ: id, nickname, lineId, phone
// TODO 2) รับค่าข้อมูลนักศึกษา 5 คน เก็บลง students[i]
// TODO 3) แสดงผลข้อมูลนักศึกษาทั้ง 5 คน
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
	const int SIZE = 5;
	Student students[SIZE]; // Array ของ struct
	// INPUT
	for (int i = 0; i < SIZE; i++) {
		cout << "=== Input Student " << (i + 1) << " ===\n";
		cout << "studentID: ";
		cin >> students[i].id;

		cout << "nickname: ";
		cin >> students[i].nickname;

		cout << "lineID: ";
		cin >> students[i].lineId;

		cout << "phone: ";
		cin >> students[i].phone;

		cout << endl;
	}
	// OUTPUT
	cout << "\n===== Student List =====\n";

	for (int i = 0; i < SIZE; i++) {
		cout << students[i].id << "\t" << students[i].nickname << "\t" << students[i].lineId << "\t" << students[i].phone << "\n";
	}
	return 0;
}