<string>
	char FullName;
	cout << "Enter your full name:";
	getline(cin, FullName);
	int n=FullName.length();

<cstring>
	char FullName[20];
	cout << "Enter your full name:";
	getline(FullName, 19, '\n');
	
	strupr(FullName);
	int n=strlen(FullName);

	strlwr(FullName);
		
	//convert j to J
	FullName[0] = toupper(FullName[0]);



	// If taking input and the case will not be guaranteed use an array of characters:
	/*
	char gender[10]
	cout << "Enter gender:";
	cin >> gender;
	strupr(gender);
	DO NOT USE gender=="", etc.
	use:
	if(strcmp(gender,"MALE") >=0) will return 0 if they are the same??

	gender="FEMALE"; DO NOT USE
	use:
	strcpy(gender, "FEMALE");
 
	//
	----------------------------------

