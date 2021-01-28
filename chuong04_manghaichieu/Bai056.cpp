#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[][100], int &, int &);
void Xuat(int[][100], int, int);
bool SoHoanThien(int);
int DemSoHoanThien(int[][100], int, int);

int main()
{
	int k;
	int l;
	int b[100][100];
	Nhap(b, k, l);
	cout << "\nMa tram ban dau la: \n";
	Xuat(b, k, l);
	cout << "\nSo cac gia tri hoan hao: ";
	int countHoanThien = DemSoHoanThien(b, k, l);
	cout << countHoanThien;
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
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			sum = sum + i;
		}
	}
	if (sum == n)
	{
		return true;
	}
	return false;
}

int DemSoHoanThien(int a[][100], int m, int n)
{
	int count = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (SoHoanThien(a[i][j]))
			{
				count++;
			}
		}
	}
	return count;
}