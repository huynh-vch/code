#include <iostream>
#include "Candidate.h"
using namespace std;

int main()
{
	int n;
	Candidate a[100];
	cin >> n;
	for (int i = 1; i <= n; i++)
		a[i].Nhap();
	cout << "Diem tren 15: \n";
	for (int i = 1; i <= n; i++)
		a[i].Tren15();
	return 0;
}