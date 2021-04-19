#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
	cin >> a[i];
	for(int i = 0; i < n-3; i++)
	{
		for(int j = i; j < n-2; j++)
		{
			for(int k = j; k < n-1; k++)
			if(a[i] + a[j] + a[k] == 0)
			{
			cout << a[i] << " and " << a[j] << " and " << a[k] << endl;
			exit(0);
		}
		}
	}
	return 0;  
} 
