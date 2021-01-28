//bai133.cpp
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
	if ((a + b > c) & (b + c > a) & (a + c > b))
	{
		if ((a == b) & (b == c))
		{
			cout << a << " va " << b << " va " << c << " la do dai ba canh cua tam giac deu" << endl;
		}
		else
		{
			if ((a == b) || (b == c) || (c == a))
			{
				if ((a * a + b * b == c * c) || (b * b + c * c == a * a) || (a * a + c * c == b * b))
				{
					cout << a << " va " << b << " va " << c << " la do dai ba canh cua tam giac vuong can" << endl;
				}
				else
				{
					cout << a << " va " << b << " va " << c << " la do dai ba canh cua tam giac can " << endl;
				}
			}
			else
			{
				if ((a * a + b * b == c * c) || (b * b + c * c == a * a) || (a * a + b * b == c * c))
				{
					cout << a << " va " << b << " va " << c << " la do dai ba canh cua tam giac vuong " << endl;
				}
				else
				{
					cout << a << " va " << b << " va " << c << " la do dai ba canh cua tam giac thuong " << endl;
				}
			}
		}
	}
	else
	{
		cout << a << " va " << b << " va " << c << " Khong phai la do dai ba canh cua tam giac" << endl;
	}
}