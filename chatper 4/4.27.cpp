#include <iostream>
using namespace std;

int main()
{
	int number, dub_number, bi_powers=1, decimal_number =0, last_digit;
	cout<<"Enter a number:";
	cin>>number;
	dub_number = number;
	
	while(dub_number != 0)
	{
		last_digit = dub_number % 10;
		decimal_number = (bi_powers * last_digit) + decimal_number;
		bi_powers *= 2;
		dub_number = dub_number / 10;
	}
	cout<<"decimal equivalent of "<<number<<" is "<<decimal_number;
}
