#include"personal.h"
#include <string>

using namespace std;


Personal::Personal(){

		Age=0;
		Name=' ';
		

};

	
Personal::Personal (int P_age,string gname, )
	{
		Age = P_age;
		Name = gname;
		
	}

void Personal::setAge (int P_age)
	{
		Age=P_age;
	}

int Personal::getAge()
	{
		return Age;
	}

void Personal::setName (string gname)
	{
		Name=gname;
	}

string Personal::getName()
	{
		return Name;
	}
