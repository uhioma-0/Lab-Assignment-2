/*Task 6: Vector database
As you saw in lecture notes, vector is similar to array, but has dynamic size.This is great when we don’t really know how much data there will be when writing the code.

Create a program that implements a simple database system that stores names of persons in a vector.The program presents the following menu to the user(in a loop) :

	MENU :

	initialise database
	insert
	search
	delete
	print
	quit
	Make your choice :

initialise database

removes all names from the vector, after confirming(“are you sure ? ”) from the user.

insert

in a loop, asks user for names to be inserted.The loop stops when ‘Q’ or ‘q’ are given.

search

read a search string from the user

print all names that include the search string(e.g.“te” would return both “teemu” and “teppo”) (hint: see lecture note 2 about strings)

delete

read a name from the userand delete that name from the vector print

print

the contents of the vector

quit

end the program

For simplicity, you can assume to use only lower - case letters.*/

#include <iostream> 
#include <vector> 
#include "TaskSix.h"
#include <cstring>
using namespace std;

void Name:: initialise()
{
	int sure;
	cout << "“are you sure ? if yes enter 1"<<endl;
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
		while ((intered[0]) != q || (intered[1]) != '\0' )
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
		    if (single_name.find(keyphrase)!=string::npos)cout << name[i] << ",";
		}
	}
void Name::delet()
{
	string deleteName;
	cout << "“enter a name to delete" << endl;
	cin >> deleteName;
	for (int i = 0; i < (name.size() - 1); i++)
	{
		if (name[i]== deleteName)
			name.erase(name.begin()+i
);
	}
	
}
void Name::print()
{
	for (int i = 0; i < (name.size() - 1); i++)
		cout << name[i]<<"," << endl;
}
/*int main()
{
	Name P("Test");

	while (true)
	{
		string choice;
		cout << "MENU : \n" << "initialise database \n" << "insert\n" << "search \n" << "delete\n" << "print\n" << "quit\n" << "Make your choice :" << endl;
		cin >> choice;
		if (choice == "initialise")
			P.initialise();
		if (choice == "insert")
		{
			cout << endl;
			P.insert();
		}
		if (choice == "search") {
			cout << endl;
			P.search();
		}
		if (choice == "delete") {
			cout << endl;
			P.delet();
		}
		if (choice == "print") {
			cout << endl;
			P.print();
		}
		if (choice == "quit") {
			cout << "HAVE A GOOD DAY" << endl;
			break;
		}
	}
}
		                       
			
*/