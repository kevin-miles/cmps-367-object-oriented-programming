//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. 2 Part 4
//				Due Date		February 22, 2013
//				Professor		Ray Ahmadnia
//
// Purpose: This program takes user input and converts it into stars
//			counted for each vote. (EX: YYyynnNN will output **** for
//			yes votes and **** for no votes
//----------------------------------------------------------------------

#include <iostream>
#include <ctime>

using namespace std;

void read_input_return_votes(int &yes, int &no);	//reads user input and returns count of votes
void print_datetime();								//prints the date & time
void print_stars(int amount);						//prints * based on int amount (3 = ***)

int main()
{
	//initialize and declare variables
	int yes=0,
		no=0;
	string input;

	//print time
	print_datetime();
	cout << "Enter a string of YES and NO votes: ";
	read_input_return_votes(yes, no); //reads user input and returns vote count to int yes and int no
	cout << "\tYES votes: ";
	print_stars(yes);
	cout << endl;
	cout << "\tNO votes : ";
	print_stars(no);
	cout << endl;


	//terminate program
	system("pause");
	return 0;
}

//--------------------------------------------------------------
//	Name: print_datetime
//	Input: 
//--------------------------------------------------------------
void print_datetime()
{
	//initialize and declare variables
	time_t f;
	time(&f);

	//output current date and time when program is run
	cout << "Today's date and time: " << ctime(&f) << endl << endl;
}


//--------------------------------------------------------------
//	Name: print_stars
//	Input: int amount - amount of stars to be printed
//--------------------------------------------------------------
void print_stars(int amount)
{
	for(int i=1; i<=amount; i++)
	{
		cout << '*';
	}
}

//--------------------------------------------------------------
//	Name:	read_input_return_votes
//	Input:	int yes	- amount of yes votes
//			int no - amount of no votes
//--------------------------------------------------------------
void read_input_return_votes(int &yes, int &no)
{
	char c;
	cin.get(c);
	while(c != '\n')
	{
		switch(c)
		{
		case 'y': case 'Y':
			yes++;
			break;
		case 'n': case'N':
			no++;
			break;
		}
		cin.get(c);
	}
}


/*
Today's date and time: Thu Feb 21 16:22:54 2013


Enter a string of YES and NO votes: yyNNNYYnn
		YES votes: ****
		NO votes : *****
Press any key to continue . . .
*/ 