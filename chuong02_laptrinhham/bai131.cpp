//bai131.cpp
#include <iostream>
using namespace std;

void Nhap(float &, float &, float &, float &, float &, float &);
float Dodaicanh(float, float, float, float);
void Xuat(float, float, float);

int main()
{
	float xA, yA, xB, yB, xC, yC;
	Nhap(xA, yA, xB, yB, xC, yC);
	float AB = Dodaicanh(xA, yA, xB, yB);
	float BC = Dodaicanh(xB, yB, xC, yC);
	float AC = Dodaicanh(xA, yA, xC, yC);
	Xuat(AB, BC, AC);
	return 1;
}
void Nhap(float &xA, float &yA, float &xB, float &yB, float &xC, float &yC)
{
	cout << "Toa do dinh A" << endl;
	cout << "Nhap xA = ";
	cin >> xA;

	cout << "Nhap yA = ";
	cin >> yA;

	cout << "Toa do dinh B" << endl;
	cout << "Nhap xB = ";
	cin >> xB;

	cout << "Nhap yB = ";
	cin >> yB;

	cout << "Toa do dinh C" << endl;
	cout << "Nhap xC = ";
	cin >> xC;

	cout << "Nhap yC = ";
	cin >> yC;
}
float Dodaicanh(float x1, float y1, float x2, float y2)
{
	float a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	return a;
}
void Xuat(float a, float b, float c)
{
	if ((abs(b - c) < a) && (a < b + c))
	{
		cout << "Day la ba dinh that su cua tam giac " << endl;
	}
	else
	{
		cout << "Day khong phai la ba dinh that su cua tam giac " << endl;
	}
}
