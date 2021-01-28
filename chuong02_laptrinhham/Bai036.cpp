//bai036.cpp
#include <iostream>
using namespace std;
float Luythua(float, int);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float Kq = Luythua(x, n);
	cout << "Gia tri T( " << x << "luy thua " << n << ") la: " << Kq << endl;
	system("pause");
	return 1;
}
float Luythua(float y, int k)
{
	float T = 1;
	for (int i = 1; i <= k; i++)
	{
		T = T * y;
	}
	return T;
}