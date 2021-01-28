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
        cout << "Hai so theo thu tu tang dan la: " << a << " va " << b << endl;
    }
    else
        cout << "Hai so theo thu tu tang dan la: " << b << " va " << a << endl;

    system("pause");
    return 1;
}
