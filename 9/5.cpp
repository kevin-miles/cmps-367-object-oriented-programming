//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. 9 Part 5
//				Due Date		April 12, 2013
//				Professor		Ray Ahmadnia
// Purpose: This program takes arrays and prints their output using functions.
//			A three dimensional array based on the size, color, and sex is used.
//			The functions print out the data based on specific conditions presented
//			in the homework. The conditions are tested and the output is printed to 
//			screen.
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
			XLARGE = 3,
			WOMEN = 0,
			MEN = 1;

void printShirts(int shirts[][4][2]);
void printSmallRedShirts(int shirts[][4][2]);
void printMediumWomenShirts(int shirts[][4][2]);
void printGreenShirts(int shirts[][4][2]);
string FindColor(int number);
string FindSize(int number);
string FindSex(int number);

int main()
{
	int t[4][4][2] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32};

	printShirts(t);
	printSmallRedShirts(t);
	printMediumWomenShirts(t);
	printGreenShirts(t);

	//terminate program
	system("PAUSE");
	return 0;
}

/*
		NAME:		printShirts
		Purpose:	prints out the contents of the array, organizing it by each sex, size, and color
*/
void printShirts(int shirts[][4][2])
{
	cout << "ALL SHIRTS: " << endl;
	for(int k=0; k<2; k++)
	{
		cout << "\t" << FindSex(k) << ": \t" << endl;
		for(int i=0; i<4; i++)
		{
			cout << "\t\t" << FindSize(i) << ": " << endl;
			for(int j=0; j<4; j++)
			{
				cout << "\t\t\t" << FindColor(j) << ": \t" << shirts[i][j][k] << endl;
			
			}
		}
	}
	cout << endl; //formatting
}


/*
		NAME:		printSmallRedShirts
		Purpose:	prints out the contents of small red shirts in the array passed to it.
					organizes by women and men.
*/
void printSmallRedShirts(int shirts[][4][2])
{
	cout << "SMALL RED SHIRTS: " << endl;
	for(int k=0; k<2; k++)
	{
		cout << "\t" << FindSex(k) << ": " << endl;
		cout << "\t\tSmall: " << endl;
		cout << "\t\t\tRed: \t" << shirts[0][0][k] << endl;
	}
	cout << endl; //formatting
}

/*
		NAME:		printMediumWomenShirts
		Purpose:	prints out medium women shirts. organizes by color.
*/
void printMediumWomenShirts(int shirts[][4][2])
{
	cout << "MEDIUM WOMEN SHIRTS: " << endl;

		cout << "\tWomen: \t" << endl;
		for(int i=0; i<4; i++)
		{
			cout << "\t\tMedium: " << endl;
				cout << "\t\t\tGreen: \t" << shirts[1][i][0] << endl;
		}
	cout << endl; //formatting
}

/*
		NAME:		printGreenShirts
		Purpose:	prints out green shirts, organizing by sex and size.
*/
void printGreenShirts(int shirts[][4][2])
{

	cout << "GREEN SHIRTS: " << endl;
	for(int k=0; k<2; k++)
	{
		cout << "\t" << FindSex(k) << ": \t" << endl;
		for(int i=0; i<4; i++)
		{
			cout << "\t\t" << FindSize(i) << ": " << endl;
				cout << "\t\t\tGreen: \t" << shirts[i][3][k] << endl;
		}
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
		NAME:		FindSex
		Purpose:	returns a string of the name of the sex, based on the number input
					NOTE: This follows the same pattern as the constants that were declared.
*/
string FindSex(int number)
{
	switch(number)
	{
	case 0:
		return "Women"; break;
	case 1:
		return "Men"; break;
	default:
		return "ERROR"; break;
	}
}
/*
ALL SHIRTS:
		Women:
				Small:
						Red:    1
						Black:  3
						Blue:   5
						Green:  7
				Medium:
						Red:    9
						Black:  11
						Blue:   13
						Green:  15
				Large:
						Red:    17
						Black:  19
						Blue:   21
						Green:  23
				XLarge:
						Red:    25
						Black:  27
						Blue:   29
						Green:  31
		Men:
				Small:
						Red:    2
						Black:  4
						Blue:   6
						Green:  8
				Medium:
						Red:    10
						Black:  12
						Blue:   14
						Green:  16
				Large:
						Red:    18
						Black:  20
						Blue:   22
						Green:  24
				XLarge:
						Red:    26
						Black:  28
						Blue:   30
						Green:  32

SMALL RED SHIRTS:
		Women:
				Small:
						Red:    1
		Men:
				Small:
						Red:    2

MEDIUM WOMEN SHIRTS:
		Women:
				Medium:
						Green:  9
				Medium:
						Green:  11
				Medium:
						Green:  13
				Medium:
						Green:  15

GREEN SHIRTS:
		Women:
				Small:
						Green:  7
				Medium:
						Green:  15
				Large:
						Green:  23
				XLarge:
						Green:  31
		Men:
				Small:
						Green:  8
				Medium:
						Green:  16
				Large:
						Green:  24
				XLarge:
						Green:  32

Press any key to continue . . .
*/