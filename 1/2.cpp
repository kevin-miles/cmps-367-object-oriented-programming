//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. 1 Part 2
//				Due Date		February 15, 2013
//				Professor		Ray Ahmadnia
//
// Purpose: This program asks the user to enter two fractions and 
//			to choose what mathematical operation to use on the two.
//			The program then outputs the equation, with operation 
//			symbols, and the answer. It is a requirement to use a
//			switch statement to complete the problem.
//----------------------------------------------------------------------

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//declare variables
	float	fraction1_numerator,		//user input - 1st fraction's numerator
			fraction1_denominator,		//user input - 1st fraction's denominator
			fraction2_numerator,		//user input - 2nd fraction's numerator
			fraction2_denominator,		//user input - 2nd fraction's denominator
			solution_numerator,			//calculation - used to calculate solutions for numerator
			solution_denominator;		//calculation - used to calculate solutions for denominator
	char operation;						//user input - operation (*,/,+,-) the user wants done on the fractions 

	//ask for fractions and place them into variables, separating by numerator and denominator
	cout << "Enter a fraction: ";
	cin >> fraction1_numerator;
	cin.ignore();
	cin >> fraction1_denominator;
	cout << "Enter another fraction: ";
	cin >> fraction2_numerator;
	cin.ignore();
	cin >> fraction2_denominator;

	//ask for operation to use
	cout << "\tEnter an operation symbol (+, -, *, /): ";
	cin >> operation;

	//set decimal precision to two (.00)
	cout << fixed << showpoint << setprecision(2);

	switch(operation)
	{
	case '+':
		cout << "\t\t(" << fraction1_numerator << "/" << fraction1_denominator << ") " << operation << " (" << fraction2_numerator << "/" << fraction2_denominator << ") = ";
		
		//if either fractions denominator is 0 report error and break out of the case immediately
		if (fraction1_denominator == 0 || fraction2_denominator == 0)
		{
			cout << endl << "\tERROR: Fraction has a denominator of 0";
			break; //stops the case here if a denominator is 0
		}
		
		//if the denominators are not the same value, multiply them together 
		//then multiply the numerator by the number the denominator was
		//multiplied by
		if (fraction1_denominator != fraction2_denominator)
		{
			solution_denominator = fraction1_denominator * fraction2_denominator;
			fraction1_numerator *= fraction2_denominator;
			fraction2_numerator *= fraction1_denominator;
		}


		
		//add numerators
		solution_numerator = fraction1_numerator + fraction2_numerator;
		cout << solution_numerator << "/" << solution_denominator;

		cout << endl;
		break;
	case '-':
		cout << "\t\t(" << fraction1_numerator << "/" << fraction1_denominator << ") " << operation << " (" << fraction2_numerator << "/" << fraction2_denominator << ") = ";
		
		//if either fractions denominator is 0 report error and break out of the case immediately
		if (fraction1_denominator == 0 || fraction2_denominator == 0)
		{
			cout << endl << "\tERROR: Fraction has a denominator of 0";
			break; //stops the case here if a denominator is 0
		}
		
		//if the denominators are not the same value, multiply them together 
		if (fraction1_denominator != fraction2_denominator)
		{
			solution_denominator = fraction1_denominator * fraction2_denominator;
			fraction1_numerator *= fraction2_denominator;
			fraction2_numerator *= fraction1_denominator;
		}
		
		//add numerators
		solution_numerator = fraction1_numerator - fraction2_numerator;

		cout << solution_numerator << "/" << solution_denominator;
		cout << endl;
		break;
	case '*':
		cout << "\t\t(" << fraction1_numerator << "/" << fraction1_denominator << ") " << operation << " (" << fraction2_numerator << "/" << fraction2_denominator << ") = " << (fraction1_numerator * fraction2_numerator) << "/" << (fraction1_denominator * fraction2_denominator );
		cout << endl;
		break;
	case '/':
		cout << "\t\t(" << fraction1_numerator << "/" << fraction1_denominator << ") " << operation << " (" << fraction2_numerator << "/" << fraction2_denominator << ") = " << (fraction1_numerator * fraction2_denominator) << "/" << (fraction1_denominator * fraction2_numerator );
		cout << endl;
		break;
	default:
		cout << "ERROR: OPERATION NOT RECOGNIZED";
	}
	//terminate program
	system("PAUSE");
	return 0;
}
/*
Enter a fraction: 12/5
Enter another fraction: 2.1/7.5
		Enter an operation symbol (+, -, *, /): *
				(12.00/5.00) * (2.10/7.50) = 25.20/37.50
Press any key to continue . . .
*/