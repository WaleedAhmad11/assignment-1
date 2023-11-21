// MyChar.cpp

#include "Class.h"


MyChar::MyChar(char value) : character(value) {}

void MyChar::setChar(char a) {
	character = a;
}

char MyChar::getChar() const {
	return character;
}

void MyChar::upperCase() {
	if (character >= 'a' && character <= 'z') {
		character = character - 32;
	}
}

void MyChar::lowerCase() {
	if (character >= 'A' && character <= 'Z') {
		character = character + 32;
	}
}

void MyChar::sorted(MyChar arr[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i].getChar() > arr[j].getChar()) {
				MyChar temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

MyChar::~MyChar() {

	cout << "BYE BYE";
}
