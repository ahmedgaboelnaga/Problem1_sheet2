#include<iostream>

using namespace std;

int main()
{
	//Problem 1: Write a C++ program that accepts two numbers and gives one of thefollowing:
	//Enter two integers: 22 822 is largerEnter two integers: 12 5050 is largerEnter two integers: 14 14These numbers are equal

	int n1, n2;

	cout << "Enter the first number: ";
	cin >> n1;

	cout << "Enter the second number: ";
	cin >> n2;

	if (n1 < n2)
	{
		cout << n2 << " is larger";
	}
	else if (n1 == n2)
	{
		cout << "They are equal";
	}
	else
	{
		cout << n1 << " is larger";
	}

	return 0;
}