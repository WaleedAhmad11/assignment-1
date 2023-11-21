// MyNum.h



#include <iostream>
using namespace std;
class MyNum {
private:
	int num;

public:
	MyNum(int value = 0);
	void setNum(int value);
	int getNum() const;
	void positiveNumber();
	void negativeNumber();
	static void sorted(MyNum arr[], int size);
	~MyNum();
};

