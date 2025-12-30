#include <iostream>
using namespace std;

//เรียงจากมากไปน้อย ห้ามใช้ arr[i] ให้ใช้ *(p+j)เปรียบเทียบและ swap ด้วย pointer

void printArrey(int* p, int size) {
	for (int i = 0; i < size; i++) {
		cout << *(p + i) << " ";
	}
	cout << endl;

}
void swapValue(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void sortDescendingSort(int* p, int size) {
	for(int i = 0; i < size ; i++) {
		for (int j = i + 1; j < size; j++) {
			if (*(p + i) < *(p + j)) {
				swapValue((p + i), (p + j));
			}
		}
	}

}

int main() {
	int arr[] = { 5,2,9,1,3 };
	int size = 5;
	printArrey(arr, size);
	sortDescendingSort(arr, size);
	printArrey(arr, size);
	return 0;
}