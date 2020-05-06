#include <iostream>
using namespace std;

int main()
{
	int size;
	int row = 1;
	int column = 1;
	cout << "Enter size of square: ";
	cin >> size;
	while (row <= size)
	{
		while (column <= size)
		{
			if (row == 1 or row == size or column == 1 or column == size)
				cout << "*";
			else 
				cout << " ";
			column++;
		}
		cout << endl;
		row++;
		column = 1;
	}
}
