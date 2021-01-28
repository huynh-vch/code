#include <iostream>
using namespace std;

#include <math.h>

int main()
{
    int n;
    cout << "Nhap n = ";
    cin >> n;
    float T = 1;
    int i = 1;
    while (i <= n)
    {
        T = T + (float)(1.00 / i);
        cout << "a[" << i << "]=" << T << endl;
        i = i + 1;
    }
}