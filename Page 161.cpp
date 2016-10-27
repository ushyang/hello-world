#include <iostream>
#include <array>
#include <cstring>

/*
const int countCities = 5;
const int Years = 4;

int main()
{
	using namespace std;
	
	int row,it,jt;
	std::cout<<"please input the row to print:row=";
	std::cin>>row;
	for (it = 0;it < row;it++)
	{
		for (jt = 1;jt < row*2; jt++)
		{	
			if(it < row-jt)
			std::cout<<".";
			else if(jt-1 < row*2-jt)
			std::cout<<"*";
			else if(jt-it*2-1 < row*2-jt)
			std::cout<<"*";
			else
			std::cout<<".";
		}
	std::cout<<std::endl;
	}
	
	//page 164 q.10
	int numStar = 0;
	cout << "Pleases enter a number: " ;
	cin >> numStar;
	for (int i = 1; i-1 < numStar; i++)
	{
		for (int k = 0; k < numStar-i; k++)
		{
			cout << "." ;
		}
		for (int j = 1; j < i*2; j++)
		{
			cout << "*" ;
		}
		for (int k = 0; k < numStar-i; k++)
		{
			cout << "." ;
		}
		cout << endl;
	}
	
	system ("pause");
	
	//page 164 q.9
	int xnum = 0;
	string xwords;
	cout << "Enter words (to stop, type the word 'done'): ";
	cin >> xwords;
	while (xwords!="done")
	{
		if (bool(cin>>xwords) == true) //這題的關鍵在這裡 
		{
			xnum++;
		}
	}
	cout << xnum <<endl;
	system ("pause");
	
	//page 164 q.8
	int ArSize = 20;
	int num = 0;
	char words [ArSize];
	cout << "Enter words (to stop, type the word 'done'): ";
	cin >> words;
	while (strcmp(words, "done")!=0)
	{
		if (bool(cin>>words) == true) //這題的關鍵在這裡 
		{
			num++;
		}
	}
	cout << num <<endl;
	system ("pause");
	
	//page 164 q.7
	struct car {
		char maker [20];
		int yrMade;
	};
	
//	car * toyota = new car;
//	cin >> toyota ->maker;
//	toyota ->yrMade = 2005;
//	cout << toyota ->maker << " " << toyota ->yrMade <<endl;
//	
//	delete toyota;
	
	cout << "How many car do you want to record? ";
	int noCar;
	cin >>  noCar;
	
	car * cars = new car [noCar];//為什麼陣列下的元素不是用->來取值，我想應該是指針new的是car的陣列，陣列下的元素不是指針指的... 
	
	for (int i = 0; i < noCar; i++)
	{
		cout << "Car #" << i+1 << endl; 
		cout << "Please enter the maker: ";
		cin >> cars[i].maker;
		cout << "Please enter the year made: ";
		cin >> cars[i].yrMade;
	}
	
	cout << "Here is your collection:" << endl;
	for (int i =0; i < noCar; i++)
	cout << cars[i].yrMade << " " << cars[i].maker << endl;
	delete [] cars;
	//cout << cars[0].maker << " " << cars[0].yrMade << endl;
	
	//page 164 q.5
	char * volMonth [12] =
	{
		"Jan",
		"Feb",
		"Mar",
		"Apr",
		"May",
		"Jun",
		"Jul",
		"Aug",
		"Sep",
		"Oct",
		"Nov",
		"Dec"
	};
	
	//page 164 q.6
	int volThree [3][12];
	int sumVolYear = 0, sumVolThree = 0;
	for (int i = 0; i < 3; i++)
	{
		cout << "Year " << i + 1 << endl;
		for (int j = 0; j < 12; j++)
		{
			cout << volMonth[j] << " ";
			cin >> volThree [i][j];
			sumVolThree = sumVolThree + volThree [i][j];
			sumVolYear = sumVolYear + volThree [i][j];
		}
		cout << "Year " << sumVolYear << " volume is: " << sumVolYear << endl;
		cout << "Total volume is: " << sumVolThree << endl;
		sumVolYear = 0;
	}
	
	system("pause");
	
	int sumVol;
	int vol [12];
	for (int i = 0; i <12 ; i++)
	{
		cout << "Please enter volume of " << volMonth[i] <<": ";
		cin >> vol [i];
		sumVol = sumVol + vol [i];
	}
	cout << "Total volume for all year is: " << sumVol; 
	system("pause");
	
	//page 164 q.4
	double ivstDaphne=100, ivstCleo=100;
	int counterIvst = 0;
	while (ivstCleo <= ivstDaphne)
	{
		ivstCleo = ivstCleo *1.045;
		cout << ivstCleo << endl;
		ivstDaphne += 100 *0.1;
		cout << ivstDaphne << endl;
		counterIvst ++;
		cout << counterIvst << endl;
	}
	cout << counterIvst << " years later Cleo will excess than Daphne" << endl;
	cout << "Cleo: " << ivstCleo << " Daphne: " << ivstDaphne << endl;
	system("pause");
	
	//page 163 q.3
	int input, sumInput;
	while (input !=0)
	{
		cout << "Please enter a number: ";
		cin >> input;
		sumInput +=input;
		cout << "The sum of your input is: " << sumInput << endl;
	}
	cout << "Program exit." ;
	
	system("pause");
	
	//page 163 q.2
	int facSize = 100;
	//long double factorials[facSize];
	array <long double,100> factorials;
	factorials [0] = factorials [1] = 1;
	for (int i = 2; i < facSize; i++)
		factorials [i] = i * factorials [i-1];
	for (int i = 0; i < facSize; i++)
		cout << i << "! = " << factorials [i] << endl;
	
	//page 163 q.1
	int sumStart, sumEnd, sumTotal;
	cout << "Please enter a number for begin: ";
	cin >> sumStart;
	cout << "Please enter a number for end: ";
	cin >> sumEnd;
	for (int i = sumStart; i <= sumEnd; i++)
	{
		//cout << i << endl;
		sumTotal +=i;
	}
	cout << "Sum of two number integer is: " << sumTotal << endl;
	
	int x ;
	x = 1,024;
	printf ("x=%d\n",x);
	
	int nsqr = 1;
	for (nsqr = 1; nsqr < 65; nsqr = nsqr * 2)
		cout << nsqr <<endl;
	
	int K = 8;
	do
	{
		cout << "K= " << K << endl;
		//K--;
	}while (K-- > 5);
	
	int i;
	for (; i < 11;i+=3)
		cout << i << endl;
	cout << i << endl;
	
	int j = 5;
	while ( j++ < 9)
		cout << j++ << endl;
	cout << j << endl;
	
	const char * Cities[countCities] =
	{
		"Gribble City",
		"Gribbletown",
		"New Gribble",
		"San Gribble",
		"Gribble Vista"
	};
	
	int maxtemps [Years] [countCities] =
	{
		{96, 100, 97, 101, 105},
		{96, 98, 91, 107, 104},
		{97, 101, 93, 108, 107},
		{98, 103, 95, 109, 108}
		
	};
	
	cout << "Maximum temperature for 2008 - 2011\n\n";
	for (int city = 0; city < countCities; ++city)
	{
		cout << Cities[city] << ":\t";
		for (int year = 0; year < Years; ++year)
			cout << maxtemps [year][city] << "\t";
		cout << endl;
	}
	return 0;
}
*/
