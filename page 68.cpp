#include <iostream>
using namespace std;
double round(double a);

/*
int main()
{
	cout << "Please input your height: ___ cm \b\b\b\b\b\b\b";
	int height;
	cin >>height;
	const int height_feet = height / 2.54 / 12;
	const double height_inch = (height - height_feet * 12 * 2.54) / 2.54;
	
	cout << endl << "Your height is: " << height_feet << " feet and " << round (height_inch) << " inches tall. \n";
	// 若height_inch使用int和mod，將會inches沒四捨五入，會無條件捨去
	// 我這種寫法會比較繁瑣但有四捨五入到整數inch 
	
	cout << "Please input your height:\n _ feet \b\b\b\b\b\b\b";
	int feet, inch, ponds;
	cin >> feet;
	cout << " _ inches \b\b\b\b\b\b\b\b\b";
	cin >> inch;
	cout << "Please input your weight: ___ ponds \b\b\b\b\b\b\b\b\b\b";
	cin >> ponds;
	float cm = feet*12*2.54 + inch*2.54;
	float kg = ponds /2.2;
	
	cout.setf( ios::fixed );
	cout.precision( 2 ) ;
	
	cout << "\nYour height is: " << cm << " cm and weight is: " << kg << " kg. BMI is: " << kg / ((cm*0.01)*(cm*0.01));
	
	return 0;
}

double round(double a)
{
   return (a>=0)?(int)(a+0.5):(int)(a-0.5);
}
*/

