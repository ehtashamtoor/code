#include <iostream>
using namespace std;

int main()
{
	int row=1, patern_value=1;
	while(row <= 8)
	{
		while(patern_value <= 8)
		{
			cout<<"* ";
			patern_value++;
		}
		cout<<endl;
		if(row==1 or row==3 or row==5 or row==7){
			cout<<" ";
		}
		patern_value = 1;
		row++;
	}
}
