//Lab 5.1
#include <iostream>
#include <cmath>
using namespace std;

double f(const double a, const double b, const double c);

int main()
{
	double s=2.0, t=1.0;
	/*cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;*/

	double v = (f(1, pow(t, 2), s) + f(t, pow(s, 2), 1)) / (1 + pow(f(1, t * s, 1), 2));
	cout << "v = " << v << endl;

	return 0;
}
double f(const double a, const double b, const double c)
{
	return (pow(sin(a * b * c), 2)) / (a * a + b * b + c * c);
}