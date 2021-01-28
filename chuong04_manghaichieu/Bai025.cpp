#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

void Nhap(int[][100], int &, int &);
void Xuat(int[][100], int, int);
bool TonTaiLe(int[][100], int, int);
int TichGiaTriLeDongChan(int[][100], int, int);

int main()
{
	int k;
	int l;
	int b[100][100];
	Nhap(b, k, l);
	cout << "\nMa tram ban dau la: \n";
	Xuat(b, k, l);
	cout << "\nTong cac gia tri le o dong chan cua matrix: ";
	int tich = TichGiaTriLeDongChan(b, k, l);
	cout << tich;
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

bool TonTaiLe(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] % 2 != 0)
			{
				return true;
			}
		}
	}
	return false;
}

int TichGiaTriLeDongChan(int a[][100], int m, int n)
{
	int t;
	if (TonTaiLe(a, m, n))
	{
		t = 1;
		for (int i = 0; i < m; i = i + 2)
		{
			for (int j = 0; j < n; j++)
			{
				if (a[i][j] % 2 != 0)
				{
					t = t * a[i][j];
				};
			}
		}
		return t;
	}
	else
	{
		return 0;
	}
}
