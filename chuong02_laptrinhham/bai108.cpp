//bai108.cpp
#include <iostream>
using namespace std;

float GiatriEX(float);

int main()
{
	float x;
	cout << "Nhap x = ";
	cin >> x;
	float kq = GiatriEX(x);
	cout << "Gia tri cua eX la: " << kq << endl;
	return 1;
}
float GiatriEX(float k)
{
	float eX = 1;
	float T = 1;
	float M = 1;
	float V = T / M;
	int i = 1;
	while (V > pow(10, -6))
	{
		T = T * k;
		M = M * i;
		V = T / M;
		eX = eX + V;
		i++;
	}
	return eX;
}