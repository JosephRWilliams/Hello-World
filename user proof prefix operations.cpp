#include "std_lib_facilities.h"

int main (){
	
	string operation_symbol = "???";	
	cout << "\nPlease enter a valid operator\n";
	cout << "valid operators are *, /, +, -, %\n";
	cin >> operation_symbol;

	double val1 = 0;
	cout << "\nPlease enter a valid floating point number.\n";
	cin >> val1;

	double val2 = 0;
	cout << "\n please enter another valid floating point number.\n";
	cin >> val2;

	double output;

	if (operation_symbol == "*"){
		output = val1 * val2;
	} else if (operation_symbol == "/"){
		output = val1 / val2;
	} else if (operation_symbol == "-"){
		output = val1 - val2;
	} else if (operation_symbol == "+"){
		output = val1 + val2;
	} else if (operation_symbol == "%"){
		output = std::fmod(val1, val2);
	} else {
		cout << "your inputs stink\n";
	}


	cout << "\nthe result of your request \""
	<< operation_symbol << " "
	<< val1 << " "
	<< val2 << "\" is \""
	<< val1 << " "
	<< operation_symbol << " "
	<< val2 << " = " << output
	<< "\"\n\n";

	return 0;
}	
