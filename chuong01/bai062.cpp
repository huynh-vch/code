#include <iostream>
using namespace std;

int main()
{
	int n;
	int s = 0, temp;
	cout << "Nhap so nguyen:";
	cin >> n;
	while (n != 0)
	{
		temp = n % 10;
		if (temp % 2 == 0)
			s += temp;
		n /= 10;
	}
	cout << "Tong cac chu so chan cua so nguyen la:" << s;

	system("pause");
	return 0;
}