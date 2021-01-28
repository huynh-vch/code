//bai130.cpp
#include <iostream>
using namespace std;

void Nhap(float &, float &, float &);
void Xuat(float, float, float);

int main()
{
	float x, y, z;
	Nhap(x, y, z);
	Xuat(x, y, z);
	return 1;
}
void Nhap(float &x, float &y, float &z)
{
	cout << "nhap x= ";
	cin >> x;
	cout << "nhap y= ";
	cin >> y;
	cout << "nhap z= ";
	cin >> z;
}
void Xuat(float a, float b, float c)
{
	if ((a < b + c) & (b < c + a) & (c < a + b))
	{
		cout << "Ton tai tam giac co do dai ba canh " << a << " "
			 << " " << b << " " << c << endl;
	}
	else
	{
		cout << "Khong ton tai tam giac co do dai ba canh " << a << " " << b << " " << c << endl;
	}
}