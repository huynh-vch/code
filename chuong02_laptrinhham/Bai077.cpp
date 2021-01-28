//bai077.cpp
#include <iostream>
using namespace std;
long Tong(int, int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int k;
	cout << "Nhap k: ";
	cin >> k;
	long kq = Tong(n, k);

	cout << "Tong S(" << n << "," << k << ") la: " << kq << endl;
	system("pause");
	return 1;
}
long Tong(int m, int y)
{
	long S = 0;
	for (int i = 1; i <= m; i++)
	{
		S = S + pow(i, y);
	}
	return S;
}