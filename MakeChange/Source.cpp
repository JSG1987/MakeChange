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
	int dollars;
	int n;

;



	cout << "How much is the product?\n";
	cin >> cost;
	cout << "Enter amount you paid\n";
	cin >> payment;
	dollars = (payment - cost)*100;
	n = (payment - cost)*100;
	
	/*cout << "Your change is " << dollars / 100 << " dollars ";
	dollars = dollars % 100;
	cout <<  dollars / 25 << " Quarters ";
	dollars = dollars % 25;
	cout <<  dollars / 10 << " dimes ";
	dollars = dollars % 10;
	cout <<   dollars / 5 << " nickels ";
	dollars = dollars % 5;
	cout <<  dollars / 1 << " pennies ";
	*/
	if (dollars / 100 != 0)
	{
		dollars / 100;
		dollars = dollars % 100;
		cout <<"Your change is "<< dollars / 25 << " Quarters ";
		dollars = dollars % 25;
		cout << dollars / 10 << " dimes ";
		dollars = dollars % 10;
		cout << dollars / 5 << " nickels ";
		dollars = dollars % 5;
		cout << dollars / 1 << " pennies ";
	}
	else if (dollars / 25 != 0)
	{
		dollars / 100;
		dollars = dollars % 100;
		dollars / 25;
		dollars % 25;
		cout << "your change is "<< dollars / 10 << " dimes ";
		dollars = dollars % 10;
		cout << dollars / 5 << " nickels ";
		dollars = dollars % 5;
		cout << dollars / 1 << " pennies ";
	}
	else if (dollars / 10 != 0)
	{
		dollars / 100;
		dollars = dollars % 100;
		dollars / 25;
		dollars = dollars % 25;
		cout << "your change is " << dollars / 10 << " dimes ";
		dollars = dollars % 10;
		cout << dollars / 5 << " nickels ";
		dollars = dollars % 5;
		cout << dollars / 1 << " pennies ";
	}
	else if (dollars / 5 != 0)
	{
		dollars / 100;
		dollars = dollars % 100;
		dollars / 25;
		dollars =dollars % 25;
		dollars / 10;
		dollars = dollars % 10;
		dollars / 5;
		dollars = dollars % 5;
		cout << "your change is " << dollars / 1 << " pennies\n";
	}
	  
	





	system("PAUSE");
	return 0;
}