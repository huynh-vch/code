#include <iostream>
using namespace std;

int main()
{
    cout << "Bai 084: " << endl;
    int x, n;
    cout << "n = ";
    cin >> n;
    cout << "x = ";
    cin >> x;

    double S = 0;
    float T = x;
    int i = 1;
    while (i <= n)
    {
        T = sin(T);
        S = S + T;
        i = i + 1;
    }
    cout << "S = " << S << endl;

    system("pause");
    return 1;
}