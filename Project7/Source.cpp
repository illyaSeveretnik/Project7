#include <iostream>
#include <math.h>

using namespace std;

int tfzad()
{
	double y, n, e, g, x;
	cout << "n = ";
	cin >> n;
	cout << "e = ";
	cin >> e;
	cout << "g = ";
	cin >> g;
	cout << "x = ";
	cin >> x;

	if (n >= 2)
	{
		y = 1;
		for (int i = 1; i <= n; i++)
		{
			y *= pow(e, i);
		}
	}
	else {
		y = 0;
		for (int i = 1; i < 4; i++)
		{
			y += (1 * g * (x / i) + 1 * g * (x / i));
		}
	}
	return y;
}
int main()
{
	double res = tfzad();
	cout << " " << res;
	return 0;
}