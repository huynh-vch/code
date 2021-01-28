#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    float S = 0;
    float T = 1;
    int i = 1;
    while (i <= n)
    {
        T = T * i;
        S = S + i * T;
        i = i + 1;
    }
    cout << "Tong la: " << S << endl;
    system("pause");
    return 1;
}