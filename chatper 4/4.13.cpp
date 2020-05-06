#include <iostream>
using namespace std;

int main()
{
	double miles = 0, gallons = 0;
	double total = 0, MPG = 0, total_MPG = 0;
	
	cout<<"Enter miles driven (-1 to quit):";
		cin>>miles;
	while (miles != -1){
		//total += miles;
		cout<<"Enter gallons used:";
		cin>>gallons;
		MPG = miles / gallons;
		total_MPG += MPG; 
		cout<<"MPG for this trip:"<<MPG;
		cout<<"\n\nEnter miles driven (-1 to quit):";
		cin>>miles;
	}
	cout<<"\nTotal MPG:"<<total_MPG;
}
