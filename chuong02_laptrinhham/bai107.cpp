//bai107.cpp
#include <iostream>
using namespace std;

float Giatrihamcos(int);

int main()
{
	int x;
	cout << "Nhap x = ";
	cin >> x;
	float kq = Giatrihamcos(x);
	cout << "Gia tri cua cos(x) la: " << kq << endl;
	return 1;
}
float Giatrihamcos(int k)
{
	float cosX = 0;
	float T = 1;
	float M = 1;
	float V = (float)T / M;
	int i = 1;
	int dau = 1;
	while (V > pow(10, -6))
	{
		cosX = cosX + V * dau;
		T = T * k * k;
		M = M * i * (i + 1);
		V = (float)T / M;
		dau = dau * (-1);
		i = i + 2;
	}
	return cosX;
}