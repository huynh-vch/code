#include <iostream>
#include <math.h>
using namespace std;

int main()
{
        cout << "nhap 2 so a va b:" << endl;
        int a, b;
        cin >> a;
        cin >> b;
        a = a + b;
        b = a - b;
        a = a - b;
        cout << "so hoan vi" << endl
             << "a= " << a << endl
             << "b= " << b << endl;

        system("pause");
        return 1;
}