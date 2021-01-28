//bai064.cpp
#include <iostream>
using namespace std;
int Chusolonnhat(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = Chusolonnhat(n);
	cout << "Chu so lon nhat cua (" << n << ") la: " << kq << endl;
	system("pause");
	return 1;
}
int Chusolonnhat(int k)
{
	int lc = k % 10;
	int t = k;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv > lc)
			lc = dv;
		t = t / 10;
	}
	return lc;
}