#include <iostream>
using namespace std;

int main()
{
        cout << "Bai 13: tinh x7 :" << endl;
        int x;
        cout << "x = ";
        cin >> x;

        int x2 = x * x;
        int x3 = x2 * x;
        int x4 = x2 * x2;
        int x7 = x3 * x4;

        cout << "x7 = " << x7;
        system("pause");
        return 1;
}