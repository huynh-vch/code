#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Bai 099: Tinh S " << endl;
    int n;
    cout << "n = ";
    cin >> n;

    double S = 0;
    int i = 1;
    while (i <= n)
    {
        S = pow((i + S), (float)1 / (i + 1));
        i = i + 1;
    }
    cout << "S = " << S << endl;

    system("pause");
    return 1;
}