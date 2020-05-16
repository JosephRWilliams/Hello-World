#include "std_lib_facilities.h"

int main ()
{
	cout << "enter a real number of miles.\n";
	double miles;
	cin >> miles;
	double kilometers;
	kilometers = miles * 1.609;

	cout << miles << " miles is equal to "
		<< kilometers << " kilometers.\n\n";
}

