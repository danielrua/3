//este programa dice que número es mayor de dos ingresados//
#include <iostream>

using namespace std;

int main()
{
    float numero_a,numero_b;
    cout << "ingrse un numero" << endl;
    cin>>numero_a;//pide el primer número

    cout << "ingrse otro numero" << endl;
    cin>>numero_b;//pide el segundo número

    if (numero_a>numero_b){
        cout<<numero_a<<"es mayor que"<<numero_b<<endl;

    else
        cout<<numero_b<<"es mayor que"<<numero_a<<endl;
    }
    return 0;
}
