#include <iostream>
using namespace std;

int main()
{
	cout << "Bai 061: Dem so luong cac chu so le cua so nguyen duong n: " << endl;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int dem = 0;
	int t = n;
	cout << "Cac chu so le cua so nguyen duong cua n la:" << t << endl;
	while (t != 0)
	{
		int dv = t / 10;
		if ((dv % 2) != 0)
		{
			dem = dem++;
		}
		t = t / 10;
	}
	cout << "So luong chu so le cua so nguyen duong n la: " << dem << endl;

	system("pause");
	return 1;
}