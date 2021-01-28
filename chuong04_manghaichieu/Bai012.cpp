#include <iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void Nhap(int[][100], int&, int&);
void Xuat(int[][100], int, int);
bool SoNguyenTo(int);
void XuatGiaTriNguyenTo(int[][100], int, int);

int main()
{
	int k;
	int l;
	int b[100][100];
	Nhap(b, k, l);
	cout << "\nMa tram ban dau la: \n";
	Xuat(b, k, l);
	cout << "\nCac gia tri chinh phuong trong ma tran la: \n";
	XuatGiaTriNguyenTo(b, k, l);
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


bool SoNguyenTo(int n)
{
	if (n < 2) {
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

void XuatGiaTriNguyenTo(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (SoNguyenTo(a[i][j]))
			{
				cout << setw(7) << a[i][j];
			}

		}
	}
}