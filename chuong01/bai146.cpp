#include <iostream>
using namespace std;

#include <cmath>
int main()
{
	int n;
	cout << " Nhap vao so n =";
	cin >> n;
	int dx = 0, t = n, dv;
	while (t != 0)
	{
		dv = t % 10;
		dx = dx * 10 + dv;
		t = t / 10;
	}

	if (dx == n)
	{
		cout << " n la so doi xung";
	}
	else
		cout << " n khong phai la so doi xung";
	cout << endl;

	system("pause");
	return 1;
}
