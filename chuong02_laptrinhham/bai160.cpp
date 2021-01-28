//bai160.cpp
#include <iostream>
using namespace std;

int SLCSDT(int);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	int kq = SLCSDT(n);
	cout << "So luong chu so dau tien cua so nguyen duong " << n << " la: " << kq << endl;
	return 1;
}
int SLCSDT(int k)
{
	int T = k;
	int dem = 0;
	int dt;
	while (T != 0)
	{
		dt = T % 10;
		T = T / 10;
	}
	int X = k;
	while (X != 0)
	{
		int dx = X % 10;
		if (dx == dt)
		{
			dem = dem + 1;
		}
		X = X / 10;
	}
	return dem;
}