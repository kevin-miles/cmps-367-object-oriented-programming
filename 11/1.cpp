//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. 11 Part 1
//				Due Date		May 17, 2013
//				Professor		Ray Ahmadnia
//
// Purpose: This program overloads the +, *, and ++ operators to compute
// the sum, product and auto increment fractions. Two fractions are input
// by the user. The fractions are multiplied, added, and incremented using
// the overloaded operators.
//----------------------------------------------------------------------	
#include <iostream>

using namespace std;

class Fract
{
private: int n, d;
public: void ReadFract()
		{
			cout << "Enter a fraction:"; cin >> n; cin.ignore(); cin >> d;
		}
		void ShowFraction()
		{
			cout << n << "/" << d;
		}
		//overload + operator
		friend Fract operator+(Fract p, Fract q)
		{
			//find r=p+q
			Fract r;
			r.n = (p.d * q.n) + (p.n * q.d);
			r.d = (p.d * q.d);
			return r;
		}

		//overload the - operator using a class member
		Fract operator- (Fract q) //f1 is already passed
		{
			//r = f1-p = n/d - p.n/p.d
			Fract r;
			r.n = d * q.n - n * q.d;
			r.d = d * q.d;
			return r;
		}

		//overload the - operator using a class member
		friend Fract operator* (Fract p, Fract q)
		{
			//find r=p*q
			Fract r;
			r.n = (p.n * q.n);
			r.d = (p.d * q.d);
			return r;
		}

		//overload the - operator using a class member
		Fract operator++ (int)
		{
			Fract temp = *this; //create copy of original object

			Fract r;
			r.n = temp.n; //copy numerator
			r.d = temp.d; //copy denominator

			r.n = r.n + r.d; //add 1
			return r;
		}
};

int main()
{
	Fract f1, f2, f;
	f1.ReadFract();
	f2.ReadFract();

	f=f1 + f2;
	
	//display result
	f1.ShowFraction(); cout << " + "; f2.ShowFraction(); cout << " = "; f.ShowFraction();
	cout << endl;

	f=f1*f2;
	//display result
	f1.ShowFraction(); cout << " * "; f2.ShowFraction(); cout << " = "; f.ShowFraction();
	cout << endl;

	f=f1++;
	//display result
	f1.ShowFraction(); cout << "++ = "; f.ShowFraction();
	cout << endl;

	
	f=f2++;
	//display result
	f2.ShowFraction(); cout << "++ = "; f.ShowFraction();
	cout << endl;

	//terminate
	system("pause");
	return 0;
}
/*
Enter a fraction:4/3
Enter a fraction:2/7
4/3 + 2/7 = 34/21
4/3 * 2/7 = 8/21
4/3++ = 7/3
2/7++ = 9/7
Press any key to continue . . .
*/