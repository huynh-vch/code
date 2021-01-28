//bai139.cpp
#include <iostream>
using namespace std;

void Nhap(float &, float &);
void Phuongtrinhbacnhat(float, float);

int main()
{
	float a, b;
	Nhap(a, b);
	Phuongtrinhbacnhat(a, b);
	return 1;
}
void Nhap(float &a, float &b)
{
	cout << "nhap a = ";
	cin >> a;
	cout << "nhap b = ";
	cin >> b;
}
void Phuongtrinhbacnhat(float g, float h)
{
	float x;
	if (g == 0)
	{
		if (h == 0)
		{
			cout << "Phuong trinh co vo so nghiem";
		}
		else
		{
			cout << "Phuong trinh vo nghiem";
		}
	}
	else
	{
		x = (float)(-1) * h / g;
		cout << "Phuong trinh co nghiem x= " << x << endl;
	}
}