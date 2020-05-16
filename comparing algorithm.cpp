#include "std_lib_facilities.h"

//returns the smaller and larger of two real numbers that the user provided.
//also returns the sum, difference, product, and ratio of the larger and smaller numebers provided.

int main ()
{
	double val1 = 0.0;
	cout << "Please enter a floating point number: \n";
	cin >> val1;
	double val2 = 0.0;
	cout << "Please enter another floating point number: \n";
	cin >> val2;

	double sum = val1 + val2;
	double smaller;
	double larger;
	
	if (val1 > val2)
	{
		smaller = val2;
		larger = val1;
	}else{
		larger = val2;
		smaller = val1;
	}

	double difference = larger - smaller;
	double product = larger * smaller;
	double ratio = larger / smaller;

	cout << "the sum is " << sum 
		<< "\nthe smaller number is " << smaller
		<< "\nthe larger number is " << larger
		<< "\nthe difference of the two numbers is " << difference
		<< "\nthe product of the two numbers is " << product
		<< "\nthe ratio of the two numbers is " << ratio << "\n\n";
}
