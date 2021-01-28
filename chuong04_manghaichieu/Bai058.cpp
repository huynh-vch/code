#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[][100], int &, int &);
void Xuat(int[][100], int, int);
bool SoDang2m(int);
int DemGiaTriDang2m(int[][100], int, int);

int main()
{
	int k;
	int l;
	int b[100][100];
	Nhap(b, k, l);
	cout << "\nMa tram ban dau la: \n";
	Xuat(b, k, l);
	cout << "\nCac gia tri co dang 2^m trong ma tran la: \n";
	cout << DemGiaTriDang2m(b, k, l);
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

bool SoDang2m(int n)
{
	for (int i = 0; i < n; i++)
	{
		if (pow(2, i) == n)
		{
			return true;
		}
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

int DemGiaTriDang2m(int a[][100], int m, int n)
{
	int count = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (SoDang2m(a[i][j]) == true)
			{
				count++;
			}
		}
	}
	return count;
}