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
		if (a != 0 && b != 0 && c != 0 && d != 0){
			if (a != b && a != c && a != d && b != c && b != d && c != d) {
				if (d - a == b + c && (num + 1000 * b + 100 * a + 10 * d + c) % 101 == 0)
				{
					cout << num << "\t" << (num + 1000 * b + 100 * a + 10 * d + c) / 101 << endl;
				}
			}
		}
		/*
		* 9153    144
		* 9351    144
		*/
		//if (d + b == 8 && c + a == 8 && d < c && num % 7 == 3)
		//{
		//	cout << num << endl;
		//}
	}

	system("pause");
	return 0;
}