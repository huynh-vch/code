//bai159.cpp
#include <iostream>
using namespace std;

int SLCSNN(int);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	int kq = SLCSNN(n);
	cout << "So luong chu so nho nhat cua so nguyen duong " << n << " la:" << kq << endl;
	return 1;
}
int SLCSNN(int k)
{
	int lc = k % 10;
	int T = k;
	int dem = 0;
	while (T != 0)
	{
		int dv = T % 10;
		if (dv < lc)
		{
			lc = dv;
		}
		T = T / 10;
	}
	int X = k;
	while (X != 0)
	{
		int dx = X % 10;
		if (dx == lc)
		{
			dem = dem + 1;
		}
		X = X / 10;
	}
	return dem;
}
