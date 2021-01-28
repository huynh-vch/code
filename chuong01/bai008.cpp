#include <iostream>
#include <math.h>
using namespace std;

int main()
{
        double param, result;
        cout << "Nhap goc:";
        cin >> param;

        result = sin(param * 3.14159265 / 180);
        cout << "Sine cua" << param << "do la: " << result;
        system("pause");
        return 0;
}
