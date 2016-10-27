#include <iostream>
#include <string> 
#include <fstream> 
#include <climits>
#include <cctype>

using namespace std;

bool is_int(double);

bool is_int (double x)
{
	if (x <= INT_MAX && x >= INT_MIN)
		return true;
	else
		return false;
}

int main()
{
	cout << "Enter text for analysis, and type @ to terminate input.\n";
	
	char chc;
	int whitespace = 0;
	int digits = 0;
	int chars = 0;
	int punct = 0;
	int others = 0;
	
	cin.get(chc);
	while (chc!= '@')
	{
		if (isalpha(chc))
			chars++;
		else if (isspace(chc))
			whitespace++;
		else if (isdigit(chc))
			digits++;
		else if (ispunct(chc))
			punct++;
		else
			others++;
		cin.get(chc);
	}
	cout << chars << " letters, "
		 << whitespace << " whitespace, "
		 << digits << " digits, "
		 << punct << " punctuations, "
		 << others << " others.\n";
		 
	double num;
	cout << INT_MAX << endl ;
	cout << INT_MIN << endl ;
		
	cout << "Yo, dude! Enter an integer value: ";
	cin >> num;
	while (!is_int(num))
	{
		cout << "Out of range -- please try again: ";
		cin >> num;
	}
	int val = int (num);
	cout << "You've enterd the integer " << val << "\nBye\n";
	return 0;
	
	ofstream outFile;
	outFile.open ("fish.txt");
	outFile << "testand finish";
	outFile.close();
	
	ifstream inFile;
	inFile.open ("fish.txt");
	char file_1 [50];
	inFile >> file_1;
	cout << file_1 << endl;
	
	const char * qualify[4] =
	{
		"10,000-meter race.\n",
		"mud tug-of-war.\n",
		"masters cance jousting.\n",
		"pie-throwing festival.\n"
	};
	
	int age;
	cout << "Enter your age in years: ";
	cin >> age;
	int rindex;
	
	if (age > 17 && age < 35)
		rindex = 0;
	else if (age >= 35 && age < 50)
		rindex = 1;
	else if (age >= 50 && age < 65)	
		rindex = 2;
	else 
		rindex = 3;
	
	cout << "You qualify for the " << qualify[rindex];
		
	
	int arr[] = {8,2,1,0,3};
	int index[] = {2,0,3,2,4,0,1,3,2,3,3};
	int tel[100];
	int szindex = (sizeof index / sizeof index [0] );
	for (int i = 0 ; i < szindex; i++)
	{
		tel [i] = arr[index[i]];
	}
	for (int i = 0 ; i < 11 ; i++)
	{
		cout << tel [i];	
	}	
	system("pause"); 
	
	const int ArSize = 6;
	float naaq[ArSize];
	cout << "Enter the NAAQs (New Age Awareness Quotients) "
		 << "of\nyour neighbors. Program terminates "
		 << "when you make\n" << ArSize << " entries "
		 << "or enter a negative value.\n";
	int i =0;
	float temp;
	cout << "First value: ";
	cin >> temp;
	while (i < ArSize && temp >= 0)
	{
		naaq[i] = temp;
		++i;
		if (i < ArSize)
		{
			cout << "Next value: ";
			cin >> temp;
		} 
	}	
	if (i == 0)
		cout << "No data--bye\n";
	else
	{
		cout << "Enter your NAAQ: ";
		float you;
		cin >> you;
		int count = 0;
		for (int j = 0; j < i; j++)
			if (naaq[j] > you)
				++count;
		cout << count;
		cout << " of your neighbors have greater awareness of\n"
			 << "the New Age than you do.\n";
	}
	
	
	int nx;
	const int favor = 27;
	
	cout << "Enter a number in the range 1-100 to find ";
	cout << "my favorite number: ";
	do
	{
		cin >> nx;
		if (nx < favor)
			cout << "Too low -- guess again: ";
		else if (nx > favor)
			cout << "Too high -- guess again. ";
		else
			cout << favor << " is right!\n";
	} while (nx != favor);
	
	char chx;
	cout << "Type, and I shall repeat.\n";
	cin.get(chx);
	while (chx != '.')
	{
		if (chx == '\n')
			cout << chx;
		else
			cout << ++chx;
		cin.get(chx);
	}
	cout << "\nPlease excuse the slight confusion. \n";
	
	char ch;
	int spaces = 0;
	int total = 0;
	cin.get(ch);
	while (ch != '.')
	{
		if (ch == ' ')
			++spaces;
		++total;
		cin.get(ch);
	}
	cout << spaces << " spaces, " << total;
	cout << " characters total in sentence \n";
	return 0;
	
}


