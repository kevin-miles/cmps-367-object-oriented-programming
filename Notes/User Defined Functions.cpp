/*

Functions


1.) User Defined Functions
	- Pass by value
	- Pass by return
	- Pass by reference

	int main()
	{
		int x, y;
		cout << "Enter two nunbers: "; cin >> x >> y;
		int total = x + y;
		float average = (x+y)/2;

		cout << "Total: " << total << endl;
		cout << "Average: " << average << endl;
	
		system("pause");
		return 0;
	}
	main is a function itself. it returns 0 at the end because it is type int.

	this can become..

	int main()
	{
		int x, y;

		Read(x, y);
		int total = ComputeSum(x, y);
		float average = ComputeAvg(x, y);
		Display(total, average);
		
		system("pause");
		return 0;
		}

	you will see the exact same output between the two programs. 
	it helps isolate portions of your program and assists in identifying mistakes and correcting them.


	//use type int for variables because you are passing integer variables to the functions
	//using & in front of variable names because it is passing a reference of the variable
	//this is called pass by reference
	//we are not returning anything, so the type of the function is void
	void Read(int &a, int &b) 
	{
		cout << "Enter two numbers: ";
		cin >> a >> b;
	}

	//this function is returning an integer, must be type int
	//this is called pass by value because there is no & symbol in front of the variable names
	int ComputeSum(int a, int b)
	{
		return a+b;
	}

	//this function is returning a float must be type float
	float ComputeAvg(int a, int b)
	{
		return (a+b)/2.;
	}

	//void because it is not returning anything
	//pass by value
	void Display(int t, float a)
	{
		cout << "Total: " << t << endl;
		cout << "Average: " << a << endl;
	}

	Putting it all together:

	#include <iostream>
	#include <iomanip>
	
	using namespace std;

	void Read(int &a, int &b);
	int ComputeSum(int a, int b);
	float ComputeAvg(int a, int b);
	void Display(int t, float a);

	//this will allow the compiler to recognize these since they exist below int main()
	//without these declared before int main() the compiler will throw an error because
	//it does not know where these functions are located
	//you can remove all variable names from these declarations
	//EX:
	void Read(int &, int &);
	int ComputeSum(int , int );
	float ComputeAvg(int , int );
	void Display(int , float );


	int main()
	{
		int x, y;

		Read(x, y);
		int total = ComputeSum(x, y);
		float average = ComputeAvg(x, y);
		Display(total, average);
		
		system("pause");
		return 0;
	}

	//functions would actually be below here. omitted to save space.

*/