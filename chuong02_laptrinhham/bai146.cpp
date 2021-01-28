//bai146.cpp
#include <iostream>
using namespace std;

int SoDaoNguoc(int);
void SoDoiXung(int, int);

int main()
{
	int n;
	cout << "Nhap so nguyen duong n = ";
	cin >> n;
	float kq = SoDaoNguoc(n);
	SoDoiXung(kq, n);
	return 1;
}
int SoDaoNguoc(int k)
{
	int dn = 0;
	int t = k;
	while (t != 0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	return dn;
}
void SoDoiXung(int s, int m)
{

	if (s == m)
	{
		cout << m << " la so doi xung." << endl;
	}
	else
	{
		cout << m << " Khong phai la so doi xung." << endl;
	}
}