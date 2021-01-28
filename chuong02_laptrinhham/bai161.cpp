//bai161.cpp
#include <iostream>
using namespace std;

int CoHieu(int);
void GTTD(int, int);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	int kq = CoHieu(n);
	GTTD(kq, n);
	return 1;
}
int CoHieu(int k)
{
	int flag = 1;
	int t = k;
	int lc = k % 10;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv <= lc)
		{
			lc = dv;
		}
		else
		{
			flag = 0;
		}
		t = t / 10;
	}
	return flag;
}
void GTTD(int a, int b)
{
	if (a == 1)
	{
		cout << b << " co cac chu so tang dan tu trai sang phai" << endl;
	}
	else
	{
		cout << b << " khong co cac chu so tang dan tu trai sang phai" << endl;
	}
}