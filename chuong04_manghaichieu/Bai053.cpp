#include <iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool SoChinhPhuong(int);
int DemSoChinhPhuong(int[][100], int, int);

int main()
{
	int k;
	int l;
	int b[100][100];
	Nhap(b, k, l);
	cout << "\nMa tram ban dau la: \n";
	Xuat(b, k, l);
	cout << "\nSo cac gia tri chinh phuong trong ma tran la: ";
	int countChinhPhuong = DemSoChinhPhuong(b, k, l);
	cout << countChinhPhuong;
	return 0;
}

void Nhap(int a[][100], int& m, int& n)
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


bool SoChinhPhuong(int n)
{
	int i = 0;
	while (i * i <= n)
	{
		if (i * i == n)
		{
			return true;
		}
		++i;
	}
	return false;
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

int DemSoChinhPhuong(int a[][100], int m, int n)
{
	int count = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (SoChinhPhuong(a[i][j]))
			{
				count++;
			}

		}
	}
	return count;
}