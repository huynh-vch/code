#include <iostream>
using namespace std;

int main()
{
        cout << "Bai 17: tinh x11 :" << endl;

        int x;
        cout << "x = ";
        cin >> x;

        int x2 = x * x;
        int x4 = x2 * x2;
        int x8 = x4 * x4;
        int x12 = x8 * x4;
        int x11 = x12 / x;

        cout << "x11 = " << x11;
        system("pause");
        return 1;
}