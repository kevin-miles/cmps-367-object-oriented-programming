/* 

Find the big-oh estimate of:

for(int i=1; i<=n; i++)
{
cout << i;
}

//suppose it takes k milliseconds(ms) to execute the cout statement
Runtime = k + k + ... + k
		= n*k = k*n = O(n)
		//n is degree 1

------------------------------------------------------------------------------------------------

for(int i=10; i<=n; i++)
{
cout << n;
}
	 	
Runtime = k + k + ... k
= (n-10)*k
= k*n-10*k //n is degree 1
= O(n)

------------------------------------------------------------------------------------------------

for(int i=1; i<=n; i++)
{
	cout << i;		//k1 ms
	cout << i*i;	//k2 ms
	cout << i*i*i;	//k3 ms
}

Runtime: (k1 + k2 + k3) + (k1 + k2 + k3) + .. + (k1 + k2 + k3) //last one is i=n
= (k1 + k2 + k3)n
= kn //(k1 + k2 + k3) is represented by k
= O(n)

------------------------------------------------------------------------------------------------

for(int i=1; i<=n; i++)
{
	cout << i;
}
// O(n)

for(int j=1; j<=n; j++)
{
	cout << j;
}
// O(n)

Runtime: O(n) + O(n) = 
= O(max(n, n))
= O(n)

------------------------------------------------------------------------------------------------

for(int i=1; i<=n; i++) //O(n)
{
	
	for(int j=1; j<=n; j++) //O(n)
	{
		cout << i+j; 
	}
}

Runtime: O(n) * O(n) = 
= O(n*n)
= O(n^2)

------------------------------------------------------------------------------------------------

Recursive Fibonacci

	long int Fib(int n)
	{
		if((n==1) || (n==2)) { return 1; }
		else Fib(n-1) + Fib(n-2);
	}

	Runtime:

	cout << Fib(5); becomes (Fib(4) + Fib(3)) ... trace the rest too visually see chain.
	1 call > 2 calls > 4 calls(4=2^2) > 8 calls (8=2^3)...

	2^n power = (2^(n+1))-1 = (2^n)*(2^1)-1 = 2*2^n-1 = O(2^n)

------------------------------------------------------------------------------------------------

Non-Recursive Fibonacci
	
	long int FibNonRecursive(int n)
	{
		long int fib1=1,
				 fib2=1,
				 fibn;

		for(int i=3; i<=n; i++) //O(n)
		{
			fibn = fib1 + fib2;
			fib1 = fib2;
			fib2 = fibn;
		}
		return fibn;
	}
------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------