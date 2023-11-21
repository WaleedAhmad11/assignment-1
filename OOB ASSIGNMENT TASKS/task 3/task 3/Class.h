#include<iostream>
using namespace std;

class Name{

private:
	char* firstName;
	char* lastName;
public:
	Name(char*, char*);// parameterized constructor with default values
	void setFirstName(char*, int);
	void setLastName(char*, int);

	char* getFirstName();
	char* getlastName();
	~Name();
	Name(const Name&); //copy constructor
	

	void copyName(Name& );
	void camelCase();
	void toLower();
	void toUpper();
	int nameLength();
	void swapNames();
	char* fullName();
	bool isValidName();

	int nameCompare(Name name1, Name name2);
	void display();




};