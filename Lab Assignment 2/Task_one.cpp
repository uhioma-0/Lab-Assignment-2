/*Create function is_sorted() that:

takes an int array as a parameter
returns true if the array is sorted in an ascending order, otherwise false.
In main(), read some integers from the user into an array, call the function with the array, and print out the result(true = 1, false = 0).

Do not use any libraries for sorting or array manipulation.*/

#include <iostream>
using namespace std;
bool is_sorted(int array[])
{
	bool answer;
	bool check = true;
	int lengthArray = sizeof(array) / sizeof(&array[0]);
	for (int i = 0; i < lengthArray - 1; i++)
	{
		if (array[i] < array[(i + 1)])
			answer = true;
		else
			answer = false;

		check = check && answer;
	}
	return check;
}
/*int main()
{
	int i = 0;
	int value;
	int arr[100];
	bool condition = true;
	while (condition != true)
	{
		cout << "inter in an integer, end by intering END" << endl;
		cin >> value;
		arr[i] = value;
		i += 1;
		if (!cin)
			condition = false;
	}
	bool aws = is_sorted(arr);
	cout <<boolalpha<< aws;
}
*/