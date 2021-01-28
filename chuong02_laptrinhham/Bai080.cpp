//bai080.cpp
#include <iostream>
using namespace std;
long Tong(int, int);
int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	long kq = Tong(x, n);
	cout << "Tong S(" << x << "," << n << ") la: " << kq << endl;
	system("pause");
	return 1;
}
long Tong(int y, int k)
{
	long S = 1;
	int T = 1;
	for (int i = 1; i <= k; i++)
	{
		T = T * y;
		S = S + T * (i + 1);
	}
	return S;
}