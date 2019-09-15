/* Joseph Gentry <CIS 317 <Brady Rimes.>
This program will take in two float values. The first value will be t
*/
#include<iostream>
#include<iomanip>
#include<fstream>
#include<cmath>
#include<string>

using namespace std;

int main()
{

	float cost;
	float payment;
	int y;
	int n;

;



	cout << "How much is the product?\n";
	cin >> cost;
	cout << "Enter amount you paid\n";
	cin >> payment;
	y = (payment - cost)*100;
	n = (payment - cost) * 100;
	
	cout << "You will need " << y / 100 << " dollars\n";
	y = y % 100;
	cout << "You will need " << y / 25 << " Quarters\n";
	y = y % 25;
	cout << "you will need " << y / 10 << " dimes\n";
	y = y % 10;
	cout << "you will need " << y / 5 << " nickels\n";
	y = y % 5;
	cout << "you will need " << y / 1 << " pennies\n";




	system("PAUSE");
	return 0;
}