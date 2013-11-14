//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. StudyGuide Part 4
//				Due Date		April 26, 2013
//				Professor		Ray Ahmadnia
// Purpose: THe user inputs a city's name consisting of one to three words.
//          The program calculates how many spaces are in the user input
//          and returns the capitalized initials to the user based on this
//          information. The program continuously loops until the user enters
//          the character 'n' when prompted to continue.
//----------------------------------------------------------------------
#include <string>
#include <iostream>
#include <cctype>
using namespace std;

void inputLoop(string& city); //loops program until user opts out
void getInput(string& city, char& input); //gets user input
char getContinue(char& cont); //gets user input if they want to continue
void printInitials(string& city); //prints initials of city passed to it(up to three words)

int main()
{
	string city;

	inputLoop(city);

	system("PAUSE");
	return 0;
}

void inputLoop(string& city)
{
	char input = 'y';
	while(input=='y')
	{
		getInput(city, input);
	}
}

void getInput(string& city, char& input)
{
	cout << "Enter a city name: ";
	getline(cin, city);
	printInitials(city);
	getContinue(input);
}

void printInitials(string& city)
{
	string initials = "";

	initials += toupper(city[0]);
	int loc = city.find(' ');
	if(loc > 0)
	{
		initials += toupper(city[loc+1]);
		loc = city.find(' ', loc+1);
		if(loc > 0)
		{
			initials+=toupper(city[loc+1]);
		}
	}
	cout << "\t" << city << " or " << initials << endl;
	
}

char getContinue(char& cont)
{

	cout << "\tContinue?(y/n)";
	cin >> cont;
	tolower(cont);
	while(cont != 'y' && cont != 'n')
	{
		cout << "\tContinue?(y/n) ";
		cin >> cont;
		tolower(cont);
	}
	cin.get(); //clear buffer
	return cont;
}
/*
Enter a city name: La Verne
		La Verne or LV
		Continue?(y/n)y
Enter a city name: Pomona
		Pomona or P
		Continue?(y/n)y
Enter a city name: La Habra Heights
		La Habra Heights or LHH
		Continue?(y/n)n
Press any key to continue . . .
*/