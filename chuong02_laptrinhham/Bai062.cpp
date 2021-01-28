//bai062.cpp
#include <iostream>
using namespace std;
int Tongcacchusochan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = Tongcacchusochan(n);
	cout << "Tong cac chu so chan cua (" << n << ") la: " << kq << endl;
	;
	system("pause");
	return 1;
}
int Tongcacchusochan(int k)
{
	int S = 0;
	int t = k;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			S = S + dv;
		t = t / 10;
	}
	return S;
}