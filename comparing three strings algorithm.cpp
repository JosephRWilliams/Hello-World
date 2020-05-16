#include "std_lib_facilities.h"

//returns the three numbers in order of smallest to largest

int main()
{
	//three commands that prompt a user for a number and store that value in the created variable
	string val1 = "???";
	cout << "Please enter a single word for string entry 1: \n";
	cin >> val1;
	
	string val2 = "???";
	cout << "Please enter a single word for string entry 2: \n";
	cin >> val2;
	
	string val3 = "???";
	cout << "Please enter a single word for string entry 3: \n";
	cin >> val3;

	string largest = "???";
	string middle = "???";
	string smallest = "???";

	//the outside if else statements finds the word that alphabetically comes first
	//the inner if else statements find the alphabetic order of the two other words

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

	cout << "The order of the words entered is " 
		<< smallest << ", " << middle << ", " 
		<< largest << endl;
}
