#include <iostream>

/*
struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	using namespace std;
	
	int nights = 1001;
	int * ppt = new int;
	*ppt = 1001;
	
	cout << "night value = ";
	cout << nights << ": location " << &nights << endl;
	cout << "int ";
	cout << "value = " << *ppt << " : loccation = " << ppt << endl;
	double * pd = new double;
	*pd = 10000001.0;
	
	cout << "double ";
	cout << "value = " << *pd << " : location = " << pd << endl;
	cout << "location of pointer pd: " << &pd << endl; //pointer本身的位址 
	cout << "size of ppt = " << sizeof(ppt);
	cout << ": size of *ppt = " << sizeof (*ppt) << endl;
	cout << "size of pd = " << sizeof pd;
	cout << ": size of *pd = " << sizeof (*pd) << endl;
	
	
	int higgens = 5;
	int *pt = &higgens;
	// higgens = higgens +1; 跑计1 
	// *pt = *pt +1; 皐跑计1 
	// pt琌&跑计琌 
	// pt = pt +1; 1 4bytes钩琌ぃ絋﹚ 
	
	cout << "value of higgens = " << higgens
		<< " ; Address of higgens = " << &higgens << endl;
	cout << "value of *pt = " << *pt
		<< " ; Address of pt = " << pt << endl << endl;	
	
	int updates = 6;
	int *p_updates;
	p_updates = &updates;
	
	cout << "Values: updates = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;
	
	cout << "Addresses: &updates = "<< &updates;
	cout << ", p_updates =  " << p_updates << endl;
	
	*p_updates = *p_updates +1;
	cout << "Now updates = " << updates << endl;
	
	int donuts = 6;
	int cookie = 2;
	double cups = 4.5;
	double bottle = 8.5;
	
	cout << "donuts value = " << donuts << " how many bytes: " << sizeof (donuts);
	cout << " and donuts address = " << &donuts << endl;
	cout << "cookie value = " << cookie << " how many bytes: " << sizeof (cookie);
	cout << " and cookie address = " << &cookie << endl;
	cout << "cups value = " << cups << " how many bytes: " << sizeof (cups);
	cout << " and cup address = " << &cups << endl; 
	cout << "bottle value = " << bottle << " how many bytes: " << sizeof (bottle);
	cout << " and bottle address = " << &bottle << endl;
//add watch  * ㄤい 
	
	inflatable bouquet = 
	{
		"sunflowers",
		0.20,
		12.49,
	};
	inflatable choice;
	cout << "bouquet: " << bouquet.name << " for $";
	cout << bouquet.price << endl;
	
	choice = bouquet;
	cout << "choice: " << choice.name << " for $";
	cout << choice.price << endl; 
	
	inflatable guest =
	{
		"Glorious Gloria",
		1.88,
		29.99,
	};
	
	inflatable pal =
	{
		"Audacious Arthur",
		3.12,
		32.99
	};
	
	cout << "Expand your guest list with " << guest.name;
	cout << " and " << pal.name << "!\n";
	cout << "You can have both for $";
	cout << guest.price + pal.price << "!\n";
	return 0;  
}
*/
