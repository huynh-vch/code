//bai152.cpp
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
		int du = t % 3;
		if (du != 0)
		{
			flag = 0;
		}
		t = t / 3;
	}
	return flag;
}
void Xuat(int a, int b)
{
	if (a == 1)
	{
		cout << b << " la so nguyen duong co dang 3 mu m" << endl;
	}
	else
	{
		cout << b << " khong phai so nguyen duong co dang 3 mu m" << endl;
	}
}