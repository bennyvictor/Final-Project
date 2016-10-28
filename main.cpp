//Code for Final Project
//
//
//
//Created by Benny Victor

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

string toString (int a)
{
	ostringstream g;
	g << a;
	return g.str();
}

void printVector (vector<int> v)
{
	string output = "{";
	for (int i; i<v.size(); i++)
	{
		ostringstream a;
		a << v[i];
		if (i==(v.size()-1))
		{
			output += a.str() + "}";
		}
		else 
		{
			output += a.str() + ", ":
		}
	}
	cout << output << endl;
}

int main ()
{
	cout << "Welcome to Prime Factorizer" << endl;
	cout << "Keep entering your numbers to prime factorizer" << endl;
	cout << "or enter -1 to Quit" << endl;
	
	int num = 0;
	
	cout << "Enter the number :";
	
	while (num != -1)
	{
		if (num != 0)
		{
			cout << primeFactorize (num) << endl; 
		}
		cout << ">>>";
		cin >> num;
	}
	
	return 0;
}
