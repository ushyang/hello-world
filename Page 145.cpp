#include <iostream>
#include <ctime>

using namespace std;
/*
const int ArSize = 20;

int main()
{
	cout << cin.eof() ; // 有無eof字符 ，此時無偵測到 
	char chy;
	int county = 0;
	cin.get(chy);
	
	while (cin.fail() == false) //也可使用cin.eof() != 1 
	{
		cout << chy;
		++county;
		cin.get(chy);
	}
	cout << cin.eof() ; //此時已偵測到有eof ^Z 字符 
	cin.clear(); //此時cin流已經處於無效狀態了，如果下文要繼續使用cin需要加語句cin.clear()，使流處於有效狀態。 
	cout << endl << county << " characters read\n";

	
	int no1;
	cout << "Please input a number: " ;
	do
	{
		cin >> no1;
		cout << "no exit!";
	} while (no1!=0);
	
	cout << "\nexit~\n";
	

	char chx;
	int countx = 0;
	cout << "Enter characters; enter # to quit:\n";
	cin.get(chx);
	while (chx != '#')
	{
		cout << chx;
		++countx;
		cin.get(chx);
	}
	cout << endl << cout << "characters read\n"; 

	
	char chb,chc;
	cin >> chb;
	cin >> chc;
	cout << chb << chc << endl;
	return 0;
	
	
	char cha;
	int count = 0;
	cout << "Enter characters; enter # to quit:\n";
	cin >> cha;
	while (cha != '#')
	{
		cout << cha;
		++count;
		cin >> cha;
	}
	cout << endl << count << " characters read\n";
	
	double prices[5] = {4, 10, 6, 8, 7};
	for (double x : prices)
		cout << x << endl;
	
	int n;
	cout << "Enter numbers in the range 1-10 to find ";
	cout << "my favorite number\n";
	do
	{
		cin >> n;
	}while (n!=7);
	
	cout << "yes, 7 is my favorite. \n";
	return 0;
	 
	//cout << clock() << endl ; 
	cout << "Enter the delay time, in seconds: ";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;
	cout << delay << endl;
	cout << "starting\a\n";
	clock_t start = clock();
	cout << start << endl;
	while(clock() - start < delay)
	cout << clock() << " " << start << " " << delay << endl; 
	;
	cout << "done \a\n"; 
	
	char name[ArSize];
	cout << "Your first name, please: ";
	cin >> name;
	cout << "Here is your name, verticalized and ASCIIized:\n";
	int i = 0;
	while (name[i] != '\0')
	{
		cout << name[i] << ": " << int(name[i]) << endl;
		i++;
	}
		
	return 0;
}
*/

