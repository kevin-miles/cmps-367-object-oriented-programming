//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. 2 Part 1
//				Due Date		February 22, 2013
//				Professor		Ray Ahmadnia
//
// Purpose: This program takes user input for the start, finish, and
//			increment of a money conversion rate table. The program 
//			then outputs a table based on the user input.
//----------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{
	//initialize and declare variables
	time_t f;
	int start, finish, jump;

	//output date and time
	time(&f);
	cout << "Today's date and time: " << ctime(&f) << endl << endl;

	cout << "Please enter the table info(start, finish, jump): " << endl;
	cin >> start >> finish >> jump;
	cout << endl << endl;
	cout << '\t' << '$' << "\t\t" << char(157) << "\t\t" << char(156) << "\t\t" << "Euro" << endl; //there is no euro ascii character code, only unicode

	//print menu line
	for(int i=0; i<=75; i++)
	{
		cout << char(205);
	}
	cout << endl;

	cout << fixed << showpoint << setprecision(2); //set output to two decimal places

	//output table using user input for loop
	for(int i = start; i <= finish; i+=jump)
	{
		cout << '\t' << i*1. << "\t\t" << i*92.75 << "\t\t" << i*.64<< "\t\t" << i*.75 << endl; //i is multiplied by current exchange rates
	}


	//terminate program
	system("pause");
	return 0;
}
/*

Today's date and time: Mon Feb 18 15:38:48 2013


Please enter the table info(start, finish, jump):
10 100 10


		$               ¥               £               Euro
????????????????????????????????????????????????????????????????????????????
		10.00           927.50          6.40            7.50
		20.00           1855.00         12.80           15.00
		30.00           2782.50         19.20           22.50
		40.00           3710.00         25.60           30.00
		50.00           4637.50         32.00           37.50
		60.00           5565.00         38.40           45.00
		70.00           6492.50         44.80           52.50
		80.00           7420.00         51.20           60.00
		90.00           8347.50         57.60           67.50
		100.00          9275.00         64.00           75.00
Press any key to continue . . .

*/