//bai063.cpp
#include <iostream>
using namespace std;
int Tichcacchusole(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = Tichcacchusole(n);
	cout << "Tich cac chu so le cua (" << n << ") la: " << kq << endl;
	;
	system("pause");
	return 1;
}
int Tichcacchusole(int k)
{
	int T = 1;
	int t = k;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 1)
			T = T * dv;
		t = t / 10;
	}
	return T;
}