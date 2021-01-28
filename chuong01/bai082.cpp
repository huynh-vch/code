#include <iostream>
using namespace std;

int main()
{
    cout << "Bai 082: " << endl;
    int x, n;
    cout << "n = ";
    cin >> n;
    cout << "x = ";
    cin >> x;

    double S = 0;
    float T = 1;
    int i = 1;
    while (i <= n)
    {
        T = T * sin(x);
        S = S + T;
        i = i + 1;
    }
    cout << "S = " << S << endl;

    system("pause");
    return 1;
}