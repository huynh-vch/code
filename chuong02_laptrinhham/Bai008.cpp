//bai008.cpp
#include <iostream>
using namespace std;
float Chuvi(float, int);

int main()
{
	float r;
	cout << "Nhap ban kinh hinh tron r: ";
	cin >> r;
	int n;
	cout << "Nhap so canh da giac deu n: ";
	cin >> n;

	float Kq = Chuvi(r, n);
	cout << "Chu vi la: " << Kq << endl;
	system("pause");
	return 1;
}
float Chuvi(float r, int n)
{
	float cv = 0;
	cv = 2 * n * r * sin(3.141592 / n);
	return cv;
}