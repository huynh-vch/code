#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Bai 095: " << endl;
    int n;
    cout << "n = ";
    cin >> n;

    double S = 0;
    int i = n;
    while (i >= 1)
    {
        S = sqrt(i + S);
        i = i - 1;
    }
    cout << "S = " << S << endl;

    system("pause");
    return 1;
}