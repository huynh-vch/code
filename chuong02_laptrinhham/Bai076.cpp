//bai076.cpp
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
	float S = 1 + y;
	float T = y;
	float M = 1;
	for (int i = 3; i <= 2 * k + 1; i = i + 2)
	{
		T = T * y * y;
		M = M * (i - 1) * i;
		S = S + T / M;
	}
	return S;
}