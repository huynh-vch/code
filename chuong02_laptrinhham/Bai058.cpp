//bai058.cpp
#include <iostream>
using namespace std;
int Tongcacchuso(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = Tongcacchuso(n);
	cout << "Tong cac chu so cua (" << n << ") la: " << kq << endl;
	;
	system("pause");
	return 1;
}
int Tongcacchuso(int k)
{
	int S = 0;
	int t = k;
	while (t != 0)
	{
		int dv = t % 10;
		S = S + dv;
		t = t / 10;
	}
	return S;
}