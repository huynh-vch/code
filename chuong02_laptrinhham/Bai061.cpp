//bai061.cpp
#include <iostream>
using namespace std;
int Demcacchusole(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = Demcacchusole(n);

	cout << "So luong cac chu so le cua (" << n << ") la: " << kq << endl;
	;
	system("pause");
	return 1;
}
int Demcacchusole(int k)
{
	int dem = 0;
	int t = k;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 1)
			dem++;
		t = t / 10;
	}
	return dem;
}
