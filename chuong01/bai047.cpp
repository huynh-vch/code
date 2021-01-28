#include <iostream>
#include <cmath>
using namespace std;

int main()
{
        cout << "Bai 047: Tinh S" << endl;
        int n;
        cout << "n = ";
        cin >> n;

        double S = 0;
        int i = 1;
        while (i <= n)
        {
                S = S + sqrt(1 + 1.0 / (i * i) + 1.0 / ((i + 1) * (i + 1)));
                i = i + 1;
        }
        cout << "S = " << S << endl;

        system("pause");
        return 1;
}