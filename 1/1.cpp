//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. 1 Part 1
//				Due Date		February 15, 2013
//				Professor		Ray Ahmadnia
//
// Purpose: This program prints a menu. It takes user input of age, 
//			gender, and full name. Finally, it prints back the full
//			name with appropriate title before it(Mr./Mrs.) and the 
//			total membership fee with 10% tax included.
//----------------------------------------------------------------------

#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//initialize and declare variables
	string name;
	int age, price;
	char gender;
	float total;


	//display menu
	cout << "--------------- Fullerton Health Club ---------------" << endl; 
	cout << "Children (Age 1-12)" << endl;
	cout << setfill('.');
	cout << left << setw(23) << "\tMale" << right << setw(23) << "50.00" << endl;
	cout << left << setw(23) << "\tFemale" << right << setw(23) << "55.00" << endl;
	cout << "Teenagers (Age 13-19)" << endl;
	cout << left << setw(23) << "\tMale" << right << setw(23) << "150.00" << endl;
	cout << left << setw(23) << "\tFemale" << right << setw(23) << "155.00" << endl;
	cout << "Adult (Age > 19)" << endl;
	cout << left << setw(23) << "\tMale" << right << setw(23) << "275.00" << endl;
	cout << left << setw(23) << "\tFemale" << right << setw(23) << "250.00" << endl;
	cout << endl << endl;

	//ask for user's age
	cout << "Enter your age? ";
	cin >> age;
	
	//ask for user's gender
	cout << "Enter your gender(m/f)? ";
	cin >> gender;

	//ask for user's name
	cout << "Enter your full name: ";
	cin.ignore(); //clear buffer. without this the next command will not work
	getline(cin, name);

	//print title  and name
	cout << "\tHello " << ((gender == 'm' || gender == 'M') ? "Mr. " : ((gender=='f' || gender == 'F') ? "Mrs. " : "ERROR INPUT")) << name << ", ";

	//calculate total membership costs
	cout << "your membership fee is ";
	if ( age <= 12 )
	{
		switch(gender)
		{
		case 'm': case 'M':
			price = 50;
			break;

		case 'f': case 'F':
			price = 55;
			break;
		default:
			cout << "ERROR CALCULATING MEMBERSHIP FEE BY GENDER";
		}
	}
	else if ( age > 12 && age < 19)
	{
		switch(gender)
		{
		case 'm': case 'M':
			price = 150;
			break;

		case 'f': case 'F':
			price = 155;
			break;
		default:
			cout << "ERROR CALCULATING MEMBERSHIP FEE BY GENDER";
		}
	}
	else 
	{
		switch(gender)
		{
		case 'm': case 'M':
			price = 275;
			break;

		case 'f': case 'F':
			price = 250;
			break;
		default:
			cout << "ERROR CALCULATING MEMBERSHIP FEE BY GENDER";
		}
	}

	total = (price * .1) + price;
	cout << fixed << showpoint << setprecision(2); //set 2 decimal points for floats		
	cout << total << " (10% tax is included)" << endl; //print total costs

	//terminate program
	system("PAUSE");
	return 0;
}
/*

--------------- Fullerton Health Club ---------------
Children (Age 1-12)
		Male....................................50.00
		Female..................................55.00
Teenagers (Age 13-19)
		Male...................................150.00
		Female.................................155.00
Adult (Age > 19)
		Male...................................275.00
		Female.................................250.00


Enter your age?
48
Enter your gender(m/f)? M
Enter your full name: Barack Obama
		Hello Mr. Barack Obama, your membership fee is 302.50 (10% tax is included)
Press any key to continue . . .

*/