/*este programa verifica que un numero ingresado sea
 * palindrmo o no*/
#include <iostream>

using namespace std;

int main()
{
    int num,digit,new_num=0,high,desnum;
    cout << "ingrese un número" << endl;
    cin>>num;
    for(int i=1;num>0;i*=10){/*encontrar de que orden es el
                               numero ingrsado*/
        if(num/i<=9){
            high=i;break;
        }

    }
    desnum=num;
    while (high>=1) {

        digit=desnum%10;//obtener el último digito
        desnum/=10;//cortar el último digito del número
        digit*=high;//convertir el último digito en el primero de un nuevo número
        high/=10;//bajar de unidades
        new_num+=digit;//sumar los digitos que forman el nuevo número
    }
    if(num==new_num){
        cout<<num<<" es un número palindromo";}

    else
        cout<<"NO es un número palindromo";



    return 0;
}
