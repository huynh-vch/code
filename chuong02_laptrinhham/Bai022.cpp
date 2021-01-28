//bai022.cpp
#include <iostream>
using namespace std;
int Dv(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = Dv(n);
	cout << "Chu so hang don vi cua " << n << " la : " << kq << endl;
	system("pause");
	return 1;
}
int Dv(int t)
{
	int dv = 0;
	dv = t % 10;
	return dv;
}