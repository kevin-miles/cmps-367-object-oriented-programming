//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 4 Part 1
//				Due Date		March 1, 2013
//				Professor		Ray Ahmadnia
//
// Purpose: This program takes a sentence of user input then checks
//			each character individually if it is uppercase, lowercase,
//			vowels, or a word. It then increments the relative variable
//			that counts the respective attributes. The program then
//			prints the count information to screen.
//----------------------------------------------------------------------

#include <iostream>
#include <cctype>
#include <ctime>

using namespace std;

void getSentenceCount(int &lower, int &upper, int &vowels, int &words);
void printVariables(int &lower, int &upper, int &vowels, int &words);
bool isvowel(char &c);

int main()
{
	//declare int & initialize variables
	int vowel = 0,
		lower = 0,
		upper = 0,
		vowels = 0,
		words = 1; //all input will start with one word

	time_t t;
	time(&t);
	//output time and date
	cout << "Time & Date: " << ctime(&t) << endl;



	cout << "I can count the number of uppercase, lowercase, vowels and words." << endl;
	cout << "Please enter a sentence: ";
	getSentenceCount(lower, upper, vowels, words);
	printVariables(lower, upper, vowels, words);
	//terminate program
	system("pause");
	return 0;
}

/*
	Name: getSentenceCount
	
	Input: Passed by reference: int lower, upper, vowels, words
*/
void getSentenceCount(int &lower, int &upper, int &vowels, int &words)
{
	char c;	//declare variable
	cin.get(c); //get first character
	while(c != '\n')
	{
		//check for uppercase, lowercase, word, or vowel
		if(isupper(c))	{ upper++; }
		if(islower(c))	{ lower++; }
		if(isspace(c)) { words++; }
		if(isvowel(c)) { vowels++; }

		cin.get(c); //get next character
	}
}


/*
	Name: isvowel
	
	Input: Passed by reference: char c
*/
bool isvowel(char &c)
{
	switch(toupper(c)) //switches character to uppercase before vowel check
	{
	case 'A': case 'E': case 'I': case 'O': case 'U':
		return true;
		break;
	default:
		return false;
	}
}

/*
	Name: printVariables
	
	Input: Passed by reference: int lower, upper, vowels, words
*/
void printVariables(int &lower, int &upper, int &vowels, int &words)
{
	//outputs variables passed to it
	cout << endl;
	cout << "\tNumber of uppercase letters: " << upper << endl;
	
	cout << "\tNumber of lowercase letters: " << lower << endl;
	
	cout << "\tNumber of vowels: " << vowels << endl;
	
	cout << "\tNumber of words: " << words << endl << endl;
}

/*

Time & Date: Wed Feb 27 15:51:27 2013

I can count the number of uppercase, lowercase, vowels and words.
Please enter a sentence: Exam No.1 Two Weeks From Now

		Number of uppercase letters: 6
		Number of lowercase letters: 15
		Number of vowels: 8
		Number of words: 6

Press any key to continue . . .

*/