#include "select.h";
#include <iostream>
using namespace std;


void select::firstNumber() {
	int user_first_number;
	cout << "enter the first number : ";
	cin >> user_first_number;
	fNumber = user_first_number;
}
void select::secondNumber() {
	int user_second_number;
	cout << "enter the second number : ";
	cin >> user_second_number;
	sNumber = user_second_number;
}

void select::op() {
	char operation_user;
	cout << "enter the operation: ";
	cin >> operation_user;
	operation = operation_user;
}

void select::calcApp() {
	switch (operation)
	{
	case '+':
		cout << "the results is : " << fNumber + sNumber;
		break;
	case '-':
		cout << "the results is : " << fNumber - sNumber;
		break;
	case '*':
		cout << "the results is : " << fNumber * sNumber;
		break;
	case '/':
		cout << "the results is : " << fNumber / sNumber;
		break;

	default:
		cout << "invaild operation";
		break;
	}
}

