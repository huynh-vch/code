//bai007.cpp
#include <iostream>
using namespace std;
float Chuyendoido(float);

int main()
{
	float F;
	cout << "Nhap do F: ";
	cin >> F;
	float Kq = Chuyendoido(F);

	cout << "Do C: " << Kq << endl;
	system("pause");
	return 1;
}
float Chuyendoido(float F)
{
	float C = 0;
	C = 5.0 / 9 * (F - 32);
	return C;
}