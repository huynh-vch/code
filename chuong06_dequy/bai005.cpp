// De qui nhi phan
#include <iostream>
using namespace std;
int Fibo(int);

int main()
{
    int k;
    cout << "Nhap n:";
    cin >> k;
    int kq = Fibo(k);
    cout << "Ket qua la: " << kq << "\n";
    return 1;
}

int Fibo(int k)
{
    if (k == 0)
        return 1;
    if (k == 1)
        return 1;
    long a = Fibo(k - 1);
    long b = Fibo(k - 2);
    return (a + b);
}