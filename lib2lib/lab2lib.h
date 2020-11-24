#include <iostream>
#include <array>
#include <iostream> 
#include <vector> 
#include <cstring>
using namespace std;
bool is_sorted(int array[]);
bool is_palindrome(char arr[]);
void array_rows_cols(int** arr, int raw, int column);
void  swap_sort(int& a, int& b, int& c, bool& sorting);
void shrink_array(int arr[9]);

class Name
{
public:
	vector<string> name;
	Name(string defaultName)
	{
		name.push_back(defaultName);
	}
	void initialise();
	void insert();

	void search();
	void delet();
	void print();



