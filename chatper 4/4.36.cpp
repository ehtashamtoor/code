#include <iostream>
using namespace std;


int encrypt(int code)
{
	int a, b, c, d;
// obtaining a, b, c, d from 4 digit code
	a = code / 1000;
	b = (code % 1000)/100;
	c = (code % 100)/10;
	d = code % 10;
//encrypting code
	a = (a + 7)% 10;
	b = (b + 7)% 10;
	c = (c + 7)% 10;
	d = (d + 7)% 10;
	
	return (c*1000 + d*100 + a*10 + b);
}

int decrypt(int code)
{
	int a, b, c, d;
// obtaining a, b, c, d from 4 digit code (encrypted)
	a = code / 1000;
	b = (code % 1000)/100;
	c = (code % 100)/10;
	d = code % 10;
//decrypting code
	a = (a + 3)% 10;
	b = (b + 3)% 10;
	c = (c + 3)% 10;
	d = (d + 3)% 10;

	return (c*1000 + d*100 + a*10 + b);
}
int main()
{
	int code;
	
	cout<<"Enter your four digit code: ";
		cin>>code;
		
	cout<<"Encrypting code:"<<encrypt(code);
	cout<<"\nDecrypting code:"<<decrypt(encrypt(code));
}
