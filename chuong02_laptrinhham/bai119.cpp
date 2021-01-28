//bai119.cpp Tinh gia tri cua so hang
#include <iostream>
using namespace std;

float Giatrisohang(int);
int main()
{
	int n;
	cout << "nhap n = ";
	cin >> n;
	float kq = Giatrisohang(n);
	cout << "gia tri cua so hang a[" << n << "] la: " << kq << endl;
	return 1;
}
float Giatrisohang(int k)
{
	float at = 2;
	int i = 2;
	while (i <= k)
	{
		float aht = (float)((at * at + 2) / (2 * at));
		at = aht;
		i = i + 1;
	}
	return at;
}