//bai165.cpp
#include <iostream>
using namespace std;

int GTLN(int);

int main()
{
	int n;
	cout << "Nhap so nguyen duong n = ";
	cin >> n;
	int kq = GTLN(n);
	cout << " K co gia tri lon nhat la: " << kq << endl;
	return 1;
}
int GTLN(int a)
{
	int T = 1;
	int k = 0;
	while (T < a)
	{
		T = T * 2;
		k = k + 1;
	}
	return k - 1;
}