#include <iostream>
#include <cmath>
using namespace std;

double roundToTenths(double data1);

int main(void)
{
	double price;
	double tax;
	double dollars_off;
	double the_new_price;
	int the_input;

thebeginning:
	cout << "Enter 1 to calculate price and price off from tax and the final price" << endl;
	cout << "Enter 2 to calculate price off and final price from price and tax" << endl;
	cout << "Enter 3 to calculate price and tax percentage from price off and the final price" << endl;
	cout << "Enter 4 to calculate price off and tax from the price and final price" << endl;
	cout << "Enter 5 to calculate price and tax price added from tax and the final price" << endl;
	cout << "Enter 6 to calculate price added and final price from price and tax" << endl;
	cout << "Enter 7 to calculate price and tax percentage from price added and the final price" << endl;
	cout << "Enter 8 to calculate price added and tax from the price and final price" << endl;
	
	cin >> the_input;
	
	switch(the_input)
	{
		case 1:
			cout << "Enter the tax percentage (ex: 50 for 50%): ";
			cin >> tax;

			cout << "Enter the final price: ";
			cin >> the_new_price;

			price = -the_new_price / (tax/100 - 1);

			price = roundToTenths(price);

			dollars_off = price - the_new_price;

			dollars_off = roundToTenths(dollars_off);
			
			cout << "The price is " << price << endl;
			cout << "The price off is " << dollars_off << endl;

			break;
		case 2:
			cout << "Enter the price: ";
			cin >> price;

			cout << "Enter the tax percentage (ex: 50 for 50%): ";
			cin >> tax;

			dollars_off = price * (tax / 100);

			dollars_off = roundToTenths(dollars_off);
			
			the_new_price = price - dollars_off;

			the_new_price = roundToTenths(the_new_price);
			
			cout << "The price off is " << dollars_off << endl;
			cout << "The final price is " << the_new_price << endl;

			break;

		case 3:
			cout << "Enter the price off: ";
			cin >> dollars_off;

			cout << "Enter the final price: ";
			cin >> the_new_price;

			price = the_new_price + dollars_off;

			price = roundToTenths(price);
			
			tax = dollars_off * 100 / price;

			tax = roundToTenths(tax);
			
			cout << "The price is " << price << endl;
			cout << "The tax percentage is " << tax << endl;

			break;

		case 4:
			cout << "Enter the price: ";
			cin >> price;

			cout << "Enter the final price: ";
			cin >> the_new_price;

			dollars_off = price - the_new_price;

			dollars_off = roundToTenths(dollars_off);
			
			tax = dollars_off * 100 / price;

			tax = roundToTenths(tax);
			
			cout << "The price off is " << dollars_off << endl;
			cout << "The tax percentage is " << tax << endl;

			break;

		case 5:
			cout << "Enter the tax percentage (ex: 50 for 50%): ";
			cin >> tax;

			cout << "Enter the final price: ";
			cin >> the_new_price;

			price = the_new_price / (tax/100 + 1);

			price = roundToTenths(price);
			
			dollars_off = the_new_price - price;

			dollars_off = roundToTenths(dollars_off);
			
			cout << "The price added is " << dollars_off << endl;
			cout << "The price is " << price << endl;

			break;

		case 6:
			cout << "Enter the price: ";
			cin >> price;

			cout << "Enter the tax percentage (ex: 50 for 50%): ";
			cin >> tax;

			dollars_off = price * (tax / 100);

			dollars_off = roundToTenths(dollars_off);
			
			the_new_price = price + dollars_off;

			the_new_price = roundToTenths(the_new_price);
			
			cout << "The price added is " << dollars_off << endl;
			cout << "The final price is " << the_new_price << endl;

			break;

		case 7:
			cout << "Enter the price added: ";
			cin >> dollars_off;

			cout << "Enter the final price: ";
			cin >> the_new_price;

			price = the_new_price - dollars_off;

			price = roundToTenths(price);

			tax = dollars_off * 100 / price;

			tax = roundToTenths(tax);

			cout << "The price is " << price << endl;
			cout << "The tax percentage is " << tax << endl;

			break;

		case 8:
			cout << "Enter the price: ";
			cin >> price;

			cout << "Enter the final price: ";
			cin >> the_new_price;

			dollars_off = the_new_price - price;

			dollars_off = roundToTenths(dollars_off);

			tax = dollars_off * 100 / price;

			tax = roundToTenths(tax);

			cout << "The price added is " << dollars_off << endl;
			cout << "The tax percentage is " << tax << endl;

			break;
			
		default:
			goto thebeginning;
	}

	return 0;
}

double roundToTenths(double data1)
{
	data1 *= 100;
	return floor(data1 + 0.5) / 100;
}
