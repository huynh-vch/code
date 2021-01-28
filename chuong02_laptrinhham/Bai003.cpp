//bai003.cpp
#include <iostream>
using namespace std;

void Nhap(float &);
float chuvi(float);

int main()
{
	float bk;
	cout << "Nhap ban kinh: ";
	Nhap(bk);
	float Kq = chuvi(bk);
	cout << "Chu vi hinh tron la: " << Kq << endl;
	system("pause");
	return 1;
}
void Nhap(float &r)
{
	cin >> r;
}
float chuvi(float r)
{
	float cv = 0;
	cv = 2 * 3.141592 * r;
	return cv;
}
