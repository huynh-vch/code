//bai053.cpp
#include <iostream>
using namespace std;
int Lietkeuocsole(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Cac uoc so le cua " << n << " la: " << endl;
	int kq = Lietkeuocsole(n);
	system("pause");
	return 1;
}
int Lietkeuocsole(int k)
{
	int dem = 0;
	for (int i = 1; i <= k; i = i + 2)
	{
		if (k % i == 0)
		{
			cout << i << endl;
		}
	}
	return dem;
}
