#include "Class.h"


int nameCompare(Name name1, Name name2)
{
	int size1Last = strlen(name1.getlastName());
	int size2Last = strlen(name2.getlastName());

	int counterLast = 0;

	// Compare last names
	if (size1Last != size2Last)
	{
		if (size1Last < size2Last)
		{
			return -1;
		}
		else
		{
			return 1;
		}
	}
	else
	{
		for (int i = 0; i < size1Last; ++i)
		{
			if (name1.getlastName()[i] != name2.getlastName()[i])
			{
				if (name1.getlastName()[i] < name2.getlastName()[i])
				{
					return -1;
				}
				else
				{
					return 1;
				}
			}
		}
	}

	// If last names are equal, compare first names
	int size1First = strlen(name1.getfirstName());
	int size2First = strlen(name2.getfirstName());

	// Reset counter for first names
	int counterFirst = 0;

	if (size1First != size2First)
	{
		if (size1First < size2First)
		{
			return -1;
		}
		else
		{
			return 1;
		}
	}
	else
	{
		for (int i = 0; i < size1First; ++i)
		{
			if (name1.getfirstName()[i] != name2.getfirstName()[i])
			{
				if (name1.getfirstName()[i] < name2.getfirstName()[i])
				{
					return -1;
				}
				else
				{
					return 1;
				}
			}
		}
	}

	return 0; // Names are the same
}


int main(){


	char* fName;
	char* lName;

	int size = 20;

	fName = new char[size];
	lName = new char[size];

	Name c(nullptr, nullptr);
	cout << "Enter First Name : ";
	cin >> fName;

	cout << "Enter Last Name : ";
	cin >> lName;

	c.setFirstName(fName, size);
	c.setLastName(lName, size);

	if (c.isValidName() == true)
		cout << endl << "Name contains only Alphabets not any special characters or digits." << endl;
	else
		cout << endl << "Name also contain  special characters or digits." << endl;
	cout << endl;


	Name two = c;
	c.copyName(two);
	c.camelCase();
	c.toLower();
	c.toUpper();
	int length = c.nameLength();
	cout << endl;
	cout << "Full Name Length is : " << length;
	cout << endl;

	char* fullName = c.fullName();
	cout << "Full Name is : " << fullName;

	fullName = nullptr;
	delete[] fullName;
	c.swapNames();

	cout << endl;
	// Compare last names
	int comparisonResult = nameCompare(c, two);

	cout << "Comparison Result: " << comparisonResult << endl;


	delete[]fName;
	delete[]lName;
	return 0;
}