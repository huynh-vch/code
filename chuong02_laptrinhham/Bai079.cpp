//bai079.cpp
#include <iostream>
using namespace std;
long Tong(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	long kq = Tong(n);
	cout << "Tong S(" << n << ") la: " << kq << endl;
	system("pause");
	return 1;
}
long Tong(int k)
{
	long S = 0;
	int T = 1;
	for (int i = 1; i <= k; i++)
	{
		T = T * i;
		S = S + i * T;
	}
	return S;
}
