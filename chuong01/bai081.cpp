#include <iostream>
using namespace std;

int main()
{
    cout << "Bai 081: " << endl;
    int x, n;
    cout << "n = ";
    cin >> n;
    cout << "x = ";
    cin >> x;

    double S = 1.0 / x;
    float M = x;
    int i = 1;
    while (i <= n)
    {
        M = M * (x + i);
        S = S + float(1) / M;
        i = i + 1;
    }
    cout << "S = " << S << endl;

    system("pause");
    return 1;
}