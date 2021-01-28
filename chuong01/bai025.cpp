#include <iostream>
#include <math.h>
using namespace std;

int main()
{
        cout << "nhap 2 so a va b" << endl;
        int a, b;
        cin >> a,
            cin >> b;
        int temp = a;
        a = b;
        b = temp;
        cout << "so hoan vi" << endl
             << "a= " << a << endl
             << "b= " << b << endl;

        system("pause");
        return 1;
}