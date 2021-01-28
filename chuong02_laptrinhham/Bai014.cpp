//bai014.cpp
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
	float x16 = Mu1(x8);
	float x32 = Mu1(x16);
	cout << "x luy thua 32 la : " << x32 << endl;
	system("pause");
	return 1;
}
float Mu1(float a)
{
	float mu = 0;
	mu = a * a;
	return mu;
}