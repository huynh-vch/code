#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    int a, b;
    cout << "Nhap a = ";
    cin >> a;
    cout << "Nhap b = ";
    cin >> b;

    a = abs(a);
    b = abs(b);

    cout << " Gia tri a va b lan luot la:" << a << " va " << b << endl;
    
    system("pause");
    return 1;
}
