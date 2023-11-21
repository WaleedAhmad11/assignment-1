#include "Class.h"


Name::Name(char* first = nullptr, char* last = nullptr){
	firstName = first;
	lastName = last;
}

void Name::setFirstName(char* fName, int s){
	const int size = s + 1;
	firstName = new char[size];

	for (int i = 0; i < size; i++){
		firstName[i] = fName[i];
	}
	firstName[size - 1] = '\0';

}


void Name::setLastName(char* lName, int s){

	const int ssize = s + 1;
	lastName = new char[ssize];

	for (int i = 0; i < ssize; i++){

		lastName[i] = lName[i];

	}
	lastName[ssize - 1] = '\0';


}


char* Name::getFirstName(){

	return firstName;
}


char* Name::getlastName(){
	return lastName;

}

Name::Name(const Name& obj){
	int size = strlen(obj.firstName);
	firstName = new char[size + 1];
	for (int i = 0; i < size; i++){
		firstName[i] = obj.firstName[i];
	}
	firstName[size - 1] = '\0';

	int sizel = strlen(obj.lastName);
	lastName = new char[sizel + 1];

	for (int i = 0; i < sizel; i++){
		lastName[i] = obj.lastName[i];
	}
	lastName[size - 1] = '\0';
}

bool Name::isValidName(){
	int size = strlen(firstName);
	for (int i = 0; i < size; i++){
		if (((firstName[i] >= 65 && firstName[i] <= 92) || (firstName[i] >= 97 && firstName[i] <= 122)) && ((lastName[i] >= 65 && lastName[i] <= 92) || (lastName[i] >= 97 && lastName[i] <= 122))){
			return true;
		}
		else{
			return false;
		}
	}
}

void Name::copyName(Name& copy) {
	int sizef = strlen(copy.firstName);
	int sizel = strlen(copy.lastName);

	int size = sizef + sizel + 2;

	char* anotherName = new char[size];

	for (int i = 0; i < sizef; i++) {

		anotherName[i] = copy.firstName[i];

	}

	anotherName[sizef] = ' ';

	for (int i = sizef + 1, z = 0; i < size; i++, z++) {
		anotherName[i] = copy.lastName[z];
	}
	anotherName[size - 1] = '\0';

	cout << endl;
	cout << "The Combined Array : " << endl;
	for (int i = 0; i < size; i++) {
		cout << anotherName[i];
	}

	delete[] anotherName;
	anotherName = nullptr;
}
void Name::camelCase(){

	int sizef = strlen(firstName);
	int sizel = strlen(lastName);



	if (firstName[0] >= 97 && firstName[0] <= 122){
		firstName[0] = firstName[0] - 32;
	}

	for (int i = 1; i < sizef; i++){

		if (firstName[i] >= 65 && firstName[i] <= 92) {
			firstName[i] = firstName[i] + 32;
		}

	}


	if (lastName[0] >= 97 && lastName[0] <= 122) {
		lastName[0] = lastName[0] - 32;
	}


	for (int i = 1; i < sizef; i++){

		if (firstName[i] >= 65 && firstName[i] <= 92) {
			firstName[i] = firstName[i] + 32;
		}

	}
	cout << endl;
	cout << "CamelCase : ";
	display();


}


void Name::toLower(){
	int sizef = strlen(firstName);
	int sizel = strlen(lastName);




	for (int i = 0; i < sizef; i++){

		if (firstName[i] >= 65 && firstName[i] <= 92) {
			firstName[i] = firstName[i] + 32;
		}

	}



	for (int i = 0; i < sizef; i++){

		if (lastName[i] >= 65 && lastName[i] <= 92) {
			lastName[i] = lastName[i] + 32;
		}

	}
	cout << endl;
	cout << "To Lower Alphabets =  : ";
	display();

}
void Name::toUpper(){
	int sizef = strlen(firstName);
	int sizel = strlen(lastName);




	for (int i = 0; i < sizef; i++){

		if (firstName[i] >= 97 && firstName[i] <= 122) {
			firstName[i] = firstName[i] - 32;
		}

	}



	for (int i = 0; i < sizef; i++){

		if (lastName[i] >= 97 && lastName[i] <= 122) {
			lastName[i] = lastName[i] - 32;
		}

	}
	cout << endl;
	cout << "To Lower Alphabets =  : ";
	display();
}

int Name::nameLength(){

	int sizef = strlen(firstName);
	int sizel = strlen(lastName);

	int size = sizef + sizel;

	return size;

}

void Name::swapNames(){

	char* empty = firstName;
	firstName = lastName;
	lastName = empty;
	cout << endl;
	cout << "After Swaping = ";
	display();
}

char* Name::fullName(){
	int sizef = strlen(firstName);
	int sizel = strlen(lastName);
	int size = sizef + sizel + 1;
	char* mixarray = new char[size];

	int i, j;


	for (i = 0; i < sizef; ++i)
	{
		mixarray[i] = firstName[i];
	}


	mixarray[i++] = ' ';


	for (j = 0; j < sizel; ++j, ++i)
	{
		mixarray[i] = lastName[j];
	}

	mixarray[i] = '\0';


	return mixarray;

}



void Name::display(){

	cout << firstName << " " << lastName;
	cout << endl;
}



Name::~Name(){

	delete[] firstName;
	delete[] lastName;
	cout << "Bye Bye";
}
