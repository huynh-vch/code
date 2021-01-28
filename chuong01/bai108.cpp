#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    cout << "Bai 108: " << endl;
    int x;
    cout << "x = ";
    cin >> x;

    float S = 0;
    float T = 1;
    float M = 1;
    int i = 1;
    float e = 1;

    while (e >= pow(10, (-6)))
    {
        T = T * x;
        M = M * i;
        e = T / M;
        S = e + S;
        i = i + 1;
    }
    cout << "e mu x = " << e << endl;

    system("pause");
    return 1;
}