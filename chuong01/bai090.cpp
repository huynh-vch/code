#include <iostream>
using namespace std;

int main()
{
    cout << "Bai 090: " << endl;
    int x, n;
    cout << "x = ";
    cin >> x;
    cout << "n = ";
    cin >> n;

    float S = 0;
    int T = 1;
    int M = 1;
    int i = 1;
    int dau = -1;
    while (i <= n)
    {
        T = T * x;
        M = M * i;
        S = S + (dau * 1.0 * T / M);
        i = i + 1;
        dau = -dau;
    }
    cout << "S = " << S << endl;

    system("pause");
    return 1;
}