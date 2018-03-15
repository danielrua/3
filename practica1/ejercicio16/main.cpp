/*este programa imprime el promedio de todos los numeros
ingresados una vez se ingrese el cero*/
#include <iostream>

using namespace std;

int main()
{
    int num,acum=0,pro=0,cont=0;

    while(true){
    cout << "ingrese el numero" << endl;
    cin>>num;
        if(num==0){/*si el numero es cero entrega
                     el promedio*/
        break;
        }
    cont++;
    acum+=num;//se van sumando los numeros
    }
    pro=acum/cont;//se genera el promedio
    cout<<"el promedio es:"<<pro;
    return 0;
}
