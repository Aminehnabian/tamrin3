#include <iostream>
using namespace std;
int main()
{
	int a, b, temp;
	cout << "please enter number 1 : ";
	cin >> a;
	cout << "please enter number 2 : ";
	cin >> b;

	int x=a, y=b;
	while(b%a !=0)
	{
		temp = a%b;
		a = b;
		b = temp;
	}

	cout << "k.m.m : " << (x*y)/a;
	
	return 0;
}


