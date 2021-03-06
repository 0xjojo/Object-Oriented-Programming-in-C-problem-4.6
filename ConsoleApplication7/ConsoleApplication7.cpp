// ConsoleApplication7.cpp : Defines the entry point for the console application.
//
/*6. We said earlier that C++ I/O statements don’t automatically understand the data types of
enumerations. Instead, the (>>) and (<<) operators think of such variables simply as integers.
You can overcome this limitation by using switch statements to translate between
the user’s way of expressing an enumerated variable and the actual values of the enumerated variable.
For example, imagine an enumerated type with values that indicate an
employee type within an organization:
enum etype { laborer, secretary, manager, accountant, executive,
researcher };
Write a program that first allows the user to specify a type by entering its first letter
(‘l’, ‘s’, ‘m’, and so on), then stores the type chosen as a value of a variable of type
enum etype, and finally displays the complete word for this type.
Enter employee type (first letter only)
laborer, secretary, manager,
accountant, executive, researcher): a
Employee type is accountant.
You’ll probably need two switch statements: one for input and one for output.*/
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char t;
	enum etype { laborer, secretary , manager , accountant , executive , researcher };
	etype job;
	cout << "Enter employee type (first letter only) laborer, secretary, manager, accountant, executive, researcher):" << endl;
	cin >> t;
	switch (t)
	{
	case 'l': job = laborer;
		break;
	case 's': job = secretary;
		break;
	case 'm': job = manager;
		break;
	case 'a': job = accountant;
		break;
	case 'e': job = executive;
		break;
	case 'r': job = researcher;
		break;

	}

	switch (job)
	{
	case 0:
		cout << "Employee type is laborer" << endl;
		break;
	case 1:
		cout << "Employee type is secretary" << endl;
		break;
	case 2:
		cout << "Employee type is maneger" << endl;
		break;
	case 3:
		cout << "Employee type is accountant" << endl;
		break;
	case 4:
		cout << "Employee type is executive" << endl;
		break;
	case 5:
		cout << "Employee type is researcher" << endl;
		break;
	}
	return 0;
}




