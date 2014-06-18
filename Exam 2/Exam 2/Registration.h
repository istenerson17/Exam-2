#ifndef REGISTRATION_H_
#define REGISTRATION_H_

#include <string>
using namespace std;

class Registration 
{
private:
	string firstname;
	string lastname;
	string pace;

public:
	string get_firstname();
	string get_lastname();
	string get_pace();

	Registration(string Firstname, string Lastname, string Pace);
};
#endif