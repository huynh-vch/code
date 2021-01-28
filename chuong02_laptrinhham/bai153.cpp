//bai153.cpp
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
	int T = k;
	while (T > 1)
	{
		int du = T % 5;
		if (du != 0)
		{
			flag = 0;
		}
		T = T / 5;
	}
	return flag;
}
void Xuat(int a, int b)
{
	if (a == 1)
	{
		cout << b << " co dang 5 mu m" << endl;
	}
	else
	{
		cout << b << " khong co dang 5 mu m" << endl;
	}
}