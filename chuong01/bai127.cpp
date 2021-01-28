#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    float a, b;
    cout << "Nhap a = ";
    cin >> a;
    cout << "Nhap b = ";
    cin >> b;
    if (a < b)
    {
        cout << "Gia tri nho nhat la " << a << endl;
    }
    else
        cout << "Gia tri nho nhat la " << b << endl;

    system("pause");
    return 1;
}
