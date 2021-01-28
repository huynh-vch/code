#include <iostream>
using namespace std;
int main()
{
        cout << "Bai 060: Tinh tich cac chu so cua so nguyen duong n: " << endl;
        int n;
        cout << "Nhap n: ";
        cin >> n;

        int T = 1;
        int t = n;
        cout << "Cac chu so cua so nguyen duong cua n la:" << t << endl;
        while (t != 0)
        {
                int dv = t % 10;
                T = T * dv;
                t = t / 10;
                cout << t << endl;
        }
        cout << "So luong chu so cua so nguyen duong n la: " << T << endl;
        
        system("pause");
        return 1;
}