//Bai144KyThuatXOa
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[][100], int &, int &);
void Xuat(int[][100], int, int);
bool SoNguyenTo(int);
bool SoChinhPhuong(int);
bool DongTonTaiChinhPhuongNguyenTo(int[][100], int, int, int);
void XoaMotDong(int[][100], int &, int, int);
void XoaDongChinhPhuongNguyenTo(int[][100], int &, int);

int main()
{
	int k;
	int l;
	int b[100][100];
	Nhap(b, k, l);
	cout << "\nMa tran ban dau la: \n";
	Xuat(b, k, l);

	cout << "\nMa tran sau khi bo dong co so nguyen to va so chinh phuong: \n";
	XoaDongChinhPhuongNguyenTo(b, k, l);
	Xuat(b, k, l);
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

bool SoChinhPhuong(int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i * i == n)
		{
			return true;
		}
	}
	return false;
}

bool SoNguyenTo(int n)
{
	int count = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			count++;
		}
	}
	if (count == 2)
	{
		return true;
	}
	return false;
}

bool DongTonTaiChinhPhuongNguyenTo(int a[][100], int m, int n, int x)
{
	int SoChinhPhuongExist = 0;
	int SoNguyenToExist = 0;
	for (int j = 0; j < n; j++)
	{
		if (SoChinhPhuong(a[x][j]))
		{
			SoChinhPhuongExist = 1;
		}
		if (SoNguyenTo(a[x][j]))
		{
			SoNguyenToExist = 1;
		}
	}
	if (SoNguyenToExist == 1 && SoChinhPhuongExist == 1)
	{
		return true;
	}
	return false;
}

void XoaMotDong(int a[][100], int &m, int n, int x)
{
	for (int i = x; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = a[i + 1][j];
		}
	}
	m = m - 1;
}

void XoaDongChinhPhuongNguyenTo(int a[][100], int &m, int n)
{
	for (int i = 0; i < m; i++)
	{
		if (DongTonTaiChinhPhuongNguyenTo(a, m, n, i))
		{
			XoaMotDong(a, m, n, i);
		}
	}
}