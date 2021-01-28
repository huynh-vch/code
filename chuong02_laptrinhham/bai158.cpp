//bai158.cpp
#include <iostream>
using namespace std;

int SLCSLN(int);

int main()
{
	int n;
	cout << "Nhap so nguyen duong n = ";
	cin >> n;
	float kq = SLCSLN(n);
	cout << "So luong chu so lon nhat cua so nguyen duong " << n << " la: " << kq << endl;
	return 1;
}
int SLCSLN(int k)
{
	int T = k;
	int lc = T % 10;
	int dem = 0;
	while (T != 0)
	{
		int dv = T % 10;
		if (dv > lc)
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