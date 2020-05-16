#include "std_lib_facilities.h"

int main()
{
	cout<<"\nenter a sentence with at least one repeated word\n";
	string previous = "";	//previous word; initialized to "not a word"
	string current;		//current word
	while(cin >> current)	//reads a stream of words
	{
		if (previous == current)	//checks if the word is same as last
			cout<<"repeated word: "<<current<<'\n';
		previous = current;
	}
}
