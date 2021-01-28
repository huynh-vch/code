//bai129.cpp
#include <iostream>
using namespace std;

void Nhap(float &, float &, float &);
void Giatritangdan(float, float, float);

int main()
{
	float a, b, c;
	Nhap(a, b, c);
	Giatritangdan(a, b, c);
	return 1;
}
void Nhap(float &a, float &b, float &c)
{
	cout << "nhap a,b,c= " << endl;
	cin >> a;
	cin >> b;
	cin >> c;
}
void Giatritangdan(float x, float y, float z)
{
	float lc;
	if (x > y)
	{
		lc = x;
		x = y;
		y = lc;
	}
	if (x > z)
	{
		lc = x;
		x = z;
		z = lc;
	}
	if (y > z)
	{
		lc = y;
		y = z;
		z = lc;
	}
	cout << "Thu tu ba so thuc co gia tri tang dan la: " << x << " " << y << " " << z << endl;
}