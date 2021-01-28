//bai059.cpp
#include <iostream>
using namespace std;
int Demsoluongcacchuso(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = Demsoluongcacchuso(n);
	cout << "So luong cac chu so cua (" << n << ") la: " << kq << endl;
	;
	system("pause");
	return 1;
}
int Demsoluongcacchuso(int k)
{
	int dem = 0;
	int t = k;
	while (t != 0)
	{
		dem++;
		t = t / 10;
	}
	return dem;
}
