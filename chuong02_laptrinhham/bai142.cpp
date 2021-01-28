//bai142.cpp
#include <iostream>
using namespace std;

int Sodaonguoc(int);

int main()
{
	int n;
	cout << "Nhap so nguyen duong n = ";
	cin >> n;
	int kq = Sodaonguoc(n);
	cout << "So dao nguoc cua so nguyen duong " << n << " la: " << kq << endl;
	return 1;
}
int Sodaonguoc(int k)
{
	int dn = 0;
	int t = k;
	while (t != 0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	return dn;
}