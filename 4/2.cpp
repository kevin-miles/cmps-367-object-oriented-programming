//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 301
//				Project			No. 4 Part 2
//				Due Date		March 1, 2013
//				Professor		Ray Ahmadnia
//
// Purpose: This program takes user input of a state name. The program
//			checks if the input has a space. If not, it will take the
//			first two letters and output them as the abbreviation. 
//			Otherwise it will take the first letter and the letter after
//			the first space and output as the abbreviation. The program
//			will continue to loop this until the user exits the loop on
//			request.
//----------------------------------------------------------------------

#include <string> //handles type string
#include <iostream> //I/O
#include <cctype> //used for characters(toupper)
#include <ctime> //used to output time/date

using namespace std;

bool getContinue();
void getInput(char &firstletter, char &secondletter, string &input);
void printState(char &firstletter, char &secondletter, string &input);

int main()
{
	//initialize and declare variables
	char firstletter=' ',
		 secondletter=' ';
	string input="";
	bool cont;

	//output time and date
	time_t t;
	time(&t);
	cout << "Time & Date: " << ctime(&t) << endl;
	
	//begin program loop
	do
	{
		getInput(firstletter, secondletter, input); //takes user input and isolate characters
		printState(firstletter, secondletter, input); //outputs state and abbreviation
		cont = getContinue(); //asks user if they want to continue
	}
	while (cont == true); //continues until false


	//terminate program
	system("pause");
	return 0;
}

/*
	Name: getInput
	Input:	char firstletter, secondletter
			string input
*/
void getInput(char &firstletter, char &secondletter, string &input)
{
	int location=0; //location of character in string
	
	cout << "Enter a state name: ";
	getline(cin, input);

	location = input.find(' ');	//find space

	if(location == -1) //if there is no space take first two letters and make them uppercase
	{
		firstletter = toupper(input[0]);
		secondletter = toupper(input[1]);
	}
	else //else take first letter and the letter after the space and make them uppercase
	{
		firstletter = toupper(input[0]);
		secondletter = toupper(input[location+1]);
	}

}


/*
	Name: printState
	Input:	char firstletter, secondletter
			string input
*/
void printState(char &firstletter, char &secondletter, string &input)
{
	cout << "\t" << input << " or " << firstletter << secondletter << endl;
}


/*
	Name: getContinue
	Input:	
*/
bool getContinue()
{
	string answer="";

	cout << "\tContinue(y/n)? ";
	cin >> answer;
	cout << endl;
		if(answer == "y" || answer == "Y")
		{ 
			cin.get(); //clear buffer(without this program will not operate properly)
			return true; 
		} 
		else
		{
			return false;
		}
}

/*
Time & Date: Wed Feb 27 16:32:55 2013

Enter a state name: New Hampshire
		New Hampshire or NH
		Continue(y/n)? y

Enter a state name: California
		California or CA
		Continue(y/n)? n

Press any key to continue . . .
*/