#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Bai 105: " << endl;

    double S = 0;
    int i = 0;
    double e = 1;
    float M = 0;
    while (e >= pow(10, -6))
    {
        M = M + i;
        e = 1.0 / M;
        S = S + e;
        i = i + 2;
    }
    cout << "S = " << S << endl;

    system("pause");
    return 1;
}