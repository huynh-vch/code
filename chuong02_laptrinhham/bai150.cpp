//bai150.cpp
#include <iostream>
using namespace std;

void Nhap(int &, int &);
int Boichungnhonhat(int, int);

int main()
{
	int a, b;
	Nhap(a, b);
	float kq = Boichungnhonhat(a, b);
	cout << "Boi chung nho nhat cua hai so nguyen " << a << " va " << b << " la: " << kq << endl;
	return 1;
}
void Nhap(int &a, int &b)
{
	cout << "Nhap a = ";
	cin >> a;
	cout << "Nhap b = ";
	cin >> b;
}
int Boichungnhonhat(int x, int y)
{
	int m = abs(x);
	int n = abs(y);
	int kq;
	while (m * n != 0)
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
	return abs(x * y) / (m + n);
}