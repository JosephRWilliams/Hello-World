#include "std_lib_facilities.h"

//returns the three numbers in order of smallest to largest

int main()
{
	//three commands that prompt a user for a number and store that value in the created variable
	double val1 = 0.0;
	cout << "Please enter a floating point number for value 1: \n";
	cin >> val1;
	
	double val2 = 0.0;
	cout << "Please enter a floating point number for value 2: \n";
	cin >> val2;
	
	double val3 = 0.0;
	cout << "Please enter a floating point number for value 3: \n";
	cin >> val3;

	double largest = 0.0;
	double middle = 0.0;
	double smallest = 0.0;

	//the outside if else statements find the largest number
	//the inner if else statements find the smallest and middle number

	if (val1 > val2 && val1 > val3){
		largest = val1;
		if (val2 > val3){
			middle = val2;
			smallest = val3;
		}else if (val3 > val2){
			middle = val3;
			smallest = val2;
		}
			
	}else if (val2 > val1 && val2 > val3) {
		largest = val2;
		if (val1 > val3){
			middle = val1;
			smallest = val3;
		}else if (val3 > val1){
			middle = val3;
			smallest = val1;
		}
			
	}else if (val3 > val1 and val3 > val2) {
		largest = val3;
		if (val2 > val1){
			middle = val2;
			smallest = val1;
		}else if (val1 > val2){
			middle = val1;
			smallest = val2;
		}
	}

	//print statement to show the numbers from smallest to largest 
	cout << "The smallest number inputed was " << smallest
		<< ".\n the second largest number was " << middle
		<< ".\n the largest number provided was " << largest << ".\n";

	
}
