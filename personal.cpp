#include"personal.h"
#include <string>

using namespace std;


Personal::Personal(){

		Age=0;
		Name=' ';
		

};

	
Personal::Personal (int ages,string iname, )
	{
		Age = ages;
		Name = iname;
		
	}

void Personal::setAge (int ages)
	{
		Age= ages;
	}

int Personal::getAge()
	{
		return Age;
	}

void Personal::setName (string iname)
	{
		Name = iname;
	}

string Personal::getName()
	{
		return Name;
	}
