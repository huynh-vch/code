//bai002.cpp
#include <iostream>
using namespace std;

void Nhap(float &);
float dientich(float);

int main()
{
	float bk;
	cout << "Nhap ban kinh: ";
	Nhap(bk);
	float Kq = dientich(bk);
	cout << "Dien tich hinh tron la: " << Kq << endl;
	system("pause");
	return 1;
}
void Nhap(float &r)
{
	cin >> r;
}
float dientich(float r)
{
	float dt = 0;
	dt = 3.14 * r * r;
	return dt;
}
