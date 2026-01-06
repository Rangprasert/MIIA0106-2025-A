#include <iostream>
using namespace std;
struct Address {
	int number;
	char road[20];
	char district[20];
	char province[20];
};
struct Phone {
	char home[10];
	char mobile[10];
};
struct Student {
	char id[9];
	char name[20];
	char surname[20];
	Address address;
	Phone tel;
};
int main() {
	Student s1;
	// TODO 3) รับค่าข้อมูลนักศึกษา 1 คน (รวมที่อยู่ + โทรศัพท์)

	cout << "Enter Student Information:\n";
	cout << "ID: "; cin >> s1.id;
	cout << "Name: "; cin >> s1.name;
	cout << "Surname: "; cin >> s1.surname;
	cout << "Address - House Number: ";
	cin >> s1.address.number;
	cout << "Address - Road: ";
	cin >> s1.address.road;
	cout << "Address - District: ";
	cin >> s1.address.district;
	cout << "Address - Province:";
	cin >> s1.address.province;
	cout << "Phone - Home: ";
	cin >> s1.tel.home;
	cout << "Phone - Mobile: ";
	cin >> s1.tel.mobile;
	cout << "\n===== Output =====\n";
	//// TODO 4): แสดงผลข้อมูลทั้งหมด (รวม address และ phone)
	cout << "ID: " << s1.id << endl;
	cout << "Name: " << s1.name << endl;
	cout << "Surname: " << s1.surname << endl;
	cout << "Address: " << s1.address.number << ", " << s1.address.road << ", " << s1.address.district << ", " << s1.address.province << endl;
	cout << "Phone - Home: " << s1.tel.home << endl;
	cout << "Phone - Mobile: " << s1.tel.mobile << endl;

	return 0;
}