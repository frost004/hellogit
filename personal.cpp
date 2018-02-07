#include <iostream>
#include <vector>
#include "personal.h"
#include <string>
using namespace std;

int main()
{
	vector <Personal> myVector;
	int p_age;
	string gname;
	int count =0;
	int myint;
	
	myVector.push_back("Toby", 12);
	myVector.push_back("Marc", 19);
	myVector.push_back("Shelby", 11);
	myVector.push_back("Tia", 14);

	for(int x = 0; x < myVector.size(); x+1)
	{
		cout << myVector[x].getAge() << " " << myVector[x].getName() << endl;
	}
return 0;
}
