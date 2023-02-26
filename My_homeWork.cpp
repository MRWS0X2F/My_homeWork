#include<iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	
	for (int num = 1000;num < 10000;num++)
	{
		a = num % 10;
		b = num / 10 % 10;
		c = num / 100 % 10;
		d = num / 1000;
		if (d + b == 8 && c + a == 8 && d < c && num % 7 == 3)
		{
			cout << num << endl;
		}
	}

	system("pause");
	return 0;
}