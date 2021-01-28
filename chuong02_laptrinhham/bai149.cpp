//bai149.cpp
#include <iostream>
using namespace std;

void Nhap(int &, int &);
int Uocchunglonnhat(int, int);

int main()
{
	int a, b;
	Nhap(a, b);
	int kq = Uocchunglonnhat(a, b);
	cout << "Uoc chung lon nhat cua " << a << " va " << b << " la " << kq << endl;
	return 1;
}

int Uocchunglonnhat(int x, int y)
{
	int m = abs(x);
	int n = abs(y);
	while ((m * n) != 0)
	{
		if (m > n)
		{
			m = m - n;
		}
		else
		{
			n = n - m;
		}
	}
	return m + n;
}
void Nhap(int &a, int &b)
{
	cout << "nhap a = ";
	cin >> a;
	cout << "nhap b = ";
	cin >> b;
}
