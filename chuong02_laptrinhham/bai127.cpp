//bai127.cpp
#include <iostream>
using namespace std;

void Nhap(float &, float &);
float Giatrinhonhat(float, float);

int main()
{
	float a, b;
	Nhap(a, b);
	float kq = Giatrinhonhat(a, b);
	cout << "gia tri nho nhat la: " << kq << endl;
	return 1;
}
void Nhap(float &a, float &b)
{
	cout << "Nhap a = ";
	cin >> a;
	cout << "Nhap b = ";
	cin >> b;
}
float Giatrinhonhat(float x, float y)
{
	float lc = x;
	if (lc > y)
	{
		lc = y;
	}
	return lc;
}