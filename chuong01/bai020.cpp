#include <iostream>
using namespace std;

int main()
{
        cout << "Bai 020: tinh x14 :" << endl;

        int x;
        cout << "x = ";
        cin >> x;

        int x2 = x * x;
        int x4 = x2 * x2;
        int x6 = x4 * x2;
        int x12 = x6 * x6;
        int x14 = x12 * x2;

        cout << "x14 = " << x14;
        system("pause");
        return 1;
}