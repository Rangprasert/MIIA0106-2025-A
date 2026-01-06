#include <iostream>
#include <string>
using namespace std;
struct Student {
	string id;
	string nickname;
	string lineId;
	string phone;

};
void swapStudent(Student& a, Student& b) {

	Student temp = a;
	a = b;
	b = temp;
}


//void TestSortByID(Student students[], int size) {
//for (int i = 0; i < size - 1; i++) {// i ควบคุม row
//	for (int j = 0; j < size - 1 - i; j++) {// j ควบคุมคอลัม
//		
//		if (students[j].id > students[j + 1].id) {
//			swapStudent(students[j], students[j + 1]);
//		}
//	}
//
//}
void sortByID(Student students[], int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (students[j].id > students[j + 1].id) {
				swapStudent(students[j], students[j + 1]);
			}
		}
	}
}
void printStudents(Student students[], int size) {
	for (int i = 0; i < size; i++) {
		cout << students[i].id << "\t" << students[i].nickname << "\t" << students[i].lineId << "\t" << students[i].phone << "\n";
		cout << "----------------------\n";
	}
}
int main() {
	const int size = 5;
	Student students[size];
	for (int i = 0; i < size; i++) {
		cout << "=== Input Student " << (i + 1) << " ===\n";
		// TODO: cin >> students[i]...
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
	sortByID(students, size);
	//cout << "\n===== Student List (Sorted by ID) =====\n";
	printStudents(students, size);
	return 0;
}