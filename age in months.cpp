#include "std_lib_facilities.h"

int main()
{
	cout<<"Please enter your name and age\n";
	string name = "???";
	double age = 0;
	int age_in_months = 0;
	cin>>name>>age;	//read in a string and an int
	age_in_months = age * 12;
	cout<<"Hello, "<<name<<", you are "<<age_in_months<<" months old.\n";
}
