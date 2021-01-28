//bai115.cpp Tinh gia tri cua so hang
#include <iostream>
using namespace std;

float Giatrisohang(int);

int main()
{
	int n;
	cout << "Nhap n = ";
	cin >> n;
	float kq = Giatrisohang(n);
	cout << "Gia tri cua so thang thu " << n << " cua day la: " << kq << endl;
	return 1;
}
float Giatrisohang(int k)
{
	float att = -1;
	float at = 3;
	int i = 2;
	while (i <= k)
	{
		float ahh = 5 * at + 6 * att;
		att = at;
		at = ahh;
		i = i + 1;
	}
	return at;
}