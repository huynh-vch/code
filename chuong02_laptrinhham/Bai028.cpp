//bai028.cpp
#include <iostream>
using namespace std;
int Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int Kq = Tong(n);
	cout << "Tong S(" << n << ") la: " << Kq << endl;
	system("pause");
	return 1;
}
int Tong(int k)
{
	int S = 0;
	for (int i = 1; i <= k; i++)
	{
		S = S + i * i;
	}
	return S;
}