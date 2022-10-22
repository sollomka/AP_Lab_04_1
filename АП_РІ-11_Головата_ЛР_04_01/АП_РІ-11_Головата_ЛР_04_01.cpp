#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int i;
	double P;

	cout << "i = "; cin >> i;

	P = 1;
	i = 1;

	while (i <= 15)
	{
		P += (pow(sin(i), 2) + ((pow(cos(i), 2)) * 1./i)) / pow(i, 2);
		i++;
	}
	cout << P << endl;

	P = 1;
	i = 1;

	do {
		P += (pow(sin(i), 2) + ((pow(cos(i), 2)) * 1. / i)) / pow(i, 2);
		i++;

	} while (i <= 15);
	cout << P << endl;

	P = 1;
	for (i = 1; i <= 15; i++)
	{
		P += (pow(sin(i), 2) + ((pow(cos(i), 2)) * 1. / i)) / pow(i, 2);
	}
	cout << P << endl;

	P = 1;
	for (i = 15; i >= 1; i--)
	{
		P += (pow(sin(i), 2) + ((pow(cos(i), 2)) * 1. / i)) / pow(i, 2);
	}
	cout << P << endl;

	return 0;
}