//bai005.cpp
#include <iostream>
using namespace std;
float TheTich(float);

int main()
{
	float bk;
	cout << "Nhap ban kinh hinh cau bk: ";
	cin >> bk;
	float Kq = TheTich(bk);

	cout << "The tich hinh cau la: " << Kq << endl;
	system("pause");
	return 1;
}
float TheTich(float r)
{
	float TT = 0;
	TT = 4.0 / 3 * 3.141592 * r * r * r;
	return TT;
}