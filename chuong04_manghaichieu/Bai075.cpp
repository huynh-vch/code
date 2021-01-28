#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(float[][100], int &, int &);
void Xuat(float[][100], int, int);
bool TonTaiDuong(float a[][100], int, int);
float SoDuongDauTien(float[][100], int, int);

int main()
{
	int k;
	int l;
	float b[100][100];
	Nhap(b, k, l);
	cout << "\nMa tram ban dau la: \n";
	Xuat(b, k, l);
	cout << "\nGia tri duong dau tien cua ma tran la: " << SoDuongDauTien(b, k, l);
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

bool TonTaiDuong(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > 0)
			{
				return true;
			}
		}
	}
	return false;
}

float SoDuongDauTien(float a[][100], int m, int n)
{
	if (TonTaiDuong(a, m, n))
	{
		for (int i = 0; i < m; i = i + 2)
		{
			for (int j = 0; j < n; j++)
			{
				if (a[i][j] > 0)
				{
					return a[i][j];
				}
			}
		}
	}
	else
	{
		return -1;
	}
}