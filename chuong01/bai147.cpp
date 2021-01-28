#include <iostream>
using namespace std;

#include <cmath>
int main()
{
	int n;
	cout << " Nhap vao so n =";
	cin >> n;

	int t = n, k;
	bool flag = true;
	while (t != 0)
	{
		k = t % 10;
		if (k % 2 == 0)
		{
			flag = false;
		}
		t = t / 10;
	}

	if (flag == 1)
	{
		cout << "so toan le";
	}
	else
		cout << "so khong phai toan le";

	system("pause");
	return 1;
}
