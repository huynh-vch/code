#include <iostream>
using namespace std;
int main()
{
        cout << "Bai 059: Dem so luong chu so cua so nguyen duong n: " << endl;
        int n;
        cout << "Nhap n = ";
        cin >> n;

        int dem = 0;
        int t = n;
        while (t != 0)
        {
                dem = dem++;
                t = t / 10;
        }
        cout << "So luong chu so cua so nguyen duong n la: " << dem << endl;
        
        system("pause");
        return 1;
}