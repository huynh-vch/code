//bai106.cpp
#include <iostream>
using namespace std;

float Giatrihamsin(int);

int main()
{
	int x;
	cout << "Nhap x = ";
	cin >> x;
	float kq = Giatrihamsin(x);
	cout << "Gia tri cua sin(x) la: " << kq << endl;
	return 1;
}
float Giatrihamsin(int k)
{
	float sinX = 0;
	float T = k;
	float M = 1;
	float V = (float)T / M;
	int i = 1;
	int dau = 1;
	while (V > pow(10, -6))
	{
		sinX = sinX + V * dau;
		T = T * k * k;
		M = M * (i + 2) * (i + 1);
		V = (float)T / M;
		dau = dau * (-1);
		i = i + 2;
	}
	return sinX;
}