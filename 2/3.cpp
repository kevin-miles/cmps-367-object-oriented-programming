//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. 2 Part 3
//				Due Date		February 22, 2013
//				Professor		Ray Ahmadnia
//
// Purpose: This program generates two random integer numbers less than 
//			100 that will be used as part of an addition problem. The
//			user then attempts to successfully find the answer and input
//			it into the program. The computer returns if the user was 
//			CORRECT or WRONG and increments the relative score. After
//			each question the user is asked if they would like to 
//			continue. The program loops when the user continues to input 
//			y or Y when asked to continue. The program will end if the
//			user inputs anything else.
//----------------------------------------------------------------------

#include <iostream>
#include <ctime>

using namespace std;


void print_datetime();	//prints date & time
void play_game();		//starts the addition game
void generate_random_int(int &a, int &b);	//generates two random numbers into the two variables passed to it

int main()
{
	//initialize and declare variables

	print_datetime();	//print date and time
	play_game();

	//terminate program
	system("pause");
	return 0;
}

void play_game()
{
	int a=0,
		b=0,
		answer,
		correct=0,
		wrong=0;

	char play;
	
	do
	{
		generate_random_int(a, b); //generates random numbers for int a and int b
		cout << a << " + " << b << " =? ";
		cin >> answer;

		if (answer == (a+b)) 
		{
			correct++;
			cout << "\tCORRECT";
		}
		else
		{
			wrong++;
			cout << "\tWRONG";
		}
		cout << endl;
		cout << "\tContinue(y/n)? ";
		cin >> play;
		cout << endl;
	}
	while (play == 'Y' || play == 'y');

	cout << "Number of CORRECT answers: " << correct << endl;
	
	cout << "Number of WRONG answers: " << wrong << endl;

}
//--------------------------------------------------------------
//	Name: pgenerate_random_int
//	Input:	int a	-	integer that random number will be generated into
//			int b	-	integer that random number will be generated into
//--------------------------------------------------------------
void generate_random_int(int &a, int &b)
{
	srand(time(0));
	a = rand() % 100;	//generates random number (0-99)
	b = rand() % 100;	//generates random number (0-99)
}

//--------------------------------------------------------------
//	Name: print_datetime
//	Input: 
//--------------------------------------------------------------
void print_datetime()
{
	time_t f;
	time(&f);

	cout << "Today's date and time is: " << ctime(&f) << endl;
}

/*
Today's date and time is: Thu Feb 21 16:19:26 2013

78 + 73 =? 151
		CORRECT
		Continue(y/n)? y

4 + 25 =? 29
		CORRECT
		Continue(y/n)? y

17 + 82 =? 33
		WRONG
		Continue(y/n)? y

30 + 8 =? 33
		WRONG
		Continue(y/n)? y

36 + 37 =? 33
		WRONG
		Continue(y/n)? n

Number of CORRECT answers: 2
Number of WRONG answers: 3
Press any key to continue . . .
*/