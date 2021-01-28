//bai056.cpp
#include <iostream>
using namespace std;
int Tonguocsochan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Cac uoc so chan cua " << n << " la: " << endl;
	int kq = Tonguocsochan(n);
	cout << "So luong cac uoc so chan cua " << n << " la: " << kq << endl;
	system("pause");
	return 1;
}
int Tonguocsochan(int k)
{
	int dem = 0;
	for (int i = 2; i <= k; i = i + 2)
	{
		if (k % i == 0)
		{
			dem++;
			cout << i << endl;
		}
	}
	return dem;
}