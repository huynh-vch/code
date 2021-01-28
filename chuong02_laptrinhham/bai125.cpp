//bai125.cpp
#include <iostream>
using namespace std;

void Nhap(float &, float &);
void Xuat(float, float);

int main()
{
	float a, b;
	Nhap(a, b);
	Xuat(a, b);
	return 1;
}
void Nhap(float &a, float &b)
{
	cout << "Nhap a = ";
	cin >> a;
	cout << "Nhap b = ";
	cin >> b;
}
void Xuat(float x, float y)
{
	if (x < 0)
	{
		x = abs(x);
	}
	if (y < 0)
	{
		y = abs(y);
	}
	cout << "Ket qua sau khi thay cac gia tri am bang tri tuyet doi neu co: a = " << x << "; b = " << y << endl;
}
