//bai070.cpp
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
	float S = 0;
	float T = 1;
	for (int i = 2; i <= 2 * k; i = i + 2)
	{
		T = T * y * y;
		S = S + T;
	}
	return S;
}
