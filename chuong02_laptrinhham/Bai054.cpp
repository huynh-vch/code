//bai054.cpp
#include <iostream>
using namespace std;
int Tonguocsochan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = Tonguocsochan(n);
	cout << "Tong cac uoc so chan cua " << n << " la: " << kq << endl;
	system("pause");
	return 1;
}
int Tonguocsochan(int k)
{
	int S = 0;
	for (int i = 2; i <= k; i = i + 2)
	{
		if (k % i == 0)
		{
			S = S + i;
		}
	}
	return S;
}