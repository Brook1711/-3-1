#include<iostream>
using namespace std;
int main()
{
	int VUL = 0, D = 0, n = 0, sum = 1;
	cin >> VUL >> D;
	if (VUL%D)
		n = VUL / D + 1;
	else
		n = VUL / D;
	int i = 2, interval = 0;
	while (sum<n)
	{
		interval++;
		sum += i;
		i++;
	}
	cout << n + interval;
}