///////////////////////////
//Ian J Stenerson
//Exam 2
//17 June 2014
//I affirm that all code given below was written solely by me, Ian Stenerson, 
//and that any help I received adhered to the rules stated for this exam.
///////////////////////////
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Runner.h"
using namespace std;

int main()
{
	string filename = "C:\\Users\\Ian\\CS172\\Registrants.txt";
	vector<Runner> participants;
	ofstream fout;
	ifstream fin;

	fin.open(filename);
	if (fout.fail())
	{
		cout << "Can't open file for reading" << endl;
		return 0;
	}
	
	for (int i = 0; i < participants.size(); i++)
	{
		Runner Bloom(filename, i);
	}

	for (int i = 0; i < participants.size(); i++)
	{
		double pace = Bloom.get_pace[i];
		if ((pace > 0) && (pace <= 360))
		{
			string white = "c:\\users\\Ian\\Desktop\\White.txt";
			ofstream foutW;
			ifstream finW;

			foutW.open(white);

			if (foutW.fail())
			{
				cout << "can't open file" << endl;
				return 0;
			}

			fout << Bloom.get_firstname() << " " << Bloom.get_lastname << " Pace: " << Bloom.get_pace << endl;
			foutW.close();
		}

		if ((pace >= 361) && (pace <= 420))
		{

			string yellow = "c:\\users\\Ian\\Desktop\\Yellow.txt";
			ofstream foutY;
			ifstream finY;

			foutY.open(yellow);

			if (foutY.fail())
			{
				cout << "can't open file" << endl;
				return 0;
			}
			foutY << Bloom.get_firstname() << " " << Bloom.get_lastname << " Pace: " << Bloom.get_pace << endl;
			foutY.close();
		}

		if ((pace >= 421) && (pace <= 480))
		{

			string Green = "c:\\users\\Ian\\Desktop\\Green.txt";
			ofstream foutG;
			ifstream finG;

			foutG.open(Green);

			if (foutG.fail())
			{
				cout << "can't open file" << endl;
				return 0;
			}

			fout << Bloom.get_firstname() << " " << Bloom.get_lastname << " Pace: " << Bloom.get_pace << endl;
			foutG.close();
		}

		if ((pace >= 481) && (pace <= 540))
		{

			string orange = "c:\\users\\Ian\\Desktop\\Orange.txt";
			ofstream foutO;
			ifstream finO;

			foutO.open(orange);

			if (foutO.fail())
			{
				cout << "can't open file" << endl;
				return 0;
			}

			fout << Bloom.get_firstname() << " " << Bloom.get_lastname << " Pace: " << Bloom.get_pace << endl;
			foutO.close();
		}

		if ((pace >= 541) && (pace <= 600))
		{

			string blue = "c:\\users\\Ian\\Desktop\\Blue.txt";
			ofstream foutB;
			ifstream finB;

			foutB.open(blue);

			if (foutB.fail())
			{
				cout << "can't open file" << endl;
				return 0;
			}

			fout << Bloom.get_firstname() << " " << Bloom.get_lastname << " Pace: " << Bloom.get_pace << endl;
			foutB.close();
		}

		if ((pace > 601) && (pace <= 720))
		{

			string lilac = "c:\\users\\Ian\\Desktop\\Lilac.txt";
			ofstream foutL;
			ifstream finL;

			foutL.open(lilac);

			if (foutL.fail())
			{
				cout << "can't open file" << endl;
				return 0;
			}

			fout << Bloom.get_firstname() << " " << Bloom.get_lastname << " Pace: " << Bloom.get_pace << endl;
			foutL.close();
		}

		if ((pace > 721) && (pace <= 1200))
		{

			string red = "c:\\users\\Ian\\Desktop\\Red.txt";
			ofstream foutR;
			ifstream finR;

			foutR.open(red);

			if (foutR.fail())
			{
				cout << "can't open file" << endl;
				return 0;
			}
			fout << Bloom.get_firstname() << " " << Bloom.get_lastname << " Pace: " << Bloom.get_pace << endl;
			foutR.close();
		}
	}//due to the inability to get the program to build, I do not have the txt files to go along with my code. In theory they would work.

	if (Bloom .find_pace("Michaels") != "1115")
		cout << "Owen Michael's pace not found: " << Bloom.find_pace("Owen", "Michaels") << endl;
	if (Bloom.find_pace("Dot", "Ike") != "488")
		cout << "Dot Ike's pace not found " << Bloom.find_pace("Dot", "Ike") << endl;
	fin.close();
}
