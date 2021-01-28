#include <iostream>
using namespace std;
#include <math.h>

int main()
{
        cout << "bai 35,Tinh tich" << endl;
        int n;
        cout << "nhap n=";
        cin >> n;
        int T = 1;
        int i = 1;
        while (i <= n)
        {
                T = T * i;
                i = i + 1;
        }
        cout << "Tich T= " << T;
        cout << endl;
        
        system("pause");
        return 1;
}