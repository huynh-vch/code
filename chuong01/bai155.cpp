#include <iostream>
using namespace std;

#include <math.h>

int main()
{
    int n;
    cout << "Nhap n = ";
    cin >> n;
    int T = 1, i = 0;
    while (i <= n)
    {
        T = T * 2;
        cout << "a[" << i << "]=" << T << endl;
        i = i + 1;
    }
}