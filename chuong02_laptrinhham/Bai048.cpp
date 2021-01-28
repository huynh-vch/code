//bai048.cpp
#include <iostream>
using namespace std;
float Tong(float, int);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float Kq = Tong(x, n);
	cout << "Gia tri S( " << x << ", " << n << ") la: " << Kq << endl;
	system("pause");
	return 1;
}
float Tong(float y, int k)
{
	float S = y;
	for (int i = 1; i <= k; i++)
	{
		S = S * (y + i);
	}
	return S;
}