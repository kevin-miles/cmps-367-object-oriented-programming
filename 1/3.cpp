//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. 1 Part 3
//				Due Date		February 15, 2013
//				Professor		Ray Ahmadnia
//
// Purpose: This program asks the user how many drinks, the size of the
//			drinks, how many sandwiches, the size of the sandwiches, and
//			finally returns the total bill in a two decimal float.
//----------------------------------------------------------------------

#include <iostream>
#include <iomanip>

using namespace std;

//declare and initialize item prices as float constants
const float DRINK_SML = 1.20;
const float DRINK_MED = 1.50;
const float DRINK_LRG = 1.70;
const float SANDWICH_10 = 1.20;
const float SANDWICH_12 = 1.50;


int main()
{	
	//declare and initialize variables
	int drink_amount,
		sandwich_amount,
		sandwich_size;
	char drink_size;
	float total=0.0;

	//print menu
	cout << setfill('.'); //fill spaces with '.'
	cout << fixed << showpoint << setprecision(2); //set numbers to two decimal places (.00)
	cout << left << setw(15) << "---------------" << " MENU " << right << setw(15) << "---------------" << endl;
	cout << "Drinks" << endl;
	cout << left << setw(18) << "\tSmall" << right << setw(8) << DRINK_SML << endl;
	cout << left << setw(18) << "\tMedium" << right << setw(8) << DRINK_MED<< endl;
	cout << left << setw(18) << "\tLarge" << right << setw(8) << DRINK_LRG << endl;
	cout << "Sandwiches" << endl;
	cout << left << setw(18) << "\t10 inches" << right << setw(8) << SANDWICH_10 << endl;
	cout << left << setw(18) << "\t12" << right << setw(8) << SANDWICH_12 << endl;
	cout << endl << endl; //formatting purposes: to space menu from questions

	//take user input
	cout << "\tHow many drinks: ";
	cin >> drink_amount;
	cout << "\t\tWhat size(S=Small, M=Medium, L=Large)? ";
	cin >> drink_size;
	cout << "\tHow many sandwiches? ";
	cin >> sandwich_amount;
	cout << "\t\tWhat size(12/10 inches)? ";
	cin >> sandwich_size;
	cout << endl;
	cout << "\tTotal bill = ";
	

	//add to total cost based on user input of drink size and amount
	switch(drink_size)
	{
	case 's': case 'S':
		total += (DRINK_SML * drink_amount);
		break;
	case 'm': case 'M':
		total += (DRINK_MED * drink_amount);
		break;
	case 'l': case 'L':
		total += (DRINK_LRG * drink_amount);
		break;
	default:
		cout << endl << endl;
		cout << "--------------------" << endl;
		cout << "ERROR: Cannot read drink size. Try entering S, M, or L." << endl;
		cout << "--------------------" << endl;
	}

	//add to total cost based on user input of sandwich size and amount
	switch(sandwich_size)
	{
	case 10:
		total += (SANDWICH_10 * sandwich_amount);
		break;
	case 12: 
		total += (SANDWICH_12 * sandwich_amount);
		break;
	default:
		cout << endl << endl;
		cout << "--------------------" << endl;
		cout << "ERROR: Cannot read sandwich size. Try entering 10 or 12." << endl;
		cout << "--------------------" << endl;
	}

	cout << total << endl << endl; //output total cost


	//terminate program
	system("PAUSE");
	return 0;
}

/*

--------------- MENU ---------------
Drinks
		Small................1.20
		Medium...............1.50
		Large................1.70
Sandwiches
		10 inches............1.20
		12...................1.50


		How many drinks: 3
				What size(S=Small, M=Medium, L=Large)? M
		How many sandwiches? 3
				What size(12/10 inches)? 10

		Total bill = 8.10

Press any key to continue . . .

*/