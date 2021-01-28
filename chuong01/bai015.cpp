#include <iostream>
using namespace std;

int main()
{
        cout << "Bai 15: tinh x64 :" << endl;

        int x;
        cout << "x = ";
        cin >> x;

        int x2 = x * x;
        int x4 = x2 * x2;
        int x8 = x4 * x4;
        int x16 = x8 * x8;
        int x32 = x16 * x16;
        int x64 = x32 * x32;

        cout << "x64 = " << x64;
        system("pause");
        return 1;
}