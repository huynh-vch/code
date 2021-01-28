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
    if (a <= b && b <= c)
    {
        cout << "Co ton tai tam giac";
    }
    else
        cout << "khong ton tai tam giac";

    system("pause");
    return 1;
}
