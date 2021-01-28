#include <iostream>
using namespace std;

int main()
{
        cout << "Bai 021: Tinh x15" << endl;

        int x;
        cout << "x = ";
        cin >> x;

        int x2 = x * x;
        int x4 = x2 * x2;
        int x8 = x4 * x4;
        int x16 = x8 * x8;
        int x15 = x16 / x;

        cout << "x15 = " << x15;
        system("pause");
        return 1;
}