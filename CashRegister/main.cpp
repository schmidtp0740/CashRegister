#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

void change(int& coins, int& quarters, int& dimes, int& nickels, int& pennies);
int main()
{
	string answer = "";
	do {
		answer = "";
		int dollars = 0, coins = 0, quarters = 0, dimes = 0, nickels = 0, pennies = 0;
		double total = 0;
		double price = 0;
		
		do {
			
			cout << "Price: " << endl;
			cin >> price;
			total += price;
			cout << "Checkout? [y/n]";
			cin >> answer;
		} while (answer != "y");

		float cash = 0;
		cout << "Cash amount?" << endl;
		cin >> cash;
		
		cout << "total: " << total << endl;
		cash -= total;
		dollars = cash;
		cout << "Dollars: " << dollars << endl;
		coins = cash * 100;
		change(coins, quarters, dimes, nickels, pennies);
		cout << "quarters: " << quarters << endl;
		cout << "dimes: " << dimes << endl;
		cout << "nickels " << nickels << endl;
		cout << "pennies " << pennies << endl;

		cout << endl << "Another transaction? [y/n]" << endl;
		cin >> answer;
		system("cls");
	} while (answer == "y");

	cout << "Thank you for shopping at Schmidt's" << endl;

	system("pause");
	return 0;
}

void change(int& coins, int & quarters, int & dimes, int & nickels, int & pennies)
{
	quarters = coins/25;
	dimes = coins % 25 / 10;
	nickels = coins % 25 % 10 / 5;
	pennies = coins % 25 % 10 % 5 / 1;
}
