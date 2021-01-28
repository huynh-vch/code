//bai141.cpp
#include <iostream>
using namespace std;

int Sodautien(int);

int main()
{
	int dt, n;
	cout << " nhap n = ";
	cin >> n;
	float kq = Sodautien(n);
	cout << "so dau tien la " << kq << endl;
	return 1;
}
int Sodautien(int k)
{
	int dt;
	dt = abs(k);
	while (dt >= 10)
	{
		dt = dt / 10;
	}
	return dt;
}