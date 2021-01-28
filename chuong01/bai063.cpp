#include <iostream>
using namespace std;

int main()
{
    unsigned long n, i, tich;
    cout << "Nhap n= ";
    cin >> n;
    tich = 1;
    for (i = n; i > 0; i = i / 10)
        if (i % 10 % 2 == 1)
            tich = tich * (i % 10);
    cout << "Ket qua = " << tich;
    
    system("pause");
    return 1;
}
