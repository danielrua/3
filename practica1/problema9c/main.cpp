/*este programa suma las potencias de cada digito elevadas por si mismas
 * de un numero ingresado*/
#include <iostream>

using namespace std;

int main()
{
    int number,digito,pot,acumu=0;
    cout<<"ingrese un numero entero"<<endl;
    cin>>number;

    while (number>0) {
        digito=number%10;//obtener el ultimo digito del numero
        pot=1;

        for(int i=0;i<digito;i+=1){//realizar la potenciacion
            pot*=digito;
        }
        acumu+=pot;//sumar las potencias
        number/=10;//recortar el numero original

    }
    cout<<"el resultado de la suma es: "<<acumu<<endl;

    return 0;
}
