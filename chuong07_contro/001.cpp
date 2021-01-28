//Bài con trỏ
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "- Nhap n: ";
    cin >> n;
    int *a = new int[n];

    for (int i = 0; i <= n - 1; i++)
    {
        cout << "-a[" << i << "]= ";
        cin >> a[i];
    }
    cout << "[ Mang ban dau: ]\n";

    for (int i = 0; i <= n - 1; i++)
    {
        cout << a[i] << "\t";
    }
    delete[] a;

    cout << endl;
    system("pause");
    
    return 1;
}
