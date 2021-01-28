//bai151.cpp
#include <iostream>
using namespace std;

int CoHieu(int);
void Xuat(int, int);

int main()
{
	int n;
	cout << "Nhap so nguyen duong n = ";
	cin >> n;
	int kq = CoHieu(n);
	Xuat(kq, n);
	return 1;
}
int CoHieu(int k)
{
	int flag = 1;
	int t = k;
	while (t > 1)
	{
		int du = t % 2;
		if (du != 0)
		{
			flag = 0;
		}
		t = t / 2;
	}
	return flag;
}
void Xuat(int s, int c)
{
	if (s == 1)
	{
		cout << c << " la so nguyen duong co dang 2 mu m" << endl;
	}
	else
	{
		cout << c << " khong phai so nguyen duong co dang 2 mu m" << endl;
	}
}
