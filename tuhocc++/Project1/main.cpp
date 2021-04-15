#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	int b(3);
	int c{ 2 };
	int result;
	// cac kieu khai bao bien co 3 kieu
	a = a + b;
	result = a - c;
	cout << result;
	return 0;
}