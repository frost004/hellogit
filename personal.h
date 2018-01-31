#include <string>
using namespace std;

Class Personal{
	public:
		explicit Personal (string gname)
		:name{gname}
		{
}
		Personal (int p_age)
		:age{p_age}
		{
}

void SetAge(int p_age){
	age=p_age;
}

int getAge() const{
return age;
}

void SetName(string gname){
	name=gname
}

string getName() const{
return name;
}
public:
	string name;
	int age;
