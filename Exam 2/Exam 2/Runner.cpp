#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Runner.h"
#include "Registration.h"
using namespace std;

Runner::Runner(string filename)
{
	ifstream runner(filename);
	string line;
	if (!runner.fail()) 
	{
		while (!runner.eof()) 
		{
			cin >> line;
			participants.push_back(line);
		}
		runner.close();
	}
}

string Runner::get_firstname()
{
	return firstname;
}

string Runner::get_lastname()
{
	return lastname;
}

int Runner::get_pace()
{
	return pace;
}

string Runner::find_pace(string lastname) 
{
	int runner = -1;
	for (int i = 0; runner == -1 && i < participants.size(); i++)
	{
		if (participants[i].get_lastname() == lastname)
			runner = i;
	}

	if (runner == -1)
		return "Runner was not found. This person is not registered.";
	else
		return participants[runner].get_pace();
}

string Runner::find_pace(string firstname, string lastname)
{
	int runner = -1;
	for (int i = 0; runner == -1 && i < participants.size(); i++) 
	{
		if (participants[i].get_lastname() == lastname && participants[i].get_firstname() == firstname)
			runner = i;
	}

	if (runner == -1)
		return "Runner was not found. This person is not registered.";
	else
		return participants[runner].get_pace();
}