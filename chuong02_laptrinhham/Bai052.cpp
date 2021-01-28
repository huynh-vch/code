//bai052.cpp
#include <iostream>
using namespace std;
int Demsouoc(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = Demsouoc(n);
	cout << n << " co " << kq << " uoc so " << endl;
	system("pause");
	return 1;
}
int Demsouoc(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i++)
	{
		if (k % i == 0)
		{
			dem++;
		}
	}
	return dem;
}