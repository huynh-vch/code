#include <iostream>
using namespace std;

int main()
{
    cout << "Bai 086: " << endl;
    int x, n;
    cout << "x = ";
    cin >> x;
    cout << "n = ";
    cin >> n;

    int S = 0;
    int T = 1;
    int i = 1;
    int dau = -1;
    while (i <= 2 * n)
    {
        T = T * x * x;
        S = S + (dau * T);
        i = i + 2;
        dau = -dau;
    }
    cout << "S = " << S << endl;

    system("pause");
    return 1;
}