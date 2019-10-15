#include <iostream>
#include <iomanip>

using namespace std;
double xint(double a, double b, double c, double d, double e, double f);
double yint(double a, double b, double c, double d, double e, double f);

int main()
{
	double a, b, c;
	double x, y;
	
	cin >> a;
	cin >> b;
	cin >> c;

	double e, d, f;
	double w, k;

	cin >> e;
	cin >> d;
	cin >> f;

	cout << "The point of interception equals (" << xint(a, b, c, d, e, f) << "," << yint(a, b, c,d,e,f) << ")" << endl;

	system("pause");
	return 0;
}

double xint(double a, double b, double c, double d, double e, double f)
{
	double z;
	z = ((d*c) - (b*f)) / ((-(b*e)) + (d*a));

	return z;
}

double yint(double a, double b, double c, double d, double e, double f)
{
	
	double z = xint(a,b,c,d,e,f);
	double p;
	p = (-a / b)*z + (c / b);

	return p;

}
/*Will be updated once we get the rest of the code. It works with this input, we just need to see the clas structures 
and functions to alter our code to work in such a class structure.*/
