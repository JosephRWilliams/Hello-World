#include "std_lib_facilities.h"

int main (){
	cout << "\nPlease enter an operator followedby two floating point number\n";
	cout << "valid operators are:  *, /, -, + \n";

	string operation_symbol = "???";
	double val1 = 0;
	double val2 = 0;
	cin >> operation_symbol >> val1 >> val2;

	double output;

	if (operation_symbol == "*"){
		output = val1 * val2;
	} else if (operation_symbol == "/"){
		output = val1 / val2;
	} else if (operation_symbol == "-"){
		output = val1 - val2;
	} else if (operation_symbol == "+"){
		output = val1 + val2;
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
