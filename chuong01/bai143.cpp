#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "nhap n:";
    cin >> n;
    int S = 0;
    int i = 1;
    while (i < n)
    {
        if (n % i == 0)
        {
            S = S + i;
        }
        i++;
    }
    if (n == S)
    {
        cout << "HT";
    }
    else
    {
        cout << "Khong HT";
    }
    system("pause");
    return 1;
}