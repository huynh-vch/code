//bai019.cpp
#include <iostream>
using namespace std;
float Mu1(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	float x2 = Mu1(x);
	float x4 = Mu1(x2);
	float x8 = Mu1(x4);
	float x12 = x8 * x4;
	float x13 = x12 * x;
	cout << "x luy thua 13 la : " << x13 << endl;
	system("pause");
	return 1;
}
float Mu1(float a)
{
	float mu = 0;
	mu = a * a;
	return mu;
}