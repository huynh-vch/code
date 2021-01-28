//bai074.cpp
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
	float M = 1;
	for (int i = 1; i <= k; i++)
	{
		T = T * y;
		M = M * i;
		S = S + T / M;
	}
	return S;
}