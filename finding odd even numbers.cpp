#include "std_lib_facilities.h"

int main ()
{
	int user_input = 0;
	cout << "\nPlease enter a positive integer\n";
	cin >> user_input;

	if ((user_input % 2) == 0)
		cout << "\nThe value " << user_input << " is an even number.\n";
	else
		cout << "\nThe value " << user_input << " is an odd number.\n";
}
