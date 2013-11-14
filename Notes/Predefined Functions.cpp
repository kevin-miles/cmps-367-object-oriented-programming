/*

Functions

1.) Predefined Functions
	- Members of
		<cmath>
		<string>
		<cctype>



<cmath>
	member				meaning				
	----------------------------------------------------
	pow(x,y)			x^y					EXAMPLE: pow(x, float(y))
	sqrt(x)				square root of x	
	fabs(x)				|x|
	exp(x)				e^x
	log(x)				ln(x)
	log10(x)			log(x)
	ceil(x)				x = smallest int >=  //cant write symbol for ceiling around x
	floor(x)			x = largest int <= x //cant write symbol for floor around x


<string>
	string st="Univ of LaVerne";

	 0  1  2  3  4  5  6  7  8  9 10 11 12 13 14  15
	[U][n][i][v][ ][o][f][ ][L][a][v][e][r][n][e][\0](this last part added by the compiler)

	cout << st;					//output: Univ of LaVerne
	
	cout << st[3];				//output: v

	int n = st.find('n');		//will find first n in the string
	cout << n;					//output: 1

	int m = st.find('n', n+1);	//find first n starting at n+1 (2)
	cout << m;					//output: 13

	//find index of letter 'x'
		int p = st.find('x');				//find first x starting at beginning of string
		cout << p;							//output: -1
		**** Will output -1 if character not found ****

	//find index of word 'of'
		int q = st.find("of");				//find first substring "of" starting at beginning of string
		cout << q;							//output: 5
		**** Will output -1 if substring not found ****

	//find the length of st
		int len = st.length();				//output: 15 (16th part not counted, spaces count)

	//copy substring of st into a variable
		string city = st.substr(8,7);	//8 is the index to start at, 7 is the # of characters

	//erase Univ from st
		st.erase(0,4);						//0 is the index to start at, 4 is number of characters
		cout << st;							//output: of LaVerne

	//Insert university at the beginning of 
		st.insert(0,"University");			//0 is the index to start at, then the string to insert
		cout << st;							//output: University of LaVerne


	EXAMPLE:
		A phone number consists of 3 parts: Area code-Prefix Digits-Last Digits (714-45678-123456)
		We only know the area code has three digits. The prefix and last digits have a total amount unknown.

		string phone="714-45678-123456";

		//display the area code
		string areacode = phone.substr(0,3);	//start at 0, copy three characters
		cout << "Area Code is: " << areacode << endl;

		//display the prefix digits
		//find index of 1st dash
		int n = phone.find('-');				//find first - (n=3)
		int m = phone.find('-', n+1);			//find dash starting at n+1(location of first dash + 1) - m=9
		string prefix = phone.substr(n+1, m-n-1);
		cout << prefix;							//output: 45678
		
		//display the last digits	
		int length = phone.length();					//find length of phone number
		string last = phone.substr(m+1, length-m-1);	//start at m+1(second -, one letter after) and take # of characters
		cout << last;									//output: 123456


	EXAMPLE:
		A full name consists of 2 or 3 words (firstname lastname or firstname middlename lastname)
		Display only the last name.

		input John Smith 
		or
		input Bob John Smith


		string fullname, lastname;
		int length=fullname.length();

		cout << "Enter your full name: ";
		getline(cin, fullname);						//take input 

		int space1 = fullname.find(' ');			//find index of first space
		int space2 = fullname.find(' ', space1+1);	//find index of space2 starting at space1 + 1

		if(space2 == -1)
		{
			//full name consists of 2 words
			lastname = fullname.substr(space1+1, length-space1-1);
		}
		else
		{
			lastname = fullname.substr(space2+1, length-space2-1);
		}




<cctype>
	members of <cctype> ( you can apply members of this library to single characters )
	
	//determine if c='A'..'Z'
		char c;
		if(c >='A' && c <='Z')	//returns true if character is uppercase
		
		OR

		if(isupper(c))			//returns true if character is uppercase

	//determine if c='a'..'z'
		if(c >='a' && c <='z')

		OR

		if(islower(c)			//returns true if character is lowercase

	//determine if c='A'..'Z' or c='a'..'z'
		if((c >='A' && c <='Z') || (c >='a' && c <='z'))

		OR

		if(isalpha(c))			//returns true if character is part of the alphabet

	//determine if c='0'..'9'
		if(c>='0' && c<='9')
		
		OR

		if(isdigit(c))			//returns true if character is a digit

	//determine if c is uppercase, lowercase, or digit
		if((c >='A' && c <='Z') || (c >='a' && c <='z') || (c>='0' && c<='9'))

		OR

		if(isalnum(c))		//returns true if character is uppercase lowercase or digit

	//determine if c is a space
		if(c==' ')

		OR

		if(isspace(c))		//returns true if character is space

	//cover to uppercase and lowercase

		c = toupper(c); //returns ascii code, so assign to variable
		c = tolower(c);

		EX:
			do{
				...
				cout << "Continue (y/n)?";
				cin >> answer;
				answer = toupper(answer);
				}
			while( answer == 'Y' );

	EXAMPLE:
		Read a sentence and count the number of digits and vowels.

		int digits=0,
			vowels=0;

		char c;

		cout << "Enter a sentence: "; //Input: Today is Feb 22

		cin.get(c); //read first character
		while(c != '\n')
		{
			if(isdigit(c)){ digit++; }		//increment digit if true
			if(isvowel(c)){ vowel++; }		//increment vowel if true we will create this function ourselves. it is not in cctype
			cin.get(c);						//read next character
		}

		//THIS IS HOW TO CREATE THE FUNCTION TO CHECK IF IT IS A VOWEL
		bool isvowel(char x)
		{
			x = toupper(x);

			if(x=='A' || x=='E' || x=='I' || x=='O' || x=='U') { return true; }
			else { return false; }
			//you could use a switch statement here as well
		]
*/