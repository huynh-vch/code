#include <iostream>
#include <math.h>
using namespace std;

/***
 * kieu du lieu tra ve
 * ten ham
 * tham so dau vao
 * */
double tong(double a, double b, int _i )
{
    double S = 0;
    double e = 1;
    int i = 1;
    while (e >= pow(a, (b)))
    {
        e = 1.0 / i;
        S = S + e;
        i = i + _i;
    }
    return S;
}

int main()
{

    double s = tong(10, -6 , 1);
    cout << "Tong la: " << s << endl;

    double s1 = tong(10, -5, 1);
    cout << "Tong s1 la: " << s1 << endl;

    double s2 = tong(10, -5, 2);
    cout << "Tong s2 la: " << s2 << endl;

    system("pause");
    return 1;
}
