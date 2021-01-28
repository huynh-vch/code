//bai004.cpp
#include <iostream>
using namespace std;
float DTXQ(float);

int main()
{
	float bk;
	cout << "Nhap ban kinh hinh cau bk: ";
	cin >> bk;
	float Kq = DTXQ(bk);
	cout << "Dien tich xung quanh hinh cau la: " << Kq << endl;
	system("pause");
	return 1;
}
float DTXQ(float r)
{
	float dtxq = 0;
	dtxq = 4 * 3.141592 * r * r;
	return dtxq;
}