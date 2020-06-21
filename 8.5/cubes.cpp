#include<iostream>
double cube(double a);
double refcube( const double& ra);
int main()
{
	using namespace std;
	double x = 3.0;
	cout << cube(x) << " cube of " << x << endl;

	cout << refcube(x) << " refcube of " << x << endl;
	return 0;
}
double cube(double a)
{
	a *= a * a;
	return a;
}
double refcube(const double& ra)
{
	double A;
	A = pow(ra, 3);
	return A;
}