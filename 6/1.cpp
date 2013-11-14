//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. 6 Part 1
//				Due Date		March 15, 2013
//				Professor		Ray Ahmadnia
//
// Purpose: This program uses a recursive and non-recursive function to 
//			return the nth fibonnacci number. n is input from the user.
//			The run time is calculated using <ctime> and the constant 
//			CLK_TCK(CLK_TCK is different for other systems.) The nth
//			number is printed to screen and the program ends. There
//			is an extremely long difference in time to process the 
//			recursive function compared to the non-recursive function.
//----------------------------------------------------------------------	

	#include <iostream>
	#include <ctime>

	using namespace std;

	long int FibRecursive(int n);
	long int FibIterative(int n);

	int main()
	{
		//declare variables
		int n,
			start,
			end;
		
		//take user input
		cout << "Enter a number(n) to find the (n)th number in the fibonacci sequence: " << endl;
		cin >> n;
		//call recursive function using user input and compute runtime
		start = clock();
		cout << FibRecursive(n) << endl;
		end = clock();
		cout << "Runtime: "<< (end - start)/CLK_TCK << endl; 

		cout <<  endl;

		start = clock();
		//call non-recursive function using user input and compute runtime
		cout << FibIterative(n) << endl;
		end = clock();
		cout << "Runtime: "<< (end - start)/CLK_TCK << endl; 


		//terminate program
		system("PAUSE");
		return 0;
	}
	/*
		Name: FibRecursive
		Input: integer n
	*/
	long int FibRecursive(int n)
	{
		//the recursive function takes far longer to compute than the iterative function
		if(n==1 || n==2) //base case
		{
			return 1;
		}
		else
		{
			return FibRecursive(n-1) + FibRecursive(n-2);
		}
	}

	/*
		Name: FibIterative
		Input: integer n
	*/
	long int FibIterative(int n)
	{
		long int current, prior=1, old=1;

		for(int i=3; i<=n; i++)
		{
		//beginning at the third iteration of the fibonacci sequence(if we started at 1 for the first 1 present)
		//because we already have the first two fibonacci numbers loaded. this first iteration will make iteration 3
		//be 2
		current = prior + old;
		old = prior;
		prior = current;
		}
		return current;
	}

/*
Enter a number(n) to find the (n)th number in the fibonacci sequence:
43
433494437
Runtime: 23

433494437
Runtime: 0
Press any key to continue . . .
*/