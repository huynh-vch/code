#include <iostream>
using namespace std;

int main()
{
        cout << "Bai 16: tinh x9 :" << endl;

        int x;
        cout << "x = ";
        cin >> x;

        int x2 = x * x;
        int x4 = x2 * x2;
        int x8 = x4 * x4;
        int x9 = x8 * x;

        cout << "x9 = " << x9;
        system("pause");
        return 1;
}