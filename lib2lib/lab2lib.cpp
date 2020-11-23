#include <iostream> 
#include <vector> 
#include "TaskSix.h"
#include <cstring>
#include <array>
#include "lab2lib.h"
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

bool is_palindrome(char arr[])
{
	int len = strlen(arr);
	bool palindrome = true;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] != arr[len - 1 - i])
			palindrome = false;
	}
	return palindrome;
}

void array_rows_cols(int** arr, int raw, int column)
{
	int rawSize = raw;
	int columnSize = column;
	int* rawSum = new int[rawSize];
	int* columnSum = new int[columnSize];
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
		for (int j = 0; j < rawSize; j++) {
			sum += arr[j][i];
		}
		columnSum[i] = sum;
	}
	for (int i = 0; i < rawSize; i++)
		totalRawSum += rawSum[i];
	for (int i = 0; i < columnSize; i++)
		totalColumnSum += columnSum[i];
	totalSum = totalRawSum + totalColumnSum;

	int** newArr = new int* [rawSize + 1];
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



	for (int i = 0; i < rawSize + 1; i++)
	{
		for (int j = 0; j < columnSize + 1; j++) {
			if (j == columnSize && i == rawSize)
				cout << "      " << totalSum << endl;
			else
				cout << "          " << newArr[i][j];

		}
		cout << endl;

	}
	cout << endl;

}
void  swap_sort(int& a, int& b, int& c, bool& sorting)
{
	if (sorting == false)//
	{
		if ((a >= b) && (b >= c)) {
			cout << " Result: " << a << "," << b << "," << c << ",";
		}
		if ((a >= c) && (c >= b)) {
			cout << " Result: " << a << "," << c << "," << b << ",";
		}
		if ((a <= b) && (a >= c)) {
			cout << " Result: " << b << "," << a << "," << c << ",";
		}
		if ((a <= b) && (c >= a)) {
			cout << " Result: " << b << "," << c << "," << a << ",";
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
void shrink_array(int arr[9])
{
	int i = 0;
	int j = 0;

	while (j < 8)
	{
		int remainder = 9 % (i + 1);
		int quesient = 9 / (i + 1);
		if (quesient > 1 || remainder > 1)
		{
			arr[j] = arr[i] + arr[i + 1];//{ 1,2,5,4,3,6,7,8,9 };
			i += 2;
			j += 1;

		}
		if (remainder == 0 && quesient == 1)
		{
			arr[j] = arr[i];
			i += 2;
			j += 1;
		}
		if (j > 4)
		{
			for (int w = j; w < 9; w++)
				arr[w] = 0;
			j = 9;
		}


	}

}
void Name::initialise()
{
	int sure;
	cout << "“are you sure ? if yes enter 1" << endl;
	cin >> sure;
	if (sure == 1)
	{
		name.clear();
	}
}


void Name::insert()
{
	string intered;
	{
		char q = 'q';
		while ((intered[0]) != q || (intered[1]) != '\0')
		{
			name.push_back(intered);
			cout << "Please enter names to be inserted. press q to stop" << endl;;
			cin >> intered;
		}
	}
}
void Name::search()
{
	string keyphrase;
	cout << "“enter a keyphrase to search" << endl;;
	cin >> keyphrase;
	for (int i = 0; i < (name.size() - 1); i++)
	{
		string single_name = name[i];
		if (single_name.find(keyphrase) != string::npos)cout << name[i] << ",";
	}
}
void Name::delet()
{
	string deleteName;
	cout << "“enter a name to delete" << endl;
	cin >> deleteName;
	for (int i = 0; i < (name.size() - 1); i++)
	{
		if (name[i] == deleteName)
			name.erase(name.begin() + i
			);
	}

}
void Name::print()
{
	for (int i = 0; i < (name.size() - 1); i++)
		cout << name[i] << "," << endl;
}
