#include <iostream>
#include <math.h>

using namespace std;
int stepin(int a, int b)
{
	for (int i = 1; i <= b; i++)
	{
		a *= a;
	}
	return a;
}

int fac(int g)
{
	for (int i = 1; i < g; i++)
	{
		g *= i;
	}
	return g;
}

double tfzad()
{
	double q;
	int x, e;
	cout << "x = ";
	cin >> x;
	cout << "e = ";
	cin >> e;
	if (x > 0)
	{
		q = 0;
		for (int i = 1; i < x; i++)
		{
			q += stepin(-1, i) / fac(i);
		}
	}
	else
	{
		q = 1;
		for (int i = 1; i < 5; i++)
		{
			q *= (x * x - e) / i;
		}
	}
	return q;
}
int main()
{
	double res = tfzad();
	cout << " " << res;
	return 0;
}