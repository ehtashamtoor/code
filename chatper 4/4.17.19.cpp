#include <iostream>
using namespace std;

int main()
{
	int num[5], temp, max=0;
	int j =0;
	while (j < 5)
	{
		cout<<"Enter number: ";
			cin>>num[j];
		j +=1;
	}
	for (int i =0;i<4;i++)
	{
		max = i;
		for (int y = i+1;y<5;y++){
			if (num[y] > num[max])
			{
				max = y;
			}
		}
	if (max != i)
	{
		temp = num[i];
		num[i] = num[max];
		num[max] = temp;
	}
	}
	cout<<"\nlargest number is:"<<num[0];
	cout<<"\nlargest number is:"<<num[1];
	//cout<<"\nlargest number is:"<<num[2];
	//cout<<"\nlargest number is:"<<num[3];
	//cout<<"\nlargest number is:"<<num[4];
}
