//bai163.cpp
#include <iostream>
using namespace std;

int UocLeLonNhat(int);

int main()
{
	int n;
	cout << "Nhap so nguyen n = ";
	cin >> n;
	int kq = UocLeLonNhat(n);
	cout << "Uoc so le lon nhat cua so nguyen duong " << n << " la: " << kq << endl;
	return 1;
}
int UocLeLonNhat(int k)
{
	int UL = k;
	while (UL % 2 == 0)
	{
		UL = UL / 2;
	}
	return UL;
}
