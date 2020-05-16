#include "std_lib_facilities.h"

//takes an integer input and returns the square of that value
//note: this will not work with decimal inputs

double square_using_addition (double value1)
{
	double variable1 = value1;
	double return_variable = value1;

	for (int iterator = 1; iterator < variable1 ; ++iterator)
	{
		 return_variable += variable1;
	}

	return return_variable;
}

int main ()
{
	cout << "\nPlease enter an integer.\n";
	cout << "note entering a double will give you erroneous data\n";
	
	double user_input;
	cin >> user_input;

	cout << "\nThe square of the input " << user_input 
		<< " is: " << square_using_addition(user_input) << "\n\n";

}
