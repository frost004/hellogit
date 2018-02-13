#include<iostream>
#include<vector>
#include"personal.h"
#include<string>

using namespace std ;

int main()
{


vector <Personal> info;

	info.push_back({25, "Brandi");
	info.push_back({10, "Arnold");
	info.push_back({20, "Genny");
	info.push_back({15, "Archie");

	cout << "Employee Personal information." << endl;
for (auto cache : info)
	{
		cout << x.getAge()<<' ' << x.getName()<<endl;
	}

	return 0;
}
