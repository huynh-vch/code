#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[][100], int &, int &);
void Xuat(int[][100], int, int);
bool SoNguyenTo(int);
int TongCacGiaTriNguyenTo(int[][100], int, int);

int main()
{
	int k;
	int l;
	int b[100][100];
	Nhap(b, k, l);
	cout << "\nMa tram ban dau la: \n";
	Xuat(b, k, l);
	cout << "\nTong cac so nguyen to: \n";
	int kq = TongCacGiaTriNguyenTo(b, k, l);
	cout << kq;
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

bool SoNguyenTo(int n)
{
	if (n < 2)
	{
		return false;
	}
	int count = 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			count++;
		}
	}
	if (count == 0)
	{
		return true;
	}
	else
	{
		return false;
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

int TongCacGiaTriNguyenTo(int a[][100], int m, int n)
{
	int s = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (SoNguyenTo(a[i][j]))
			{
				s = s + a[i][j];
			}
		}
	}
	return s;
}