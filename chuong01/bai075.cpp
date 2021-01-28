#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x, n;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;
    float S = 1;
    float T = 1;
    float M = 1;
    int i = 1;
    while (i <= 2 * n)
    {
        T = T * x * x;
        M = M * i * (i + 1);
        S = S + (float)(T / M);
        i = i + 2;
    }
    cout << "Tong la: " << S << endl;
    
    system("pause");
    return 1;
}