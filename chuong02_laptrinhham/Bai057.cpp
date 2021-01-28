//bai057.cpp
#include <iostream>
using namespace std;
int Tongcacuocso(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Cac uoc so nho hon " << n << " la: " << endl;
	int kq = Tongcacuocso(n);
	cout << "Tong cac uoc so nho hon " << n << " la: " << kq << endl;
	system("pause");
	return 1;
}
int Tongcacuocso(int k)
{
	int S = 0;
	for (int i = 1; i < k; i++)
	{
		if (k % i == 0)
		{
			S = S + i;
			cout << i << endl;
		}
	}
	return S;
}