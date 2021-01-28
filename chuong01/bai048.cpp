#include <iostream>
using namespace std;

int main()
{
        cout << "Bai 048: Tinh S" << endl;
        int x, n;
        cout << "x = ";
        cin >> x;
        cout << "n = ";
        cin >> n;

        double S = x;
        int i = 1;
        while (i <= n)
        {
                S = S * (x + i);
                i = i + 1;
        }
        cout << "S = " << S << endl;

        system("pause");
        return 1;
}