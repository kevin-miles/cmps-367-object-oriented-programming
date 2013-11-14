//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. 9 Part 3
//				Due Date		April 12, 2013
//				Professor		Ray Ahmadnia
// Purpose: This program takes a two dimensional array and converts the names to
//			uppercase, lowercase, and titlecase. It also prints all of the names
//			under each set of conditions.
//----------------------------------------------------------------------

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include <cstring>

using namespace std;


int const LENGTH=5;

void printArrayUppercase(char names[][10]);
void printArray(char names[][10]);
void printArrayLowercase(char names[][10]);
void printArrayTitlecase(char names[][10]);
void printArrayWithLength(char names[][10]);

int main()
{
	char names[5][10]={"kevin", "Shadi", "Michael", "oscar", "sultan"};
	//terminate program
	printArray(names);
	printArrayUppercase(names);
	printArrayLowercase(names);
	printArrayTitlecase(names);
	system("PAUSE");
	return 0;
}

/*
		Name:		printArray
		Purpose:	Takes an array and prints the contents of the array
*/
void printArray(char names[][10])
{
	cout << "Array: " << endl << "\t";
	for(int i=0; i<LENGTH; i++)
	{
		cout << names[i] << " ";
	}
	cout << endl;
}

/*
		Name:		printArrayTitlecase
		Purpose:	Takes an array and prints the contents of the array with their length
					EX: ARRAYVALUE(Length) ARRAYVALUE(Length) ARRAYVALUE(Length)
*/
void printArrayWithLength(char names[][10])
{
	cout << "Array with Length: " << endl << "\t";
	for(int i=0; i<LENGTH; i++)
	{
		cout << names[i] << "(" << strlen(names[i]) << ") ";
	}
	cout << endl;
}

/*
		Name:		printArrayUppercase
		Purpose:	Takes an array and converts the words to uppercase
*/
void printArrayUppercase(char names[][10])
{
	cout << "Array Uppercase: " << endl << "\t";
	for(int i=0; i<LENGTH; i++)
	{
		strupr(names[i]);
	}
	printArray(names);
}

/*
		Name:		printArrayLowercase
		Purpose:	Takes an array and converts the the words to lowercase
*/
void printArrayLowercase(char names[][10])
{
	cout << "Array Lowercase: "  << endl << "\t";
	for(int i=0; i<LENGTH; i++)
	{
		strlwr(names[i]);
	}
	printArray(names);
}

/*
		Name:		printArrayTitlecase
		Purpose:	Takes an array and converts the first letter of every word to uppercase.
*/
void printArrayTitlecase(char names[][10])
{
	cout << "Array Titlecase: " << endl << "\t";
	//NOTE: This function assumes all characters have been converted to lowercase.
	for(int i=0; i<LENGTH; i++)	//convert first character of every word to uppercase
	{
		names[i][0] = toupper(names[i][0]);
	}
	printArrayWithLength(names);
}
/*
Array:
		kevin Shadi Michael oscar sultan
Array Uppercase:
		Array:
		KEVIN SHADI MICHAEL OSCAR SULTAN
Array Lowercase:
		Array:
		kevin shadi michael oscar sultan
Array Titlecase:
		Array with Length:
		Kevin(5) Shadi(5) Michael(7) Oscar(5) Sultan(6)
Press any key to continue . . .
*/