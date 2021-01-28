#include <iostream>
using namespace std;

int main()
{
    cout << "Bai 091: " << endl;
    int x, n;
    cout << "x = ";
    cin >> x;
    cout << "n = ";
    cin >> n;

    float S = 1;
    int T = x;
    int M = 1;
    int i = 2;
    int dau = -1;
    while (i <= 2 * n)
    {
        T = T * x * x;
        M = M * (i + 1) * i;
        S = S + (dau * 1.0 * T / M);
        i = i + 2;
        dau = -dau;
    }
    cout << "S = " << S << endl;

    system("pause");
    return 1;
}