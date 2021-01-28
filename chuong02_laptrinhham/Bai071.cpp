//bai071.cpp
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
	float kq = Tong(x, n);

	cout << "Tong S(" << x << "," << n << ") la: " << kq << endl;
	system("pause");
	return 1;
}
float Tong(float y, int k)
{
	float S = y;
	float T = y;
	for (int i = 3; i <= 2 * k + 1; i = i + 2)
	{
		T = T * y * y;
		S = S + T;
	}
	return S;
}