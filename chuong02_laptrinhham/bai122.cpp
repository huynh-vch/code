//bai122.cpp
#include <iostream>
using namespace std;

void Giatrisohang(int);

int main()
{
	int n = 0;
	cout << "Nhap n = ";
	cin >> n;
	Giatrisohang(n);
	return 1;
}
void Giatrisohang(int k)
{
	float at = 1;
	float bt = 1;
	for (int i = 2; i <= k; i++)
	{
		float ahh = 3 * bt + 2 * at;
		float bhh = at + 3 * bt;
		at = ahh;
		bt = bhh;
	}
	cout << "Gia tri so hang thu " << k << " cua day so la: a= " << at << " b= " << bt << endl;
}