#include <iostream>
using namespace std;

int main()
{
	int number,dub_number, last_digit, reverse_number = 0;
	cout<<"Enter a number:";
	cin>>number;
	dub_number = number;
	while (dub_number != 0)
	{
		last_digit = dub_number % 10;
		reverse_number = (reverse_number*10) + last_digit;
		dub_number = dub_number / 10;
	}
	if (reverse_number == number)
		cout<<number<<" is palindrome"<<endl;
	else
		cout<<number<<" is not palindrome"<<endl;
}
