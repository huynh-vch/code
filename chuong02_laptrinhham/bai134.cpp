//bai134.cpp
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
	cout << "Nhap x = ";
	cin >> x;
	cout << "Nhap y = ";
	cin >> y;
	cout << "Nhap z = ";
	cin >> z;
}
void Xuat(float a, float b, float c)
{
	if ((a <= b) & (b <= c))
	{
		cout << "Bat dang thuc dung.";
	}
	else
	{
		cout << "Bat dang thuc khong dung.";
	}
}