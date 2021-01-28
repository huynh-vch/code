//bai148.cpp
#include <iostream>
using namespace std;

float CoHieu(int);
void ToansoChan(int);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	float kq = CoHieu(n);
	ToansoChan(kq);
	return 1;
}
float CoHieu(int k)
{
	int flag = 1;
	int T = k;
	while (T != 0)
	{
		int dv = T % 10;
		if (dv % 2 == 1)
		{
			flag = 0;
		}
		T = T / 10;
	}
	return flag;
}
void ToansoChan(int a)
{
	if (a == 1)
	{
		cout << " toan chan.";
	}
	else
	{
		cout << " Khong toan chan.";
	}
}