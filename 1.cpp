#include <iostream>

using namespace std;
int main()
{
	int m;
	cout << "please enter the m : " ;
	cin >> m;
	
	int n;
	cout << "please enter the n : " ;
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		if(i % 2 == 0)
		{
			for(int j = 1; j <= m; j++)
			{
				if(j % 2 == 0)
				{
					cout << "#";
				}
				else
				{
					cout << "*";
				}
			}
			cout <<"\n";
		}
		else
		{
			for(int j = 1; j <= m; j++)
			{
				if(j % 2 == 0)
				{
					cout << "*";
				}
				else
				{
					cout << "#";
				}
			}
			cout << "\n";
		}
	}
	return 0;
}