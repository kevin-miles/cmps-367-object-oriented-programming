//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. 6 Part 2
//				Due Date		March 15, 2013
//				Professor		Ray Ahmadnia
//
// Purpose: This program computes (n^3)! or the factorial of n(input from user)
//			to the third power. The program utilizes a recursive function to 
//			compute the total. The total is printed to screen with the runtime.
//----------------------------------------------------------------------		

	#include <iostream>
	#include <ctime>
	#include <cmath>

	using namespace std;

	long int ComputeSequence(double n);

	int main()
	{
		//declare variables
		double n;
		int	start,
			end;
		
		//get user input
		cout << "Enter a number(n) to find the (n)th number sum in the sequence (1^3 + 2^3 + 3^3... + n^3): " << endl;
		cin >> n;
		start = clock();
		//compute factorial by calling function with user input 
		cout << "Total: " << ComputeSequence(n) << endl;
		end = clock();
		cout << "Runtime: "<< (end - start)/CLK_TCK << endl; 

		cout <<  endl;

		system("PAUSE");
		return 0;
	}

	/*
		Name: ComputeSequence
		Input: integer n
	*/
	long int ComputeSequence(double n)
	{
		if(n==1)//base case
		{
			return 1;
		}
		else
		{
			return ((pow (n, 3)) + ComputeSequence(n-1));
		}
	}

/*

Enter a number(n) to find the (n)th number sum in the sequence (1^3 + 2^3 + 3^3.
.. + n^3):
10
Total: 3025
Runtime: 0

Press any key to continue . . .

*/