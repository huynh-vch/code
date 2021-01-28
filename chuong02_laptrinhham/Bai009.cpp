//bai009.cpp
#include <iostream>
using namespace std;
float Dientich(float, float);

int main()
{
	float r;
	cout << "Nhap ban kinh hinh tron r: ";
	cin >> r;
	float n;
	cout << "Nhap so canh da giac deu n: ";
	cin >> n;

	float Kq = Dientich(r, n);
	cout << "Dien tich la: " << Kq << endl;
	system("pause");
	return 1;
}
float Dientich(float r, float n)
{
	float s = 0;
	s = 0.5 * n * r * r * sin(2 * 3.141592 / n);
	return s;
}