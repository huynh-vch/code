#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    float a, b, c, temp;
    cout << "Nhap a = ";
    cin >> a;
    cout << "Nhap b = ";
    cin >> b;
    cout << "Nhap c = ";
    cin >> c;
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    cout << "ba so theo thu tu tang dan la:" << a << b << c;

    system("pause");
    return 1;
}
