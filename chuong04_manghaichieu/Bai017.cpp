#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[][100], int &, int &);
void Xuat(int[][100], int, int);
bool SoHoanThien(int);
void XuatGiaTriHoanThienTrenDong(int[][100], int, int, int);

int main()
{
	int k;
	int l;
	int b[100][100];
	Nhap(b, k, l);
	cout << "\n Ma tram ban dau la: \n";
	Xuat(b, k, l);
	int x;
	cout << "Nhap dong muon xuat: ";
	cin >> x;
	cout << "\n Cac gia tri co dang 3^m tren dong: \n";
	XuatGiaTriHoanThienTrenDong(b, k, l, x);
	return 0;
}

void Nhap(int a[][100], int &m, int &n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	srand(std::time(nullptr));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = (rand() % 200 - 100);
		}
	}
}

void Xuat(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(7) << a[i][j];
		}
		cout << endl;
	}
}

bool SoHoanThien(int n)
{
	int sum = 0;
	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
			sum += i;
	}
	if (sum == n)
		return true;
	return false;
}

void XuatGiaTriHoanThienTrenDong(int a[][100], int m, int n, int x)
{

	for (int j = 0; j < n; j++)
	{
		if (SoHoanThien(a[x][j]))
		{
			cout << setw(7) << a[x][j];
		}
	}
}