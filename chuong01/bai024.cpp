#include <iostream>
#include <math.h>
using namespace std;

int main()
{
        cout << "nhap n= ";
        int n;
        cin >> n;
        int ht = (n / 100) % 10;
        cout << "chu so hang tram la: " << ht << endl;

        system("pause");
        return 1;
}