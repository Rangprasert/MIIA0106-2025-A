#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    int id;
    string nickname;
    string lineId;

    // รับข้อมูล
    void input()
    {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Nickname: ";
        cin >> nickname;
        cout << "Enter Line ID: ";
        cin >> lineId;
    }

    // แสดงข้อมูล
    void print()
    {
        cout << "ID: " << id
            << ", Nickname: " << nickname
            << ", Line ID: " << lineId << endl;
    }
};

// สลับข้อมูลนักเรียน
void swapStudent(Student& a, Student& b)
{
    Student temp = a;
    a = b;
    b = temp;
}

// เรียงตาม ID (Bubble Sort)
void sortByID(Student students[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (students[j].id > students[j + 1].id)
            {
                swapStudent(students[j], students[j + 1]);
            }
        }
    }
}

// แสดงนักเรียนทั้งหมด
void printStudents(Student students[], int size)
{
    for (int i = 0; i < size; i++)
    {
        students[i].print();
    }
}

int main()
{
    const int size = 5;
    Student students[size];

    for (int i = 0; i < size; i++)
    {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        students[i].input();
        cout << endl;
    }

    sortByID(students, size);

    cout << "\n===== Student List (Sorted by ID) =====\n";
    printStudents(students, size);

    return 0;
}
