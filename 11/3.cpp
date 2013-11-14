//----------------------------------------------------------------------
//				Name			Kevin Miles
//				Course			CMPS 367
//				Project			No. 11 Part 3
//				Due Date		May 17, 2013
//				Professor		Ray Ahmadnia
//
// Purpose: This program demonstrates the inheritance of classes. The program
//          creates an object from a class that inherits another class. The
//          program then demonstrates how functions inherited and functions 
//          that are class specific can be called from the main program.
//----------------------------------------------------------------------	
#include <iostream>
#include <string>

using namespace std;


struct TABLE
{
	string name;
	char grade;
};
TABLE P[5];

class myclass
{
		public: void ReadNames()
		{
			for(int i = 0; i < 5; i++)
			{
				cin>>P[i].name;
			}
		}
			void DisplayAll()
			{
				for( int i = 0; i < 5; i++)
				{
					cout<<P[i].name<<"\t"<<P[i].grade<<endl;
				}
			}
};

class CS301: public myclass
{
private: int score;
public : //compute each students grade in 4 exams
void Grade()
{	
	
	int total = 0;

	for(int i = 0; i < 5; i++)
	{
		cout << " enter 4 scores for " << P[i].name <<" :" << endl;
		total = 0; //reset total
		for(int j = 0; j < 4; j++)
		{

			cin>>score;
			total+= score;

		}

			if(total > 300)
			{
				P[i].grade = 'A';
			}
			else
			{
				P[i].grade = 'C';
			}
	}
}

};


class CS367 : public myclass
{
	private: int P1, P2;
	public: void Grade()
			{
				for(int i = 0; i < 5; i++)
				{
					cout<<"enter scores in 2 projects: ";
					cin>>P1>>P2;

					if(P1 + P2 > 150)
					{
						P[i].grade = 'A';
					}
					else
					{
						P[i].grade = 'C';
					}
				}
			}
};

int main()
{
	CS301 CMPS301;
	cout<<"enter 5 names taking cmps 301: ";
	CMPS301.ReadNames();
	CMPS301.Grade();
	CMPS301.DisplayAll();

	//terminate program
	system("pause");
	return 0;
}
/*
enter 5 names taking cmps 301: John Bob Sally Craig Chris
 enter 4 scores for John :
100 100 100 100
 enter 4 scores for Bob :
0 90 60 80
 enter 4 scores for Sally :
0 0 0 0
 enter 4 scores for Craig :
25 99 0 99
 enter 4 scores for Chris :
100 100 100 0
John    A
Bob     C
Sally   C
Craig   C
Chris   C
Press any key to continue . . .
*/