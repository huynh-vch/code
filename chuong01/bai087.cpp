#include <iostream>
using namespace std;

int main()
{
    cout << "Bai 087: " << endl;
    int x, n;
    cout << "x = ";
    cin >> x;
    cout << "n = ";
    cin >> n;

    int S = x;
    int T = x;
    int i = 3;
    int dau = -1;
    while (i <= 2 * n + 1)
    {
        T = T * x * x;
        S = S + (dau)*T;
        i = i + 2;
        dau = -dau;
    }
    cout << "S = " << S << endl;

    system("pause");
    return 1;
}