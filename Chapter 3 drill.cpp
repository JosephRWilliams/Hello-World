// read and write a first name
#include "std_lib_facilities.h"

int main()
{
	cout << "Please enter your name:\n";
	string your_name = "???";
	cin >> your_name;

        cout << "Please enter the name of the person you want to write to:\n";
        string first_name = "???";              // first_name is a variable of type string
        cin >> first_name;             // read characters into first_name

	cout << "Please enter the name of another friend.\n";
	string friend_name = "???";	//friend_name is a variable of type string 
	cin >> friend_name;	//reads user prompt response into friend_name
	
	char friend_sex = 0;	//friend_sex is a variable of char type
	cout << "Please enter the sexual identity of " << friend_name 
	       << ". Enter an 'm' for male, 'f' for female, or 'tbn' for other.\n";
	cin >> friend_sex;	//reads the first char of a user response into friend_sex
	
	cout << "Please enter the age of the person you are writing a letter to:\n";
	int age_friend_in_letter;
	cin >> age_friend_in_letter;

/*	if (age_friend_in_letter <= 0 || age_friend_in_letter >= 110 )
		simple_error("you're kidding!")	
*/
	cout << "\n\nDear, " << first_name << ", \n\n";
	cout << "How are you? I am fine. I miss you.\n\n It's my letter\n";
	cout << "Have you seen " << friend_name << " lately? ";
	if (friend_sex == 'm')	//if true 
		cout << "If you see " << friend_name 
			<< " please ask him to call me.\n";
	else if (friend_sex == 'f') //if true
		cout << "If you see " << friend_name 
			<< " please ask her to call me.\n";

	if (age_friend_in_letter > 0 && age_friend_in_letter < 110)
	{
		cout << "I hear you just had a birthday and you are "
			<< age_friend_in_letter << " years old.\n";
	}else{
		cout << "I hear that you just had a birthday and are "
			<< age_friend_in_letter << " years old now, but I know that you're kidding.\n";
	}

	if (age_friend_in_letter < 12)
	{
		cout << "Next year you will be " << age_friend_in_letter +1 
			<< ".\n";
	}else if (age_friend_in_letter == 17){
		cout << "Next year you will be able to vote.\n";
	}else if (age_friend_in_letter > 70){
		cout << "I hope you are enjoying retirement.\n";

	cout << "Yours sincerely, \n\n" << your_name;
	}
}
