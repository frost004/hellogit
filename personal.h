ifndef PERSONAL_H
#define PERSONAL_H
#include <string>

using namespace std;

class Personal {

private:

	int Age;
	std::string  Name;
	

public:

	Personal();

	Personal( int , string);


	void setAge(int );

	int getAge();

	void setName(string);

	string getName ();
	

};
#endif
