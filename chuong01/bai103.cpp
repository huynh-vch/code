#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Bai 103: " << endl;

    double S = 0;
    int i = 0;
    double e = 1;
    while (e >= pow(10, -6))
    {
        e = 1.0 / ((2 * i) + 1);
        S = S + e;
        i = i + 2;
    }
    cout << "S = " << S << endl;

    system("pause");
    return 1;
}