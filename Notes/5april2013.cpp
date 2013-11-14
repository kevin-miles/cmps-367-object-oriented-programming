/*

ARRAYS

CREATING TEXT FILES

MULTIDIMENSIONAL ARRAYS

ARRAY OF STRINGS <cstring>




ARRAYS

	int[6] = {2,5}
	the rest of the locations are initialized as 0 since they are not declared


	DYNAMIC ARRAYS

		int n;
		int *a; //tells the compiler that a is an address
		cout << "Enter the array size:";
		cin >> n;
		a = new int[n];

		//gather input
		for(int i=0; i<n; i++)
		{
			cout << "Enter a number: ";
			cin >> a[i];
		}

		//output array
		for(int i=0; i<4; i++)
		{

			cout << a[i] << endl;

		}

		gives output....
		Enter the array size:4
		Enter a number: 1
		Enter a number: 2
		Enter a number: 3
		Enter a number: 4
		1
		2
		3
		4
		Press any key to continue . . .


CREATING TEXT FILES

	//copy data from text file
	int Age[20];
	float Gpa[20];
	string Name[20]'

	//open the files
	#include <fstream>
	fstream f;
	f.open("data.txt", ios::in); //in to read, out to write, app to append

	//assume there are 5 records
	for(int i=0; i<5; i++)
	{
		f >> Age[i] >> Gpa[i] >> Name[i];
	}

	f.close(); // close file

	//display all records
	void DisplayAll(int A[], float G[], string N[])
	{
		for(int i=0; i<5; i++)
		{
			cout << A[i] << " " << G[i] << " " << N[i] << endl;
		}
	}



	**************************************************************
							EXAMPLE PROGRAM
	**************************************************************
	#include <iomanip>
	#include <iostream>
	#include <fstream>
	#include <string>

	using namespace std;
	const int n=4;
	//display all records
	void DisplayAll(int A[], float G[], string N[], int n);
	void CopyData(string filename, int Age[], float Gpa[], string Name[], int& n);


	int main()
	{
		int m=0;
		int			Age[n];
		float		Gpa[n];
		string		Name[n];

		CopyData("data.txt", Age, Gpa, Name, m);
		DisplayAll(Age,Gpa,Name, n);

		//terminate program
		system("PAUSE");
		return 0;
	}

	void CopyData(string filename, int Age[], float Gpa[], string Name[], int& max)
	{
		fstream f;
		f.open("data.txt", ios::in); //in to read, out to write, app to append

		max=0;
		while(true)
		{
			f >> Age[max] >> Gpa[max] >> Name[max]; 
			if(f.fail()){ break; }
			max++;
		}
	
		//assume there are 5 records
		//for(int i=0; i<=n-1; i++) { f >> Age[i] >> Gpa[i] >> Name[i]; }
	
		f.close(); // close file
	}

	void DisplayAll(int A[], float G[], string N[], int n)
	{
		for(int i=0; i<=n-1; i++)	{ cout << A[i] << " " << G[i] << " " << N[i] << endl; }
	}
	**************************************************************
	**************************************************************




SORTING ARRAYS


	int a[5] = {9,2,8,1,6};

	//sort array a
	//predefined function member of <algorithm>
	sort(a, a+5); //array, array+size
	//display sorted array
	for(int i=0; i<5; i++){	cout << a[i] << '\t'; //outputs: 1	2	6	8	9


ONE DIMENSIONAL ARRAYS

				S		M		L		XL

				10		5		15		7

		int a[4]={10,5,15,7};

TWO DIMENSIONAL ARRAYS

				S		M		L		XL
					
	RED			3		2		1		5	

	GREEN		1		2		3		4

	BLUE		8		7		6		5

			int a[#of rows][# of columns];
			int a[3][4];

			cout<<a[1][2]; 3

			TotalAll(a, total);

			void TotalAll(int x[][4], int& total)//you have to define the amount of columns, but not the amount of rows
			{
				//output contents of two dimensional array
				for(int row=0; i<=4; row++)
				{
					for(int col=0; col<=4; col++)
					{
						t += a[row][col];
					}
				}
			}

THREE DIMENSIONAL ARRAYS

				S		M		L		XL

	RED			3		2		1		5	

	GREEN		1		2		3		4

	BLUE		8		7		6		5
			   

	//too lazy to draw the third dimension. visualize a cube broken into smaller cubes.

	int a[3][4][2]; //row, column, slices(third dimension)
	int a[3][4][2] = {1,2,3,4,5..24}; //multiply numbers to calculate total amount of inputs


	TotalInv(a, totalall);
	void TotalInv(int x[][4][2], int& t)
	{
		t=0;

		for(int color=0; color<3; color++)
		{
			for(int size=0; size<4; size++)
			{
				for(int fabric=0; fabric<2; fabric++)
				{
					t+=x[color][size][fabric];
				}
			}
		}
	}

MEMBERS OF <cstring>

	string days[5] = {"MON", "TUE", "WED", "THU", "FRI"};
	cout << days[0]; //outputs MON
	cout << days[0][0]; //outputs M

	TO USE MEMBERS OF <cstring>
	1) #include <cstring>
	2) char days[5][4] = {"MON", "TUE", "WED", "THU", "FRI"};	//each word follows with a \0 for the compiler.
																//this is why we set [4] ( M + O + N + \0)

	FIND LENGTH OF "MON"

		int n=strlen(days[0]);
		cout << n; //3

	CONVERT TO UPPERCASE
		
		strupr(days[0]); 
		cout << days[0]; // MON

	CONVERT ALL DAYS TO LOWERCASE 
		
		for(int i=0; i<5; i++)
		{
			strlwr(days[i]);
		}
		// mon tue wed ...

	CONVERT "mon" to Mon
		
		//member of <cctype>, not <cstring>
		days[0][0]=toupper(days[0][0]);
		cout << days[0]; // Mon

	REPLACE "Thr" with TR
		
		days[3]="TR"; //DO NOT USE THIS IT DOES NOT WORK
		//will get error
		
		strcpy(days[3], "TR"); //takes "TR" and places it into days[0]

	IF days[2] is "WED" display "GOODNIGHT"

		if(days[2]=="WED"){ cout << "GOODNIGHT"; } //DO NOT USE THIS DOES NOT WORK
		//will get error
		//cannot do comparison with strings

		if(strcmp(days[2], "WED")==0) { cout << "GOODNIGHT"; }