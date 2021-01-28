#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    int i = 2, n;
    int att = 1, at = 1, ahh;
    cout << "Nhap vao n = ";
    cin >> n;

    while (i <= n)
    {
        ahh = at + att;
        att = at;
        at = ahh;
        i = i + 1;
    }

    cout << " So hang thu " << n << " la: " << ahh << endl;
    
    system("pause");
    return 1;
}
