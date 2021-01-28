//bai006.cpp
#include <iostream>
using namespace std;
float DOI(float);

int main()
{
	float C;
	cout << "Nhap do C: ";
	cin >> C;
	float Kq = DOI(C);

	cout << "Do F: " << Kq << endl;
	system("pause");
	return 1;
}
float DOI(float C)
{
	float F = 0;
	F = 9.0 / 5 * C + 32;
	return F;
}