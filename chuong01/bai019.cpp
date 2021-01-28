#include <iostream>
using namespace std;

int main()
{
        cout << "Bai 19: tinh x13 :" << endl;

        int x;
        cout << "x = ";
        cin >> x;

        int x2 = x * x;
        int x4 = x2 * x2;
        int x6 = x4 * x2;
        int x12 = x6 * x6;
        int x13 = x12 * x;

        cout << "x13 = " << x13;
        system("pause");
        return 1;
}