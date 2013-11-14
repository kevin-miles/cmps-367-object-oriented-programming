/*

Loop structures
Predefined functions

1.) For Loop
	
	for(int i=5; i<=50; i++)
	{
		total += i;
		cout << i << "+";
	}
	cout << "\b =" << total;


	for(int total=0, i=5; i<=5; i+=5)
	{
		total += i;
	}

OR
	
	int total=0,
		i=5;
	for( ; i<=5; i+=5)
	{
		total += i;
	}	

	
OR

	int total=0,
		i=5;
	for( ; ; i+=5)
	{
		if( i > 50 ){break;}
		total += i;
	}

OR

	int total=0, i=5;
	for( ; ; )
	{
		if(i > 50){ break; }
		total += i;
		i += 5;
	}

OR
	
	//ensure order of total+i and i+=5 is correct otherwise
	//result will change 
	for(int total=0, i=5; i<=50; total+i, i+=5);


EXAMPLE:
	cout << "Enter 5 scores: ";
	int total = 0;
	for(int i=1; i<=5; i++)
	{
		cin >> score;		//read number
		total += score;		//add to total
	} 
	cout << total / 5;

OUTPUT:
	# Enter 5 Scores: 20 30 15 18 80



EXAMPLE:
	//display acscii table
	for(int i=1; i<=255; i++)
	{
		cout << i << "\t" << char(i) << endl;
	}
	
	//65 is the code for A
	//97 is the code for a
	//difference between uppercase and lowercase is 32

	cout << "F" << char(degree ascii code here) << "\t\t" << "C" << char(degree ascii code here) << endl;

	for(int i=0; i<=14; i++) { cout << char(ascii code for line here); }		//print line for menu
	cout << endl;
	for(int f=10; f<=100; f+=10;)
	{
		cout << f << "\t\t" << ((5*(f-32))/9) << endl;
	}
OUTPUT:
	F       C
-------------------
	10		xx
	20		xx
	30		xx
	..		..
	100		xx




EXAMPLE(nested for loop):
for(int i=1; i<=5; i++)
{
	for(int i=1; i<=5; i++)
	{
		cout << '*';
	}
	cout << endl;
}

OUTPUT:
*****
*****
*****
*****
*****

TRACE IT:

j		j<=5		i		i<=5		output
-----------------------------------------------------
1		1<=5		1		1<=5		*****
					2		2<=5		
					3		3<=5
					4		4<=5	
					5		5<=5

2		2<=5		1		1<=5		*****
					2		2<=5		
					3		3<=5
					4		4<=5
					5		5<=5

..		..			..		..			..

5		5<=5		..		..			..





	 1
	21
   321
  4321
 54321

for(j=1; j<=5; j++)
{
	for(i=1; k <= 6-j; k++)
	{
		cout << " "; 
	}
	for(i=1; i<=j; i++)
	{
		cout << i;
	}
}

OR

for(j=1; j<=5; j++)
{
	cout << setw(7-j);
	for(int i=1; i<=j; i++)
	{
		cout << i;
	}
	cout << endl;
}


2.) While Loops

	while(this is true)
	{
		do this
	}

EXAMPLE:
	Read 5 votes and determine the number of Yes and No vote
cout << "Enter 5 votes: ";
int yes =0, no=0;
char vote;
for(int i=0; i<=5; i++)
{
cin >> vote;
switch(vote)
{
case 'y': case 'Y':
	yes++;
	break;
case 'n': case 'N':
	no++
	break;
}




EXAMPLE:
	Read a group of votes and count the number of Y and N

cout << "Enter a group of votes:";

cin.get(vote);

while(vote != '\n')
{
	switch(vote)
	{
	case 'y': case 'Y':
		yes++;
		break;
	case 'n': case 'N':
		no++;
		break;
	}
	cin.get(vote);
}



EXAMPLE:
	Read a sentence and coun the uppercase and vowel letters

	int upper, vowel, count;

	cout << "Enter a sentence: ";
	cin.get(c);
	while( c != '\n')
	{
		if(c >= 'A' & c <= 'Z')
		{
			upper++;
		}
		switch(c)
		{
		case 'a': case 'A': 
		case 'e': case 'E':
		case 'i': case 'I':
		case 'o': case 'O':
		case 'u': case 'U':
			vowel++;
			break;
		}

		cin.get(c);
	}







3.) Do While Loop (Interactive problems)

do 
{
	cout << char(3);
	cout << "more (y/n)?";
	cin >> ans;
}
while(ans=='y'||ans=='Y');





*/