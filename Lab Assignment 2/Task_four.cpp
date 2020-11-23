/*Write a function named swap_sort() that

has a void return value(i.e.does not return anything)
takes three int parameters(a, b, c) using pass - by - reference
takes also a fourth parameter bool order(true: sort ascending, false : sort descending) (pass - by - value)
sorts the values of a, band c into an ascending / descending order, depending on the value of “order”, by swapping them.
In main(), ask user to give three integers + whether to sort ascending or descending from the user.Then call the function and print out the variables to see whether they are sorted properly.This process should be continued until the user gives 0 as the first value.

Example:

Give a(0 to quit) : 4
Give b : 3
Give c : 7
Sort ascending / descending(1 / 0) : 1 // call function

Result : 3, 4, 7

Give a(0 to quit) : 0 Bye bye!*/
#include <iostream>
using namespace std;
void  swap_sort(int &a,int &b,int &c, bool &sorting) 
{
	if (sorting == false)//
	{
		if ((a >= b) && (b >= c)) {
			cout << " Result: " << a << "," << b << "," << c <<",";
		}
		if ((a >= c) && (c >= b)) {
			cout << " Result: " << a << "," << c << "," << b << ",";
		}
		if ((a <= b) && (a >= c)) {
			cout << " Result: " << b << "," << a << "," << c << ",";
		}
		if ((a <= b) && (c >= a)) {
			cout << " Result: " << b<< "," << c << "," << a << ",";
		}
		if ((c >= a) && (a >= b)) {
			cout << " Result: " << c << "," << a << "," << b << ",";
		}
		if ((c >= b) && (b >= a)) {
			cout << " Result: " << c << "," << b << "," << a << ",";
		}

	}
	if (sorting == true)//
	{
		if ((a <= b) && (b <= c)) {
			cout << " Result: " << a << "," << b << "," << c << ",";
		}
		if ((a <= c) && (c <= b)) {
			cout << " Result: " << a << "," << c << "," << b << ",";
		}
		if ((a >= b) && (a <= c)) {
			cout << " Result: " << b << "," << a << "," << c << ",";
		}
		if ((a >= b) && (c <= a)) {
			cout << " Result: " << b << "," << c << "," << a << ",";
		}
		if ((c <= a) && (a <= b)) {
			cout << " Result: " << c << "," << a << "," << b << ",";
		}
		if ((c >= b) && (b <= a)) {
			cout << " Result: " << c << "," << b << "," << a << ",";
		}

	}
}
/*int main()

{ 
	while (1==1)
	{
		int a, b, c;
		bool sorting;
		cout << " Give a(0 to quit) :" << endl;
		cin >> a;
		if (a == 0) {
			cout << "Bye bye!" << endl;
			return 0;
			break;
		}
		cout << " Give b :" << endl;
		cin >> b;
		cout << " Give c :" << endl;
		cin >> c;
		cout << "Sort ascending / descending(1 / 0) :";
		cin >> sorting;
		swap_sort(a, b, c, sorting);
	}
}*/