#include "std_lib_facilities.h"

//converts an integer input from the user to a string input 
//representing the same value

int main () {
	cout << "\nPlease enter a number from 0 to 10.\n";
	int user_input = 0;
	cin >> user_input;

	//the if statement 
	//
	
	if (user_input <= 10 && user_input >= 0){
		switch (user_input){
			case 0:
				cout << "\nzero\n";
				break;
			case 1:
				cout << "\none\n";
				break;		
			case 2:
				cout << "\ntwo\n";
				break;	
			case 3:
				cout << "\nthree\n";
				break;	
			case 4:
				cout << "\nfour\n";
				break;
			case 5:
				cout << "\nfive\n";
				break;	
			case 6:
				cout << "\nsix\n";
				break;;	
			case 7:
				cout << "\nseven\n";
				break;	
			case 8:
				cout << "\neight\n";
				break;
			case 9:
				cout << "\nnine\n";
				break;	
			case 10:
				cout << "\nten\n";
				break;
	
		}

	}else{
		cout << "\nYour input was not a valid input.\n\n loser.\n\n";
	}

	return 0;
}
