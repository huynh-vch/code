#include <iostream>
using namespace std;

int main()
{
    cout << "Bai 088: " << endl;
    int n;
    cout << "n = ";
    cin >> n;

    float S = 0;
    int M = 0;
    int i = 1;
    int dau = 1;
    while (i <= n)
    {
        M = M + i;
        S = S + (dau * 1.0 / M);
        i = i + 1;
        dau = -dau;
    }
    cout << "S = " << S << endl;

    system("pause");
    return 1;
}