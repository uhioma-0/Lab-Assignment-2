/*Task 5: Shrink
Arrays are by default passed by reference because they use pointers(see lecture note on pointers).So if a function changes the input array, the caller is able to see the change!

Create function shrink_array() that :

	takes an int array as input
	combines adjacent integers in the input array(e.g. 5 and 5 becomes 10; 7 and 6 becomes 13)
	assign zeroes to the “leftover” indices
	returns void
	In main(), create an int array with some values, call shrink_array(), and print out the arrayand the final output array:

Examples:

input array : 5, 5, 7, 6, 2, 2, 11, 11, 5, 4
output array : 10, 13, 4, 22, 9, 0, 0, 0, 0, 0

input array : 5, 5, 7, 6, 2, 2, 11, 11, 5
output array : 10, 13, 4, 22, 5, 0, 0, 0, 0*/
#include <iostream>
#include <array>
using namespace std;

void shrink_array(int arr[9])
{
	int i = 0;
	int j = 0;
	
	while (j < 8)
	{
		int remainder = 9 % (i+1);
		int quesient = 9 / (i + 1);
		if (quesient >1 || remainder > 1)
		{
			arr[j] = arr[i] + arr[i + 1];//{ 1,2,5,4,3,6,7,8,9 };
			i += 2;
			j += 1;
			
		}
		if (remainder ==0 && quesient ==1)
		{
			arr[j] = arr[i];
			i += 2;
			j += 1;
		}
		if (j>4)
		{
			for (int w = j; w < 9; w++)
				arr[w] = 0;
			j = 9;
		}
		

	}

}
/*int main()
{
	//int* arr = new int(5);
	int arr [] = { 1,2,5,4,3,6,7,8,9 };
	shrink_array(arr);
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << ",";
	}
	return 0;



}*/