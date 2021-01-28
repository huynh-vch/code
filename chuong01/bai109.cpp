#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    cout << "Bai 109: " << endl;
    int n;
    cout << "n = ";
    cin >> n;

    float S = 1.0 / 1;
    float M = 1;
    int i = 1;
    double e = 1;

    while (e >= pow(10, (-6)))
    {
        M = M * i;
        e = (float)1 / (M * i);
        S = e + S;
        i = i + 1;
    }
    cout << "e = " << S << endl;

    system("pause");
    return 1;
}