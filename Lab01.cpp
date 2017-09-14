// Lab01.cpp
// Erik Horwitz
// COSC 2030
// Lab 01
// 9 Sept 2017

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	ifstream inFile;
	string inputFile;
	double x;

	int count = 0;
	cout << "Please enter the input file name: ";
	getline(cin, inputFile);
	//Opens file
	inFile.open(inputFile);
	//Checks if file can open
	if (!inFile)
	{
		cerr << "Could not open file\n ";
		return 0;
	}
	//Counts how many numbers are in the file
	while (!inFile.fail())
	{
		count++;
		inFile >> x;
		if (inFile.eof())
		{
			break;
		}
	
	}
	cout << "\n" << "The total number of numbers: "<< count << endl;
	cout << endl;

	inFile.seekg(0, inFile.beg);

	
	cout << "The first two numbers are: ";
	//Reports first two numbers
	for(int i=0; i<2; i++)
	{

		inFile >> x;
		cout << x <<" ";

	}
	cout << endl;
	inFile.seekg(0, inFile.beg);
	inFile.clear();

	cout << "The last two numbers are: ";
	//Reports last two numbers
   for (int i = 0; i<count; i++)
	{
	   inFile >> x;
	   if (i>=count-2)
	   {
		   cout << x<< " " ;
	   }
	
	}
   cout << endl;

	return 0;
}