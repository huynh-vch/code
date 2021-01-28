//bai067.cpp
#include <iostream>
using namespace std;
int KiemTrasochan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = KiemTrasochan(n);
	if (kq == 1)
		cout << " (" << n << ") ton tai chu so le." << endl;
	else
		cout << " (" << n << ") khong ton tai chu so le." << endl;

	system("pause");
	return 1;
}
int KiemTrasochan(int k)
{
	int flag = 0;
	int t = k;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 1)
			flag = 1;
		t = t / 10;
	}
	return flag;
}