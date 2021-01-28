//bai118.cpp Tinh gia tri cua so hang
#include <iostream>
using namespace std;

float Giatrisohang(int);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	float kq = Giatrisohang(n);
	cout << "Gia tri so hang thu " << n << " cua day la: " << kq << endl;
	return 1;
}
float Giatrisohang(int k)
{
	float at = 2;
	for (int i = 2; i <= k; i++)
	{
		float ahh = (-9 * at - 24) / (5 * at + 13);
		at = ahh;
	}
	return at;
}