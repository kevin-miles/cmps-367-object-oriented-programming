/*
Predefined Functions
	<cmath>, <iomanip>, <string>, <cctype>

User defined functions
	- pass by reference
	- pass by value
	- pass by return
	- overloading functions
	- template functions
	- recursive functions



FIND MAX/MIN:
	if(a > b && a > c)	max = a;
	else if ( b > c)	max = b;
	else				max = c;

	if(a < b && a < c)	min = a;
	else if ( b < c)	min = b;
	else				min = c;





?: OPERATORS
	if (a > b)
		max = a;
	else
		max = b;

		IS

	max = ((a > b) ? a : b);
	------------------------
	if (a > b)
		cout << a;
	else
		cout << b;

		IS

	cout << ((a > b) ? a : b);
	---------------------------- 

	((a > b) ? cout << a : cout << b);

	-----------------------------------

	if(a > b && a > c)	max = a;
	else if ( b > c)	max = b;
	else				max = c;

	IS

	max = ((a > b && a > c) ? a : (( b > c) ? b : c));

	x=4 y=10
	y=11 z=8
	23


OVERLOADING FUNCTIONS
	It is possible to have a group of functions with the same name in one program.

	f(x,y,z);	g(int x, int y);
	f(x,y);		g(string x, string y);

	void Display(int a, int b)
	{
		cout << a << '\t' << b;
	}

	void Display(string a, string b)
	{
		cout << a << '\t' << b;
	}

	void Display(string a, int b, string z)
	{
		cout << a << '\t' << b << '\t' << c;
	}




	int main()
	{
		Display(5,6);
		Display("Five", "Six");
		Display("Five", 6, "Seven");
	}


TEMPLATE FUNCTIONS
	If you have a group of overloaded functions with the SAME NUMBER OF ARGUMENTS 
	you can replace them with only one template function.


	
	void Display(int a, int b)
	{
		cout << a << '\t' << b;
	}

	void Display(string a, string b)
	{
		cout << a << '\t' << b;
	}

	

	int main()
	{
		Display(4, 5);
		Display("Four", "Five");
	}

	---------------
	template <class T>
	void Display(T a,T b)
	{
		cout << a << '\t' << b << endl;
	}

	---------------
	
	int main()
	{
		Display(5, 6); //T is int
		Display("Five", "Six"); //T is string
	}

	----------------

	int main()
	{
		Display(5, 6); //T1 & T2 are int
		Display( 5, "Six"); //T1 is int T2 is string
		Display("Five", 6); //T1 is string T2 is int
		Display("Tom", "Jerry"); //T1 & T2 are string
	}

	template <class T1, class T2>
	void Display(T1 a,T2 b)
	{
		cout << a << '\t' << b << endl;
	}

	-----------------

	int main()
	{
		show(5,6);
		show("Five", 3);
		show('5', 7);
	}

	template <class G>
	void show(G a, int b)
	{
		...
	}

	----------------
	//can template because number of arguments are the same

	int main()
	{
		int age1, age2;
		string name1, name2;

		cout << "Enter two ages: ";

		ReadData(age1, age2);

		cout << "Enter two names: ";
			
		ReadData(name1, name2);

		cout << "These are the names you just entered \n";
		Display(name1, name2);

		cout << "These are the ages of the above people\n";
		Display(age1, age2);
	}

	template <class T>
	void ReadData(T& a, T& b)
	{
		cin >> a >> b;
	}

	template <class G>
	void Display(G a, G b)
	{
		cout << a << '\t' << b << endl;
	}
*/