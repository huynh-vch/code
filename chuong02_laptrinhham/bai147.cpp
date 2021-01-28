//bai147.cpp
#include <iostream>
using namespace std;

float CoHieu(int);
void ToansoLe(int, int);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	float kq = CoHieu(n);
	ToansoLe(kq, n);
	return 1;
}
float CoHieu(int k)
{
	int flag = 1;
	int T = k;
	while (T != 0)
	{
		int dv = T % 10;
		if (dv % 2 == 0)
		{
			flag = 0;
		}
		T = T / 10;
	}
	return flag;
}
void ToansoLe(int a, int b)
{
	if (a == 1)
	{
		cout << b << " toan le.";
	}
	else
	{
		cout << b << " Khong toan le.";
	}
}