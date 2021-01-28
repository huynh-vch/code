//bai117.cpp Tinh gia tri cua so hang
#include <iostream>
using namespace std;

float Giatrisohang(int);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	float kq = Giatrisohang(n);
	cout << "Gia tri cua so hang thu " << n << " cua day la: " << kq << endl;
	return 1;
}
float Giatrisohang(int k)
{
	float att = -1;
	float at = 3;
	float T = 2;
	int i = 2;
	for (int i = 2; i <= k; i++)
	{
		T = T * 2;
		float ahh = 5 * T + 5 * at - att;
		att = at;
		at = ahh;
	}
	return at;
}