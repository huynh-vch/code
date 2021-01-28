//bai120.cpp Tinh gia tri cua so hang
#include <iostream>
using namespace std;

float Giatrisohang(int);

int main()
{
	int n;
	cout << "nhap n = ";
	cin >> n;
	float kq = Giatrisohang(n);
	cout << "gia tri so hang thu a[" << n << "] la :" << kq << endl;
	return 1;
}
float Giatrisohang(int k)
{
	float at = 2;
	int i = 2;
	while (i <= k)
	{
		float aht = (float)(5 * at) + sqrt(24 * at * at - 8);
		at = aht;
		i = i + 1;
	}
	return at;
}