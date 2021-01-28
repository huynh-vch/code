#include <iostream>
using namespace std;

int main()
{
        cout << "Bai 036: Tinh T" << endl;
        int x, n;
        cout << "x = ";
        cin >> x;
        cout << "n = ";
        cin >> n;

        float T = 1;
        int i = 1;
        while (i <= n)
        {
                T = T * x;
                i = i + 1;
        }

        cout << "T = " << T;

        system("pause");
        return 1;
}