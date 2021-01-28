//bai109.cpp
#include <iostream>
using namespace std;

float GiatriE(int);

int main()
{
	float kq = GiatriE(1);
	cout << "hang so euler e co gia tri la: " << kq << endl;
	return 1;
}
float GiatriE(int k)
{
	float e = 1;
	int T = 1;
	int i = 1;
	float t = 1;
	while (t >= (float)1 / 1000000)
	{
		T = T * i;
		t = (float)1 / T;
		e = e + t;
		i = i + 1;
	}
	return e;
}