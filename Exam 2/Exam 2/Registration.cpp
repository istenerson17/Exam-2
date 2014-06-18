#include "Registration.h"
#include <iostream>
string Registration::get_firstname() 
{ 
	return firstname; 

}
string Registration::get_lastname() 
{ 
	return lastname; 
}

string Registration::get_pace() 
{ 
	return pace; 
}

Registration::Registration(string Firstname, string Lastname, string Number) {
	firstname = Firstname;
	lastname = Lastname;
	pace = Number;
}