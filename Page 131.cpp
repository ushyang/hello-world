#include <iostream>
#include <cstring> 

using namespace std;
/*

const int ArSize = 5;


int main()
{
	
	char ch_1[5];
	char ch_2[5];
	cout << "enter a string: ";
	cin >> ch_1;
	cout << "enter another string: ";
	cin >> ch_2;
	int ch_result = strcmp(ch_1,ch_2);
	
	if (ch_result == 0)
	cout << "two string is same"<< endl;
	else
	cout << "two string different"<< endl;
	
	string ch_3, ch_4;
	cout << "enter a string: ";
	cin >> ch_3;
	cout << "enter another string: ";
	cin >> ch_4;
	if (ch_3 == ch_4)
	cout << "two string is same"<< endl;
	else
	cout << "two string are different"<< endl;
	
	
	long long factorials[ArSize];
	factorials[1] = factorials [0] = 1LL;
	for (int i =2; i < ArSize; i++){
		factorials[i] = i * factorials [i-1];
	}
	for (int i =0; i < ArSize; i++){
		cout << i << "! = " << factorials[i] << endl;
	}
		
	cout << "enter a word: ";
	string revWord;
	cin >> revWord;
	
	for (int i=revWord.size() -1 ; i >= 0 ; i-- )
		cout << revWord [i];
	
	cout << "\nBye.\n";
	
	cout << "Enter a word: ";
	string word;
	cin >> word;
	char temp;
	int i, j;
	for (j = 0, i = word.size() - 1; j < i; --i, ++j ){
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	cout << word << "\nDone\n"; 
	
	int guests =0;
	while (++guests <10)
		cout << guests << endl;
	
	int x;
	cout << "enter: ";
	for (cin >> x; x !=0; cin >> x)
	{
		cout << "you enter " << x << endl;
	}
	
	char word_1[5] = "?ate";
	for (char ch = 'a'; strcmp(word_1, "mate"); ch++)
	{
		cout << word_1 << endl;
		word_1[0] = ch;
	}
	cout << "After loop ends, word is " << word_1 << endl; 
	
	return 0;
	
}

*/
