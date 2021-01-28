//bai166.cpp
#include <iostream>
using namespace std;

int GTNN(int);

int main()
{
	int n;
	cout << "Nhap so nguyen duong n = ";
	cin >> n;
	int kq = GTNN(n);
	cout << " K co gia tri nho nhat la: " << kq << endl;
	return 1;
}
int GTNN(int a)
{
	int T = 1;
	int k = 0;
	while (T <= a)
	{
		T = T * 2;
		k = k + 1;
	}
	return k;
}
