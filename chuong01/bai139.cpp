#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    int a, b;
    float x;
    cout << "Nhap a = ";
    cin >> a;
    cout << "Nhap b = ";
    cin >> b;

    if (a == 0)
    {
        if (b == 0)
        {
            cout << "Phuong trinh co vo so nghiem" << endl;
        }
        else
            cout << "Phuong trinh vo nghiem" << endl;
    }
    else
    {
        x = (-b * 1.00 / a);
        cout << "Nghiem cua phuong trinh la: x = " << x;
    }
    system("pause");
    return 1;
}
