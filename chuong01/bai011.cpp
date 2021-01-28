#include <iostream>
using namespace std;
#include <math.h>

int main()
{
        cout << "Bai 011:Tinh chu vi tam gia ABC " << endl;
        cout << "Nhap x1,y1,x2,y2,x3,y3: " << endl;
        int x1;
        cout << "x1= ";
        cin >> x1;
        int y1;
        cout << "y1= ";
        cin >> y1;

        int x2;
        cout << "x2= ";
        cin >> x2;
        int y2;
        cout << "y2= ";
        cin >> y2;

        int x3;
        cout << "x3 = ";
        cin >> x3;
        int y3;
        cout << "y3 = ";
        cin >> y3;

        double a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        double b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
        double c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));

        double p = (a + b + c) / 2;
        double s = sqrt(p * (p - a) * (p - b) * (p - c));
        
        cout << "Dien tich: " << s;

        system("pause");
        return 1;
}
