#include <iostream> 
#include <vector> 
#include <string>
using namespace std;
class Name
{
public :
	vector<string> name;
	Name(string defaultName)
	{
		name.push_back (defaultName);
	}
	void initialise ();
	void insert ();

	void search ();
	void delet ();
	void print ();
	/*void quit ();
	void MakeYourChoice();*/
		
};
