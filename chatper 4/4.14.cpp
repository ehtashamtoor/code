#include <iostream>
using namespace std;

int main()
{
	int account_number;
	double beg_balance, total_charges, total_credits;
	double credit_limit, new_balance;
	
	cout<<"Enter account number (or -1 to quit):";
	cin>>account_number;
	while (account_number > 1)
	{
		cout<<"Enter beginning balance:";
			cin>>beg_balance;
		cout<<"Enter total charges:";
			cin>>total_charges;
		cout<<"Enter total credits:";
			cin>>total_credits;
		cout<<"Enter credit limit:";
			cin>>credit_limit;
		new_balance = beg_balance + total_charges - total_credits;
		cout<<"New balance: "<<new_balance<<endl;
		if (new_balance > credit_limit)
		{
			cout<<"Account: "<<account_number<<endl;
			cout<<"Credit limit:"<<credit_limit<<endl;
			cout<<"Balance:"<<new_balance<<endl;
			cout<<"Credit limit exceeded"<<endl;
		}
		cout<<"Enter account number (or -1 to quit):";
			cin>>account_number;
	}
}
