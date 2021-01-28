//bai087.cpp
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
	int dau = -1;
	for (int i = 1; i <= k; i++)
	{
		T = T * y * y;
		S = S + dau * T;
		dau = -dau;
	}
	return S;
}
