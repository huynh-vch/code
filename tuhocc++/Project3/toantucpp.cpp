#include <iostream>

using namespace std;

int main()
{
	int a = 4;
	int b = 2;
	int c = 0;
	//c = a + b;// phep gan
	//c++; //c = c + 1;
	//c--; //c = c - 1;
	//c = a - b;
	//c = a / b;
	//c = a * b;
	c = a % b; //chia lay phan du
	cout << "Gia tri cua a = " << a << endl;
	cout << "Gia tri cua b = " << b << endl;
	cout << "Gia tri cua c = " << c << endl;
	return 0;
}