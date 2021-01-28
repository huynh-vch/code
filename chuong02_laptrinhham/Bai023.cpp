//bai023.cpp
#include <iostream>
using namespace std;
int Chusohangchuc(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = Chusohangchuc(n);
	cout << "Chu so hang chuc cua " << n << " la : " << kq << endl;
	system("pause");
	return 1;
}
int Chusohangchuc(int t)
{
	int ch = 0;
	ch = (t / 10) % 10;
	return ch;
}