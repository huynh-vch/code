#include<iostream>
using namespace std;

int main()
{
        int x,y;
        cout << "Nhap nam x: ";
        cin >> x;
        cout << "Nhap nam y: ";
        cin >> y;
        cout << "Cac nam nhuan trong [" << x << "," << y << "] la: "<<endl;
        int i = x;
        while (i <= y)
        {
                if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
                        cout << i << endl;
                        i++;
        }
        system("pause");
        return 1;
}