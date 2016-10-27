#include <iostream>
#include <cstring> 
using namespace std;

/* 

char * getname(void);

char * getname()
{
	char temp[80];
	cout << "Enter last name: ";
	cin >> temp;
	char * pn = new char [strlen(temp)+1];
	strcpy(pn, temp);
	return pn;
}

struct antarctica_years_end
{
	int year;
};

struct inflatable
{
	char name[20];
	float volume;
	double price; 
};

void Exchg1(int x, int y)
{
	int tmp;
	tmp=x;
	x=y;
	y=tmp;
	cout << "x = " << x << " y = " << y <<endl;
	printf("x=%d,y=%d.\n",x,y); 
 }
 
 void Exchg2(int *px, int *py)
{
   int tmp = *px;
   *px = *py;
   *py = tmp;
   printf("*px = %d, *py = %d.\n", *px, *py);
}

void Exchg3(int &x, int &y)
{
	int tmp = x;
	x = y;
	y = tmp;
	printf("x = %d, y = %d.\n", x,y);
}
  
 main()
 {

	int test_a = 10;
	int *test_apt = &test_a;
	cout <<"pointer: "<<test_apt << endl; 

 	int i1 = 30;
 	int i2 = 40;
 	int *pi = &i1; 
 
 	cout <<pi<<  endl;
 	
	int a =4, b=6;
	cout << "a = " << a << " b = " << b <<endl;
	Exchg1(a,b);
	printf("a=%d,b=%d\n",a,b);
	//by value,原本的變數值不變  
	
	Exchg2(&a,&b);
	printf("a=%d,b=%d\n",a,b);
	
	Exchg3(a,b);
	printf("a =%d, b =%d.\n" ,a,b);

	inflatable * ps = new inflatable;
	cout << "Enter name of inflatable item: ";
	cin.get(ps ->name, 20);
	cout << "Enter volume in cubic feet: ";
	cin >> (*ps).volume;
	cout << "Enter price: $";
	cin >> ps->price;
	cout << "Name: " << (*ps).name << endl;
	cout << "Volume: " << ps ->volume << " cubic feet \n";
	cout << "Price: $" << ps ->price << endl;
	// &取址運算元 *取值運算元 .取成員運算元 ->取指針結構的成員 
	delete ps; 
	
	char * name;
	name = getname();
	cout << name << " at " << (int *) name << "\n";
	delete [] name;
	
	name = getname();
	cout << name << " at " << (int *) name << "\n";
	//(int*)a將指標變數a強制轉換為整型指標，說明a一般不是一個整型指標，也可以是個整型指標。int*a，定義一個整型指標變數a
	delete [] name;
	
	antarctica_years_end s01,s02,s03;
	s01.year = 1998;
	antarctica_years_end * pa = &s02;
	pa->year = 1999;
	antarctica_years_end trio[3];
	trio[0].year = 2003;
	cout << trio-> year << endl;
	const antarctica_years_end * arp[3] = {&s01,&s02,&s03};
	cout << arp[1]->year << endl;
	const antarctica_years_end ** ppa = arp;
	//const antarctica_years_end ** ppb = arp; // auto ppb = arp 好像不能用, 此為C++11標準，需加入-std=c++11在編譯指令中 
	auto ppb = arp;
	cout << (*ppa)->year << endl;
	cout << (*(ppb+1))->year << endl;

	return (0);
 } 
 
 */
