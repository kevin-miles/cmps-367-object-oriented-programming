/*
OBJECT ORIENTED PROGRAMMING(OOP)

class HOUSE
{
	private:
				int x,y;
	public:
				void Bob(int a, int b)
				{
					x=a;
					y=b;
				}
		
				//overload member bob
				void Bob()
				{
					cout << "Enter two numbers: ";
					cin >> x >> y;
				}
		
				void Mary()
				{
					cout << "x=" << x << " y=" << y << endl;
				}
				
				int John()
				{
					return x+y;
				}
};




int main()
{
	HOUSE P; //any variable of class type is called an object
	
	P.Bob(10, 20);
	
}

int main()
{
	HOUSE W, Z;
	W.Bob(); //enter two numbers: 3 6
	Z.Bob(10, 20);
}

ARRAY OF OBJECTS


House r[4];
//assign value to x and y of each object
int e, f;

for(int i=0; i<4; i++)
{
	cout << "Enter two numbers:";
	cin >> e >> f;
	r[i].Bob(e, f);
}


DISPLAY X AND Y OF EACH OBJECT
for(int i=0; i<4; i++)
{
	r[i].Mary();
}


CONSTRUCTOR
	1) IS A CLASS MEMBER
	2) HAS THE SAME NAME AS THE CLASS
	3) DOES NOT RETURN ANY VALUE AND THE LABEL IS NOT VOID
	4) IS CALLED BY THE COMPILER WHEN AN OBJECT IS CREATED
	
class HOUSE
{
	HOUSE()
	{	
		cout << "Enter two numbers:", cin >> x >> y; 
	}
}

int main()
{
	HOUSE P; //enter two numbers...5 10
	P.Mary(); //x=5 y=10
}


OVERLOAD THE CONSTRUCTOR

class HOUSE
{
	HOUSE()
	{	
		cout << "Enter two numbers:", cin >> x >> y; 
	}
	HOUSE(int a, int b)
	{
		x = a; y=b;
	}
}

int main()
{
	HOUSE P; //enter two numbers...5 10
	P.Mary(); //x=5 y=10
	HOUSE S(3,7);
	S.Mary(); //x=3 y=7
}


DESTRUCTOR

OCCUPYING MEMORY WITH SO MANY OBJECTS WILL FILL IT UP.
TO PREVENT THIS USE A DESTRUCTOR AT THE END OF EVERY PROGRAM.
	1. IS A CLASS MEMBER
	2. HAS THE SAME NAME AS CLASS BUT PRECEDED BY ~
	3. DOES NOT RETURN ANY VALUES AND THE LABEL IS NOT VOID
	4. IS CALLED BY THE COMPILER AT THE END OF THE MAIN() TO DESTROY IT(OR RELEASE) ALL MEMORY USED BY OBJECTS
		CREATED IN THE PROGRAM.
		
	NOTE: ONE DESTRUCTOR IS ENOUGH TO DO THE JOB

	~HOUSE(){}

	
	PROTOTYPING

class HOUSE
{
	private: int x, y;
	public: HOUSE();
			HOUSE(int a);
			HOUSE(int a, int b);
			void Mary();
			~HOUSE(){} //can leave destructor here
};

int main()
{}

HOUSE::HOUSE()
{	
	cout << "Enter two numbers:", cin >> x >> y; 
}
HOUSE::HOUSE(int a) { x=a; y=2*a;}
HOUSE::HOUSE(int a, int b)
{
	x = a; y=b;
}
void HOUSE:: Mary(){cout << "x=" << x << "y=" << y << endl;}
*/

/*
3 MAY 2013 OOP LECTURE

FRIEND FUNCTIONS
--------------

class HOUSE
{
	private: int x, y;
	public: HOUSE(){ x=0; y=0;};
			void Show() { cout << " x= " << x << " y= " << y << endl; }
			void assign(int n) { x = a; y = 2* a; }
			~HOUSE(){} //can leave destructor here
	friend void Show(TWO q){ cout << "x = " << q.x << " y= " << q.y << endl; }
};

int main()
{
HOUSE P;
P.Show(); //x = 0 y = 0
P.assign(5);
Show(P); //x = 0 y = 0
}
//destructor would be called twice since two objects are created (second created in Show(P) when q is used.
------------------------
//PROTOTYPES

class THREE
{
private: int x, y;
public: THREE();
		void Show();
		void assign(int n);
		~THREE(){}; //can leave destructor here
		friend void Show(TWO q);
}
THREE::THREE()
{
x=0; y=0;
}
THREE::Show()
{
cout << " x= " << x << " y= " << y << endl;
}
void THREE::assign(int a)
{
x = a; y = 2* a; 
}
void Show(Two q)
{
cout << "x = " << q.x << " y= " << q.y << endl;
}


class FOUR
{
private: int a[10];
public:
	void ReadData()
	{ 
		for(int i=0; i<10; i++)
		{
			cout << "Enter data: "; 
			cin >> a[i];
		}
		}
	void Display()
	{
		for(int i=0; i<10; i++)
		{
		cout << a[i] << "\t" << endl;
		}
	}
}

int main()
{
	FOUR P;
	P.ReadData();
	P.Display();
}

------------------
class FIVE
{
private: int a[10];
public:
	void ReadData(int x[])
	{ 
		for(int i=0; i<10; i++)
		{
			a[i] = x[i];
		}
		}
	void Display()
	{
		for(int i=0; i<10; i++)
		{
		cout << a[i] << "\t" << endl;
		}
	}
}

int main()
{
	FIVE P;
	int r[10]={1,2,3,4,5,6,7,8,9,10};
	P.ReadData(r);
	P.Display();
}
------------------

class SIX
{
private: int a[10];
public:
	void ReadData(string filename)
	{ 
	fstream f;
	f.open(filename, ios::in);
		for(int i=0; i<10; i++)
		{
			f >> a[i];
		}
	f.close();
	}
	void Display()
	{
		for(int i=0; i<10; i++)
		{
		cout << a[i] << "\t" << endl;
		}
	}
}

int main()
{
	FOUR P;
	int r[10]={1,2,3,4,5,6,7,8,9,10};
	P.ReadData(r);
	P.Display();
}

/******************************************
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class SIX
{
private: 
	int a[10];
public:
	void CopyData(string filename)
	{
		fstream f;
		f.open(filename, ios::in);
		for(int i=0; i<10; i++)
		{
			f >> a[i];
		}
		f.close();
	}
	void Display()
	{
		for(int i=0; i<10; i++)
		{
			cout << a[i] << "\t"; 
		}
		cout << endl;
	}
};


int main()
{
	SIX P;
	P.CopyData("data1.txt");
	P.Display();

	system("PAUSE");
	return 0;
}

*******************************************/
/*********************************
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

template <int n>
class SIX
{
private: 
	int a[n];
public:
	void CopyData(string filename)
	{
		fstream f;
		f.open(filename, ios::in);
		for(int i=0; i<n; i++)
		{
			f >> a[i];
		}
		f.close();
	}
	void Display()
	{
		for(int i=0; i<n; i++)
		{
			cout << a[i] << "\t"; 
		}
		cout << endl;
	}
};


int main()
{
	SIX<10> P;
	P.CopyData("data1.txt");
	P.Display();

	system("PAUSE");
	return 0;
}
****************************/


/*************************
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

template <class T, int n>
class SIX
{
private: 
	T a[n];
public:
	void CopyData(string filename)
	{
		fstream f;
		f.open(filename, ios::in);
		for(int i=0; i<n; i++)
		{
			f >> a[i];
		}
		f.close();
	}
	void Display()
	{
		for(int i=0; i<n; i++)
		{
			cout << a[i] << "\t"; 
		}
		cout << endl;
	}
};


int main()
{
	SIX<int, 10> P;
	P.CopyData("data1.txt");
	P.Display();

	SIX<string, 3> Q;
	Q.CopyData("data2.txt");
	Q.Display();

	system("PAUSE");
	return 0;
}
*************************/

/************************

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

template <int n>
class SIX
{
private: 
	struct RECORDS
	{
		string name;
		int age;
	};
	RECORDS a[n];
public:
	void CopyData(string filename)
	{
		fstream f;
		f.open(filename, ios::in);
		for(int i=0; i<n; i++)
		{
			f >> a[i].name >> a[i].age;
		}
		f.close();
	}
	void Display()
	{
		cout << "NAME\tAGE\n";
		cout << "------------" << endl;
		for(int i=0; i<n; i++)
		{
			cout << a[i].name << "\t" << a[i].age << endl;; 
		}
		cout << endl;
	}
};


int main()
{
	SIX<3> Q;
	Q.CopyData("data3.txt");
	Q.Display();

	system("PAUSE");
	return 0;
}

************************/