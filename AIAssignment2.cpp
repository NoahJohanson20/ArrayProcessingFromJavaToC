// AIAssignment2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int myMax(vector<int> a);
double myAvg(vector<int> a);
void printNumbers(vector<int> a);
vector<int> Copy(vector<int> a);
void myReverse(vector<int>& a);
bool isPrime(long num);
void printPrimeNumbers(vector<int> a);

int main()
{
	vector<int> vect{ 10, 5, 15, 12 };
	vector<int> temp;
	int a = vect.size();
	int highest;
	int lowest;
	double avg;
	

	cout << "The highest number is " << myMax(vect) << "\n" ;
	cout << "The avg of the numbers is " << myAvg(vect) << "\n";
	
	temp = Copy(vect);

	cout << "The original array \n";
	printNumbers(vect);

	myReverse(temp);
	cout << "\nThe reverse array \n";
	printNumbers(temp);

	cout << "These are all the prime numbers \n";
	printPrimeNumbers(temp);

	return 0;
}

int myMax(vector<int> a)
{
	int max = a.at(0);
	for (int i = 0; i < a.size(); i++)
	{
		if (a.at(i) > max)
		{
			max = a.at(i);
		}
	}
	return max;
}

double myAvg(vector<int> a)
{
	int n = a.size();
	double sum = 0.0;
	for (int i = 0; i < a.size(); i++)
	{
		sum += a.at(i);
	}
	double avg = sum / n;
	return avg;
}



void printNumbers(vector<int> a)
{
	for (int i = 0; i < a.size(); i++)
	{
		cout << a.at(i) << "\n";
	}
}

vector<int> Copy(vector<int> a)
{
	vector<int> b(a.size());
	for (int i = 0; i < a.size(); i++)
	{
		b.at(i) = a.at(i);
	}
	return b;
}

void myReverse(vector<int>& a)
{
	int n = a.size();
	for (int i = 0; i < n / 2; i++)
	{
		int temp = a.at(i);
		a.at(i) = a.at(n - i - 1);
		a.at(n - i - 1) = temp;
	}
}

bool isPrime(long num)
{
	if (num < 2)
	{
		return false;
	}
	for (long i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}

void printPrimeNumbers(vector<int> a)
{
	for (int i = 0; i < a.size(); i++)
	{
		if (isPrime(a.at(i)))
		{
			cout << a.at(i) << " ";
		}
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
