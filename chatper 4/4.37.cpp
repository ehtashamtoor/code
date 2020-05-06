#include <iostream>
#include <iomanip>
using namespace std;

void pop_future(double current_population, float growth_rate, int year)
{
	int next_75_years; 
	float numerical_inc=0;
	double cal_pop=0;
	next_75_years = year + 75;
	cout<<"Population growth for next 75 years\n";
	cout<<"Year("<<year<<")-("<<next_75_years<<")";
	cout<<setw(23)<<"Population this year";
	cout<<setw(20)<<"Yearly change\n";
	numerical_inc = (growth_rate/100)*current_population;
	cal_pop = numerical_inc + current_population;
	while (year <= next_75_years)
	{
		
		cout<<year<<setw(29)
		<<cal_pop<<setw(27)<<numerical_inc<<endl;
		
		cal_pop = numerical_inc + cal_pop;
		numerical_inc = (growth_rate/100)*cal_pop;
		year++;
	}
}
int main()
{
	double current_population, growth_rate;
	int year;
	cout<<"Enter current population:";
		cin>>current_population;
	cout<<"Enter Growth rate:";
		cin>>growth_rate;
	cout<<"Enter current year:";
		cin>>year;
	
	pop_future(current_population,growth_rate,year);
}
