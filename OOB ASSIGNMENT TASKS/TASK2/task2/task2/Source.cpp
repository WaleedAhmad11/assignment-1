// main.cpp

#include "Class.h"


int main() {
	char character;
	cout << "Enter the character = ";
	cin >> character;
	MyChar obj;
	obj.setChar(character);

	cout << "character is = " << obj.getChar();
	cout << endl;

	obj.upperCase();
	cout << "The character is converted to Uppercase : " << obj.getChar();
	cout << endl;
	obj.lowerCase();
	cout << "The character is converted to Lowercase : " << obj.getChar();
	cout << endl;

	int size;
	cout << "Enter the number of times you want to enter alphabets = ";
	cin >> size;

	MyChar* arr = new MyChar[size];

	for (int i = 0; i < size; i++) {
		char c;
		cout << "Enter the character = ";
		cin >> c;
		arr[i].setChar(c);
	}

	cout << "MyChar objects data: ";
	cout << endl;
	for (int i = 0; i < size; ++i) {
		cout << arr[i].getChar() << " ";
	}
	cout << endl;

	MyChar::sorted(arr, size);

	cout << "Sorted :";
	cout << endl;
	cout << "Array : ";
	for (int i = 0; i < size; i++) {
		cout << arr[i].getChar() << " ";
	}

	cout << endl;

	cout << "Converted values : ";
	cout << endl;
	for (int i = 0; i < size; i++) {
		arr[i].upperCase();
		cout << "The character is converted to Uppercase : " << arr[i].getChar();
		cout << endl;
		arr[i].lowerCase();
		cout << "The character is converted to Lowercase : " << arr[i].getChar();
		cout << endl;
	}

	cout << endl;

	delete[] arr;

	return 0;
}
