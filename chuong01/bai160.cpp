#include <iostream>
using namespace std;

    int chuso (int n){
        int temp;
        do{
            temp = n % 10;
            n /= 10;

        }while (n > 0);
        return temp;
    }
    int main (){
        int n;
        cout << "nhap n:";
        cin >> n;
        cout << "Chu so dau tien la: " << chuso(n) << endl;

        system("pause");
        return 1;
    }
   