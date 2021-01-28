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
    if (a > b)
    {
        cout << "Gia tri lon nhat la " << a << endl;
    }
    else
        cout << "Gia tri lon nhat la " << b << endl;

    system("pause");
    return 1;
}
