#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double S = 0;
    double n = 2;
    double k = 5;
    int i = 1;
    while (i <= n)
    {
        S = S + pow(i, (k));
        i = i + 1;
    }
    cout << "Tong la: " << S << endl;
    
    system("pause");
    return 1;
}