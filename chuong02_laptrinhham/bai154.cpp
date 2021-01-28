//bai154.cpp
#include <iostream>
using namespace std;

void DSMD(int);

int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	DSMD(n);
	return 1;
}
void DSMD(int k)
{
	long at = k;
	long ahh;
	if (k >= 2)
	{
		cout << "Day so mua da cua " << k << " la: " << endl;
		cout << k << endl;
		while (at != 1)
		{
			if (at % 2 == 0)
			{
				ahh = at / 2;
				cout << ahh << endl;
				at = ahh;
			}
			else
			{
				ahh = 3 * at + 1;
				cout << ahh << endl;
				at = ahh;
			}
		}
	}
	else
	{
		cout << "Khong ton tai day so mua da voi so nguyen " << k << endl;
	}
}