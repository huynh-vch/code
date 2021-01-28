#include <iostream>
using namespace std;

int main()
{
        cout << "Bai 149: Tim uoc chung lon nhat cua hai so nguyen duong a va b : " << endl;
        int a, b;
        cout << "Nhap a = ";
        cin >> a;
        cout << "Nhap b = ";
        cin >> b;

        while (a != b)
                if (a > b)
                {
                        a = a - b;
                }
                else
                {
                        b = b - a;
                }
        cout << "Uoc chung lon nhat cua a va b la: " << a << endl;

        system("pause");
        return 1;
}