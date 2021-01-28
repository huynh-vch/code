//bai001.cpp
#include <iostream>
using namespace std;
float KC(float, float, float, float);

int main()
{
	float a, b, m, n;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap m: ";
	cin >> m;
	cout << "Nhap n: ";
	cin >> n;
	float sum = KC(a, b, m, n);
	cout << "Khoang cach giua 2 diem la: " << sum << endl;
	system("pause");
	return 1;
}
float KC(float x1, float y1, float x2, float y2)
{
	float d = 0;
	d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	return d;
}