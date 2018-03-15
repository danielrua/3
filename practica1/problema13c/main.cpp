/*calcula la suma de los primeros numeros primos
 * menores que el numero ingresado*/

#include <iostream>

using namespace std;

int main()
{
    int high,cont,acum=0;//inicializar variables

    cout << "ingrese un numero" << endl;//pedir un limite
    cin>>high;//asignarlo a una variable

    for(int num=2;num<high;num++){//generar numeros menores que el limite

        cont=0;
        for(int div=1;div<=num;div++){//generar numeros menores que el limite

            if(num%div==0)//probar que num sea dividible por uno y si mismo
                cont++;
        }
        if(cont==2){//si entra 2 veces al if anterior el numero es primo
            acum+=num;//sumar los numeros primos

        }
    }
    cout<<"el resultado de la suma es: "<<acum<<endl;
    return 0;
}
