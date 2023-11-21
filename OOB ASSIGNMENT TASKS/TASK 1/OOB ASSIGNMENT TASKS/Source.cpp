// main.cpp

#include "Class.h"

int main() {
	int value;

	cout << "Enter the number = ";
	cin >> value;

	MyNum obj;
	obj.setNum(value);
	cout << "Num value is = " << obj.getNum() << endl;

	obj.positiveNumber();
	cout << "positive number = " << obj.getNum() << endl;
	obj.negativeNumber();
	cout << "Negative number = " << obj.getNum() << endl;


	int size;
	cout << "Enter the number of times you want to enter = ";
	cin >> size;

	MyNum* arr = new MyNum[size];

	for (int i = 0; i < size; i++) {
		int n;
		cout << "Enter the number = ";
		cin >> n;

		arr[i].setNum(n);
	}

	cout << "MyNum objects data: ";
	cout << endl;
	for (int i = 0; i < size; ++i) {
		cout << arr[i].getNum() << " ";
	}
	cout << endl;

	MyNum::sorted(arr, size);

	cout << "Sorted :";
	cout << endl;
	cout << "Array : ";
	for (int i = 0; i < size; i++) {
		cout << arr[i].getNum() << " ";
	}

	cout << endl;
	cout << "Converted values : ";
	cout << endl;
	for (int i = 0; i < size; i++) {
		arr[i].positiveNumber();
		cout << "positive number = " << arr[i].getNum() << endl;

		arr[i].negativeNumber();
		cout << "Negative number = " << arr[i].getNum() << endl;

		cout << endl;
	}

	delete[] arr;

	return 0;
}
