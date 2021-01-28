//bai055.cpp
#include <iostream>
using namespace std;
int Tichuocsole(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int i = 1;
	int T = 1;
	while (i <= n)
	{
		if (n % i == 0)
		{
			T = T * i;
		}
		i = i + 2;
	}
	cout << "Tich cac uoc so le cua " << n << " la: " << T << endl;
	system("pause");
	return 1;
}
int Tichuocsole(int k)
{
	int T = 1;
	for (int i = 1; i <= k; i = i + 2)
	{
		if (k % i == 0)
		{
			T = T * i;
		}
	}
	return T;
}