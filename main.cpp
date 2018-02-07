#include<iostream>
#include<vector>
#include"personal.h"
#include<string>

using namespace std ;

int main()
{


Personal ob;
Personal ob2={700,"Orange"};

vector <Personal> f;

	f.push_back(ob);
	f.push_back(ob2);
	f.push_back({250,"Bananas");
	f.push_back({1000,"Apples");


for (auto x:f)
	{
		cout << x.getAge()<<' ' << x.getName()<<endl;
	}

	return 0;
}
