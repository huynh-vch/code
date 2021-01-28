//bai024.cpp
#include <iostream>
using namespace std;
int Chusohangtram(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int kq = Chusohangtram(n);
	cout << "Chu so hang tram cua " << n << " la : " << kq << endl;
	system("pause");
	return 1;
}
int Chusohangtram(int t)
{
	int tr = 0;
	tr = (t / 100) % 10;
	return tr;
}