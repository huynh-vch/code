//bai140.cpp
#include <iostream>
using namespace std;

void Nhap(float &, float &, float &);
void Phuongtrinhbachai(float, float, float);

int main()
{
	cout << "Phuong trinh bac 2: a*(x*x) + b*x + c = 0" << endl;
	float a, b, c;
	Nhap(a, b, c);
	Phuongtrinhbachai(a, b, c);
	return 1;
}
void Nhap(float &a, float &b, float &c)
{
	cout << "Nhap lan luot a, b, c: " << endl;
	cin >> a >> b >> c;
}
void Phuongtrinhbachai(float d, float e, float f)
{
	float x1, x2, dt;
	dt = (float)(e * e) - (4 * d * f);
	if (dt != 0)
	{
		if (dt > 0)
		{
			x1 = (float)(((-1) * e + sqrt(dt)) / (2 * d));
			x2 = (float)(((-1) * e - sqrt(dt)) / (2 * d));
			cout << "Phuong trinh co 2 nghiem la: " << x1 << " va " << x2 << endl;
		}
		else
		{
			cout << "Phuong trinh vo nghiem";
		}
	}
	else
	{
		x1 = x2 = (float)((-1) * e / 2 * d);
		cout << "Phuong trinh co nghiem kep x1 = x2 =" << x1 << endl;
	}
}