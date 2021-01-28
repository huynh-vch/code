//bai167.cpp
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
	int S = 0;
	int k = 0;
	while (S + k + 1 < a)
	{
		k = k + 1;
		S = S + k;
	}
	return k;
}
