#include <iostream>
#include <iomanip>
using namespace std;
void Nhap(float[], int &);
void Xuat(float[], int);
void Kt(float[], int &);
void Xuly(float[], int, float);

int main()
{
	float a[100];
	int n;
	cout << "Nhap mang a:";
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nNhap x: ";
	float x;
	cin >> x;
	int k;
	cout << "\n\nMang a sau khi them gia tri " << x << " : \n";
	Xuly(a, n, x);
	return 1;
}
void Nhap(float a[], int &n)
{
	cout << "\nNhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 11 - 5;
	}
}
void Xuat(float a[], int n)
{
	cout << "\nMang: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(10);
	}
	cout << endl;
}
void Kt(float a[], int &n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				float temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
}

void Xuly(float a[], int n, float x)
{
	Kt(a, n);
	int k;
	n++;
	int i;
	for (i = n - 2; i >= 0 && a[i] > x; i--)
	{
		a[i + 1] = a[i];
	}
	a[i + 1] = x;
	Xuat(a, n);
}