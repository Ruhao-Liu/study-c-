#include<iostream>
void swapr(int& a, int& b);
void swapp(int* p, int* q);
void swapv(int a, int b);
int main()
{
	using namespace std;
	int wallet1 = 300;
	int wallet2 = 350;

	cout << "wallet1 = $" << wallet1
		<< " wallet2 = $" << wallet2 << endl;
	cout << "wallet1 address = " << &wallet1
		<< " wallet2 address = " << &wallet2 << endl;

	/*cout << "Using references to swap contents:" << endl;
	swapr(wallet1, wallet2);
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;
	cout << "wallet1 address = " << &wallet1
		<< " wallet2 address = " << &wallet2 << endl;*/


	/*cout << "Using pointer to swap contents:" << endl;
	swapp(&wallet1, &wallet2);
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;
	cout << "wallet1 address = " << &wallet1
		<< " wallet2 address = " << &wallet2 << endl;*/

	cout << "Trying to use passing by value:" << endl;
	swapv(wallet1, wallet2);
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;
	cout << "wallet1 address = " << &wallet1
		<< " wallet2 address = " << &wallet2 << endl;
}
void swapr(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void swapp(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void swapv(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;

}