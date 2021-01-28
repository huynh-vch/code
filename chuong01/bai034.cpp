#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    int n;
    cout << "nhap n:";
    cin >> n;

    int S = 0;
    int i = 1;
    while (i <= 2 * n + 1)
    {
        S = S + i / (i + 1);
        i = i + 2;
    }
    cout << "Tong la: " << S;

    system("pause");
    return 1;
}