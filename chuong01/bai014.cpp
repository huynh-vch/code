#include <iostream>
using namespace std;

int main()
{
        cout << "Bai 14: tinh x32 :" << endl;

        int x;
        cout << "x = ";
        cin >> x;

        int x2 = x * x;
        int x4 = x2 * x2;
        int x8 = x4 * x4;
        int x16 = x8 * x8;
        int x32 = x16 * x16;

        cout << "x32 = " << x32;
        system("pause");
        return 1;
}