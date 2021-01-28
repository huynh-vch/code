//Bai167KyThuatXuLyMaTranCon
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[][100], int &, int &);
void Xuat(float[][100], int, int);
bool SoConToanDuong(float[][100], int, int, int, int);
void MaTranConToanDuongDauTien(float[][100], int, int, int &, int &);
void XuatMaTranCon(float[][100], int, int, int, int);

int main()
{
	int k;
	int l;
	float b[100][100];
	Nhap(b, k, l);
	cout << "\nMa tran ban dau la: \n";
	Xuat(b, k, l);

	int x, y;
	MaTranConToanDuongDauTien(b, k, l, x, y);

	if (x == -1)
	{
		cout << "\nKhong co ma tran con toan duong.";
	}
	else
	{
		cout << "\n Ma tran con dau tien toan duong: \n";
		XuatMaTranCon(b, k, l, x, y);
	}

	return 0;
}

void Nhap(float a[][100], int &m, int &n)
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
			a[i][j] = -100 + rand() / ((RAND_MAX) / 200.0);
		}
	}
}

void Xuat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(10) << fixed << setprecision(2) << a[i][j];
		}
		cout << endl;
	}
}

bool SoConToanDuong(float a[][100], int m, int n, int x, int y)
{
	for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			if (a[x + i][y + j] <= 0)
			{
				return false;
			}
		}
	}
	return true;
}

void MaTranConToanDuongDauTien(float a[][100], int m, int n, int &x, int &y)
{
	x = y = -1;

	for (int i = 0; i <= m - 3; i++)
	{
		for (int j = 0; j <= n - 3; j++)
		{
			if (SoConToanDuong(a, m, n, i, j))
			{
				x = i;
				y = j;
				return;
			}
		}
	}
}

void XuatMaTranCon(float a[][100], int m, int n, int x, int y)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << setw(10) << fixed << setprecision(2) << a[x + i][y + j];
		}
		cout << endl;
	}
}