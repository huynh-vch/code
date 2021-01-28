//bai051.cpp
#include <iostream>
using namespace std;
int Tich(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = Tich(n);
	cout << "Tich tat ca cac uoc so cua " << n << " la: " << kq << endl;
	system("pause");
	return 1;
}
int Tich(int k)
{
	int T = 1;
	for (int i = 1; i <= k; i++)
		if (k % i == 0)
		{
			T = T * i;
		}
	return T;
}