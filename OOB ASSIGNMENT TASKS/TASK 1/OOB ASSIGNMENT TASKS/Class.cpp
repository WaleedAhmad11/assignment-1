// MyNum.cpp

#include "Class.h"

MyNum::MyNum(int value) : num(value) {}

void MyNum::setNum(int value) {
	num = value;
}

int MyNum::getNum() const {
	return num;
}

void MyNum::positiveNumber() {
	if (num < 0) {
		num = -num;

	}
	
}

void MyNum::negativeNumber() {
	if (num > 0) {
		num = -num;
		
	}
	
}

void MyNum::sorted(MyNum arr[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i].getNum() > arr[j].getNum()) {
				MyNum temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

MyNum::~MyNum() {
	
}
