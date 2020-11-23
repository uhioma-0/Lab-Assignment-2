
#include <stdlib.h>
#include<iostream>
#include <array>
#include <stdlib.h> 
using namespace std;
void array_rows_cols(int **arr,int raw,int column)
{
	int rawSize = raw;
	int columnSize = column;
	int *rawSum = new int [rawSize];
	int *columnSum = new int [columnSize];
	int totalSum = 0;
	int totalColumnSum = 0;
	int totalRawSum = 0;
	for (int i = 0; i < rawSize; i++)
	{
		int sum = 0;
		for (int j = 0; j < columnSize; j++) {
			sum += arr[i][j];
		}
		rawSum[i] = sum;
	}
	for (int i = 0; i < columnSize; i++)
	{
		int sum = 0;
		for (int j = 0; j <rawSize ; j++) {
			sum += arr[j][i];
		}
		columnSum[i] = sum;
	}
	for (int i = 0; i < rawSize; i++)
		totalRawSum += rawSum[i];
	for (int i = 0; i < columnSize; i++)
		totalColumnSum += columnSum[i];
	totalSum = totalRawSum + totalColumnSum;

	int** newArr = new int* [rawSize +1];
	for (int i = 0; i < rawSize + 1; i++)
		newArr[i] = new int[columnSize + 1];

	for (int i = 0; i < rawSize; i++) {
		for (int j = 0; j < columnSize; j++) 
		{
			newArr[i][j] = arr[i][j];
		}
	}
	for (int i = 0; i < rawSize; i++)
		newArr[i][columnSize] = rawSum[i];
	for (int i = 0; i < columnSize; i++)
		newArr[rawSize][i] = columnSum[i];



	for (int i = 0; i < rawSize +1 ; i++)
	{
		for (int j = 0; j < columnSize +1; j++) {
			if (j == columnSize && i==rawSize)
				cout << "      " << totalSum<<endl;
			else 
				cout << "          " << newArr[i][j];
			
		}
		cout << endl;

	}
	cout << endl;

}
/*int main()
{
	int x = 0;
	int y = 0;
	cout << "Please, inter the size of the raw " << endl;
	cin >> x;
	cout << "Please, inter the size of the colomn" << endl;
	cin >> y;
	int** arr = new int* [x];
	for (int i = 0; i < x; i++)
		arr[i] = new int[y];

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			arr[i][j] = rand() % 10;
		}

	}

array_rows_cols(arr,x,y);
}
	*/
	