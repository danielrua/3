/*este programa imprime las potencias de un numero ingresado
elevadas de 1 a 5 */
#include <iostream>

using namespace std;

int main()
{
    int num,pot=1;
    cout << "ingrese un numero:" << endl;
    cin>>num;
    for(int i=1;i<=5;i++){//solo considera hasta la potencia 5
        pot*=num;//generar las potencias
        cout<<num<<'^'<<i<<'='<<pot<<endl;
    }
    return 0;
}
