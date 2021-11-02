#include <iostream>
using namespace std;

int main()
{
	int num, i, sw = 0;
	int fact = 1;
	cout << "please enter your number : ";
	cin >> num;
	
	for (i = 1; i <= num; i++)
	{
		fact = i * fact;
		if (fact == num)
		{
			cout << "yes";
			sw = 1;
			break;
		}
	}
	
	if(sw == 0)
	{
		cout << "no";
	}
}