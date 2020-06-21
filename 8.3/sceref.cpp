#include<iostream>
int main()
{
	using namespace std;
	int rats = 101;
	int& rodents = rats;

	cout << "rats = " << rats << ", rodents = " << rodents << endl;

	cout << "rats address = " << &rats
		<< ", rodents address = " << &rodents << endl;

	int bunnies = 50;
	rodents = bunnies;
	cout << "rats = " << rats << ", rodents = " << rodents << endl;

	cout << "bunnies address = " << &bunnies
		<< ", rodents address = " << &rodents << endl;
	return 0;
}