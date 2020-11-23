
#include <iostream>
#include <cstring>
using namespace std;
bool is_palindrome(char arr[]) 
{
	int len = strlen(arr);
	bool palindrome = true;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] != arr[len-1-i])
			palindrome = false;
	}
	return palindrome;
}

/*int main()
{
	char word[100];
	cout << "Entera string: ";
	cin.get(word, 100);
	bool ans = is_palindrome(word);
	cout <<boolalpha << ans << endl;
}*/
