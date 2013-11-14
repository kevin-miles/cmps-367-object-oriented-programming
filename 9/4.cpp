//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. 9 Part 4
//				Due Date		April 12, 2013
//				Professor		Ray Ahmadnia
// Purpose: This program prints various information about a given two-dimensional
//			array based on size and color of shirts. Based on the given conditions
//			I formed functions that displayed all shirt information, red shirt
//			information, and all large shirt information.
//----------------------------------------------------------------------

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include <cstring>

using namespace std;


int const LENGTH=5;


const int	RED = 0,
			BLACK = 1,
			BLUE = 2,
			GREEN = 3,
			SMALL = 0,
			MEDIUM = 1,
			LARGE = 2,
			XLARGE = 3;

void printShirts(int shirts[][4]);
void printRedShirts(int shirts[][4]);
void printLargeShirts(int shirts[][4]);
string FindColor(int number);
string FindSize(int number);

int main()
{
	int t[4][4] = {2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5};

	//terminate program
	printShirts(t);
	printRedShirts(t);
	printLargeShirts(t);

	system("PAUSE");
	return 0;
}

/*
		NAME:		printShirts
		Purpose:	prints the quantities of all shirts. includes size and color.
*/
void printShirts(int shirts[][4])
{
	cout << "ALL SHIRTS: " << endl;
	for(int i=0; i<4; i++)
	{
		cout << "\t" << FindSize(i) << ": " << endl;
		for(int j=0; j<4; j++)
		{
			cout << "\t\t" << FindColor(j) << ": \t" << shirts[i][j] << endl;
		}
	}
	cout << endl; //formatting
}

/*
		NAME:		printRedShirts
		Purpose:	prints the quantities of all red shirts, including their size.
*/
void printRedShirts(int shirts[][4])
{
	
	cout << "RED SHIRTS: " << endl;
	for(int i=0; i<4; i++)
	{
			cout << "\t" << FindSize(i) << ":" << "\t" << shirts[i][RED] << endl;
	}
	cout << endl; //formatting
}

/*
		NAME:		printLargeShirts
		Purpose:	prints the quantities of all large shirts, including their color.
*/
void printLargeShirts(int shirts[][4])
{
	cout << "LARGE SHIRTS: " << endl;
	for(int i=0; i<4; i++)
	{
			cout << "\t" << FindColor(i) << ": \t" << shirts[LARGE][i] << endl;
	}
	cout << endl; //formatting
}

/*
		NAME:		FindColor
		Purpose:	returns a string of the name of the color, based on the number input
					NOTE: This follows the same pattern as the constants that were declared.
*/
string FindColor(int number)
{
	switch(number)
	{
	case 0:
		return "Red"; break;
	case 1:
		return "Black"; break;
	case 2:
		return "Blue"; break;
	case 3:
		return "Green"; break;
	default:
		return "ERROR"; break;
	}
}

/*
		NAME:		FindSize
		Purpose:	returns a string of the shirt size, based on the number input
					NOTE: This follows the same pattern as the constants that were declared.
*/
string FindSize(int number)
{
	switch(number)
	{
	case 0:
		return "Small"; break;
	case 1:
		return "Medium"; break;
	case 2:
		return "Large"; break;
	case 3:
		return "XLarge"; break;
	default:
		return "ERROR"; break;
	}
}
/*
ALL SHIRTS:
		Small:
				Red:    2
				Black:  2
				Blue:   2
				Green:  2
		Medium:
				Red:    3
				Black:  3
				Blue:   3
				Green:  3
		Large:
				Red:    4
				Black:  4
				Blue:   4
				Green:  4
		XLarge:
				Red:    5
				Black:  5
				Blue:   5
				Green:  5

RED SHIRTS:
		Small:  2
		Medium: 3
		Large:  4
		XLarge: 5

LARGE SHIRTS:
		Red:    4
		Black:  4
		Blue:   4
		Green:  4

Press any key to continue . . .
*/