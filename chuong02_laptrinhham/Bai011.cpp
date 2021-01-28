//bai011.cpp
#include <iostream>
using namespace std;
float Kc(float, float, float, float);

int main()
{
	float x1, y1, x2, y2, x3, y3;
	cout << "Nhap toa do 3 diem A, B, C: " << endl;
	cout << "Nhap x1: ";
	cin >> x1;
	cout << "Nhap y1: ";
	cin >> y1;
	cout << "Nhap x2: ";
	cin >> x2;
	cout << "Nhap y2: ";
	cin >> y2;
	cout << "Nhap x3: ";
	cin >> x3;
	cout << "Nhap y3: ";
	cin >> y3;

	float a = Kc(x1, y1, x2, y2);
	float b = Kc(x2, y2, x3, y3);
	float c = Kc(x3, y3, x1, y1);
	float p = 0.5 * (a + b + c);
	float S = sqrt((p * (p - a) * (p - b) * (p - c)));
	cout << "Dien tich tam giac la: " << S << endl;
	system("pause");
	return 1;
}
float Kc(float x1, float y1, float x2, float y2)
{
	float d = 0;
	d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	return d;
}