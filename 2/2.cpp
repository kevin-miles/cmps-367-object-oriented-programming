//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. 2 Part 2
//				Due Date		February 22, 2013
//				Professor		Ray Ahmadnia
//
// Purpose: This program takes a sentence of user input and counts the
//			total occurrence of uppercase letters, digits, and vowels.
//			The program then outputs these totals to the screen.
//----------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{
	//declare and initialize variables
	int upper=0, digit=0, vowel=0;
	char input;
	time_t f;
	time(&f);
	cout << "Today's date and time: " << ctime(&f) << endl <<endl; //output time and date

	
	cout << "\tEnter sentence: "; //ask for user input
	cin.get(input); //get first character of input
	while(input != '\n') //continue until input = \n
	{
		if(input >= '0' && input <= '9'){digit++;} //if input is between or including 0-9 increment digits
		if(input >= 'A' && input <= 'Z'){upper++;} //if input is between or including A to Z increment upper
		switch(input) //if input is a vowel increment vowel
		{
		case 'a': case 'A': case 'e': case 'E': case 'i': case 'I': case 'o': case 'O': case 'u': case 'U':
			vowel++;
			break;
		}

		cin.get(input); //take next character of input
	}

	//set spaces to . for the table
	cout << setfill('.');

	//output information
	cout << left << setw(30) << "\tNumber of uppercase letters" << right << setw(10) << upper << endl;
	cout << left << setw(30) << "\tNumber of digits" << right << setw(10) << digit << endl;
	cout << left << setw(30) << "\tNumber of vowels" << right << setw(10) << vowel << endl << endl;

	//terminate program
	system("pause");
	return 0;
}

/*

Today's date and time: Mon Feb 18 15:58:35 2013


		Enter sentence: Today Is Thr Feb14,2013
		Number of uppercase letters...........4
		Number of digits......................6
		Number of vowels......................4
y6
Press any key to continue . . .

*/