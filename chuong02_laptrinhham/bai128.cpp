//bai128.cpp
#include <iostream>
using namespace std;

void Nhap(float &, float &);
void Giatritangdan(float, float);

int main()
{
	float a, b;
	Nhap(a, b);
	Giatritangdan(a, b);
	return 1;
}
void Nhap(float &a, float &b)
{
	cout << "Nhap a = ";
	cin >> a;
	cout << "Nhap b = ";
	cin >> b;
}
void Giatritangdan(float x, float y)
{
	if (x > y)
	{
		float temp = x;
		x = y;
		y = temp;
	}
	cout << "Gia tri tang dan la: " << x << " " << y << endl;
}
