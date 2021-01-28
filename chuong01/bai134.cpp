#include <iostream>
using namespace std;
#include <math.h>

int main() {
    float x, y, z;
    cout << "Nhap x = ";
    cin >> x;
    cout << "Nhap y = ";
    cin >> y;
    cout << "Nhap z = ";
    cin >> z;
    if (x <= y && y <= z)
    {
        cout << "bat dang thuc dung" << endl;
    }
    else cout << "bat dang thuc khong dung" << endl;

    system("pause");
    return 1;
}