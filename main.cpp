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
	for (int i=0; i<v.size(); i++)
	{
		ostringstream a;
		a << v[i];
		if (i==(v.size()-1))
		{
			output += a.str() + "}";
		}
		else 
		{
			output += a.str() + ", ";
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

vector<int> primeFactors (int a)
{
	vector<int> r;
	vector<int> f = Factors(a);
	for (int i=0; i<f.size(); ++i)
	{
		if (isprime(f[i]))
		{
			r.push_back(f[i]);
		}
	}
	return r;
}

string primeFactorize(int num)
{
	vector<int> factors = primeFactors(num);
	if (isprime(num))
	{
		return toString(num);
	}
	else
	{
		return toString (factors[0]) + "*" + primeFactorize(num/factors[0]);
	}
}

int main ()
{
	cout << "Welcome to Prime Factorizer" << endl;
	cout << "Keep entering your numbers to prime factorizer" << endl;
	cout << "or enter 0 to Quit" << endl;
	cout << "Reminder" << endl;
	cout << "the number you enter can't execed ";
	long long num = -1;
	
	cout << "Enter the number :";
	
	while (num != 0)
	{
		if (num > 0)
		{
			cout << primeFactorize (num) << endl; 
		}
		cout << ">>>";
		cin >> num;
		while (num < 0)
		{
			cout << "Invalid Input";
			return 0;
		}
	}
	
	return 0;
}
