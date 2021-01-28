//bai049.cpp
#include <iostream>
using namespace std;
void Lietke(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Cac uoc so cua " << n << " la: " << endl;
	Lietke(n);
	system("pause");
	return 1;
}
void Lietke(int k)
{
	for (int i = 1; i <= k; i++)
	{
		if (k % i == 0)
		{
			cout << i << endl;
		}
	}
}