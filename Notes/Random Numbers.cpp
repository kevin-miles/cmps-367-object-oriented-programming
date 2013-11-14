/*
*********************************************************************************************
Generating Random Numbers

*** To generate a unique set of random numbers you must use srand ***
srand = seed random generator
srand(time(INTEGER NUMBER)); or srand(time(0));

rand	-	<cstdlib> library && member of <iostream>
srand	-	<cstdlib> library && member of <iostream>
time	-	<ctime> library
*********************************************************************************************


cout << rand();

cout << rand() % 10;			0-9
cout << rand() % 100;			0-99
cout << rand() % 100 + 1;		1-100

								30-50 (subtract 30 from each side)
								0-20 (rand() % 21; = 0-20)
								30-50 (rand() % 21 + 30;)


EXAMPLE:
	Generate 5 random numbers < 10

	for(int i=1; i<=5; i++)
	{
		cout << rand() % 10 << '\t';
	}



EXAMPLE:
	Write a program to practice multiplication using random numbers < 100


	#include <iostream>
	#include <cstdlib>
	#include <ctime>

	using namespace std;

	int main()
	{
		int answer;
		char cont;
		srand(time(0)); //randomize numbers

		do
		{
			int x = rand() % 100;
			int y = rand() % 100;
			cout << x << " * " << y << " = ";
			cin >> answer;
			if ( answer == (x*y)) { cout << "Your answer is correct.\n"; } else { cout << "Your answer is wrong.\n"; }
			cout << "Continue?(Y/N) ";
			cin >> cont;
		}
		while(cont=='y'||cont=='Y');	

		//convert a character to uppercase or lowercase
		char c;
		cout << "Enter a letter: ";
		cin >> c;
		cout << "This is the original letter :" << c << endl;
		c = toupper(c);
		cout << "Uppercase: " << c << endl;
		c = tolower(c);
		cout << "Lowercase: " << c << endl;

		system("PAUSE");
		return 0;
	}
	}
*/