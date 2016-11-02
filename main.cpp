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

vector<int> Factors (int num)
{
	vector<int> f;
	for (int i=1; i<=num; ++i)
	{
		if (num%i==0)
		{
			f.push_back(i);
		}
	}
	return f;
}

bool isprime(int num)
{
	if (Factors(num).size()==2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

vector<int> primeFactors(vector<int> f)
{
	vector<int> r;
	for (int i=0; i<f.size(); ++i)
	{
		if (isprime(f[i]))
		{
			r.push_back(f[i]);
		}
	}
	return r;
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
