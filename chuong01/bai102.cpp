#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Bai 102: " << endl;

    double S = 0;
    int i = 2;
    double e = 1;
    while (e >= pow(10, -6))
    {
        e = 1.0 / i;
        S = S + e;
        i = i + 2;
    }
    cout << "S = " << S << endl;

    system("pause");
    return 1;
}