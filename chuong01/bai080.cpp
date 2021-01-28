#include <iostream>
using namespace std;

int main()
{
    cout << "Bai 080: " << endl;
    int x, n;
    cout << "n = ";
    cin >> n;
    cout << "x = ";
    cin >> x;

    int S = 1;
    int T = 1;
    int i = 1;
    while (i <= n)
    {
        T = T * x;
        S = S + (i + 1) * T;
        i = i + 1;
    }
    cout << "S = " << S << endl;

    system("pause");
    return 1;
}