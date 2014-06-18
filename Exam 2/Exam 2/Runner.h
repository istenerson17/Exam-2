#ifndef RUNNER_H_
#define RUNNER_H_
#include <string>
#include <vector>
using namespace std;

class Runner
{
private:
	string firstname;
	string lastname;
	int pace;
	vector<Registration> participants;
public:
	Runner(string);

	string get_firstname();
	string get_lastname();
	int get_pace();
	string find_pace(string lastname);
	string find_pace(string firstname, string lastname);
};
#endif