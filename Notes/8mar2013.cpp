
/*

Recursive Functions

f(n) =  { 1			if n=1
		{ n*f(n-1)	if n>1

		recursive definition

	  24		6			2			1
Find f(4) --> 4*f(3) --> 3*f(2)) -->  2*f(1) --> 1

Write a function in C++ for this recursive definition

int f(int n)
{
	if(n==1) return 1;
	else return (n*f(n-1));
}
		24			6			2			1			
cout << f(4); //--> 4*f(3) --> 3*f(2) --> 2*f(1) --> 1



=================================================================

Compute 1+2+3+...+n using recursive function

f(n) = 1+2+3+...+n
or f(n) = n+...+3+2+1

n=5 then	f(5) = 5+4+3+2+1
			f(5) = 5+f(4) OR n = n+f(n-1)
			 

f(n) =  {1				if n=1 
		{n + f(n-1)		if n>1

int f(int n)
{
	if(n==1) return 1;
	else return (n+f(n-1));
}

cout << f(5);	  15		10			6			3
		^------	5+f(4) --> 4+f(3) --> 3+f(2) --> 2+f(1) --> 1
		

=================================================================

FIRST STEP - REVERSE:
g(n)  = 2^2 + 3^2 ... + n^2
or
g(n) = n^2 + ... + 3^2 + 2^2

n=5

g(5) = 5^2 + 4^2 + 3^2 + 2^2
g(5) = 5^2 + g(4) is the same as...
  n  = n^2 + g(n-1)

g(n) =	{ 4				if n=2 (2^2 = 4)
		{ n^2 + g(n-1)  if n>2

int g(int n)
{	
	if(n==2) return 4;
	else return ((n*n)+g(n-1));
}
	5^2+4^2+3^2+2^2
cout << g(5);  4^2+3^2+2^2	3^2+2^2		2^2
		  ^----	5^2+(4)	-->	4^2+g(3) --> 3^2+g(2) --> 4 (n==2 so n=4)	

=================================================================

TRACE THE FOLLOWING:

void f(int n)
{
	cout << n;
	if(n >= 1) f(n-1);
}

CALLING STATEMENT:		OUTPUT:	
	f(4);				 43210			f(4) --> f(3) --> f(2) --> f(1) --> f(0) //(0 just prints 0, if statement tests false)
	f(3);				 3210			f(3) --> f(2) --> f(1) --> f(0)

=================================================================

void f(int n)
{
	if(n>=1) f(n-1);
	cout << n;
}

CALLING STATEMENT:		OUTPUT:			STACK:
	f(4);				 01234			cout << 1;(first print)	f(4) --> f(3) --> f(2) --> f(1) --> f(0) //function calls itself before printing
										cout << 2;
										cout << 3;
										cout << 4; (this is the first to stack. these accumulate and execute after function is done)

=================================================================

void f(int n)
{	
	cout << n;
	if (n>=1) f(n-1);
	cout << n;
}

CALLING STATEMENT:		OUTPUT:			STACK:
	f(4);				 4321001234		cout << 1;				f(4) --> f(3) --> f(2) --> f(1) --> f(0) //function calls itself before printing
										cout << 2;
										cout << 3;
										cout << 4; (first to stack. these accumulate and execute after function is done)

CALLING STATEMENT:				NEXT STEP			NEXT STEP
	f(4); becomes (cout << 4);		-->		 f(3);		-->		(cout << 4);
						|						|						|						
						|						|						|
						|						|						|
						|			(cout << 3); --> f(2) --> (cout << 3);					
						|				  |			  |			...				
						|				  |			  |						
						|				  |			 (cout << 2); --> f(1) --> (cout << 2)
						|				  |					|			|			
					output: 4			output: 3		output: 1	  f(0)... and so on...


=================================================================
#include <iostream>
#include <ctime>

using namespace std;
long int Fib(int n);

int main()
{
	int start,
		end;

	start = clock();
	cout << Fib(43) << endl;
	end = clock();

	cout << "Runtime: "<< (end - start)/1000 << endl; //divide by 1000 to change to seconds
	//CLK_TCK is C++ constant (end - start)/CLK_TCK to work on all computers

	system("PAUSE");
	return 0;
}

long int Fib(int n)
{
	if(n==1 || n==2) return 1;
	else return (Fib(n-1) + Fib(n-2));
}
//This takes a long time to run. It came to 21 seconds on the university computers.
//Non-recursive function is probably better to use.

		1		1		2		3		5		8		13		...
	 Fib(1)	 Fib(2)		|		|
	 F1=1	 F2=2	 F=F1+F2	|
			 F1			F2		|
							 F=F1+F2


long int FibNR(int n)
{
	long int F1=1, F2=1, F;
	for(int i=3, i<=n; i++)
	{
		F=F1+F2;
		F1=F2;
		F2=F;
	}
}
=================================================================
#include <iostream>
#include <ctime>

using namespace std;

long int FibNR(int n);
long int Fib(int n);

int main()
{
	int n,
		start,
		end;

	
	cout << "Enter Number: ";
	cin >> n;
	start = clock();
	cout << FibNR(n);
	cout << endl;
	end = clock();
	cout << "Runtime: "<< (end - start)/CLK_TCK << endl; 
	
	start = clock();
	cout << Fib(n) << endl;
	cout << endl;
	end = clock();
	cout << "Runtime: "<< (end - start)/CLK_TCK << endl; 

	system("PAUSE");
	return 0;
}

long int FibNR(int n)
{




















}

long int Fib(int n)
{
	if(n==1 || n==2) return 1;
	else return (Fib(n-1) + Fib(n-2));
}

	RETURNS THE FOLLOWING:
Enter Number: 43
433494437
Runtime: 0
433494437

Runtime: 21
Press any key to continue . . .

The speed of the non-recursive function is much faster.

=================================================================

#include <iostream>
#include <ctime>

using namespace std;

long int FibNR(int n)
{
	long int Fo=1, Ft=1, Fn;
	for(int i=3; i<=n; i++)
	{
		Fn=Fo+Ft;
		Fo=Ft;
		Ft=Fn;
	}
	return Fn;
}

long int Fib(int n)
{
	if(n==1 || n==2) return 1;
	else return (Fib(n-1) + Fib(n-2));
}





int main()
{
	int n,
		start,
		end;

	
	cout << "Enter Number: ";
	cin >> n;
	start = clock();
	cout << FibNR(n);
	cout << endl;
	end = clock();
	cout << "Runtime: "<< (end - start)/CLK_TCK << endl; 
	
	start = clock();
	cout << Fib(n) << endl;
	cout << endl;
	end = clock();
	cout << "Runtime: "<< (end - start)/CLK_TCK << endl; 

	system("PAUSE");
	return 0;
}
