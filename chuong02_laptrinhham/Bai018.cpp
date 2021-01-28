//bai018.cpp
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
	cout << "x luy thua 12 la : " << x12 << endl;
	system("pause");
	return 1;
}
float Mu1(float a)
{
	float mu = 0;
	mu = a * a;
	return mu;
}