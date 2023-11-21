// MyChar.h
#include<iostream>
using namespace std;


class MyChar {

private:
	char character;

public:
	MyChar(char value = ' ');

	void setChar(char);
	char getChar() const;
	void upperCase();
	void lowerCase();

	static void sorted(MyChar arr[], int size);

	~MyChar();
};


