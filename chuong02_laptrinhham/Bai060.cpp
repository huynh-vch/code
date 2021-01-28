//bai060.cpp
#include <iostream>
using namespace std;
int Tichcacchuso(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = Tichcacchuso(n);
	cout << "Tich cac chu so cua (" << n << ") la: " << kq << endl;
	;
	system("pause");
	return 1;
}
int Tichcacchuso(int k)
{
	int T = 1;
	int t = k;
	while (t != 0)
	{
		int dv = t % 10;
		T = T * dv;
		t = t / 10;
	}
	return T;
}