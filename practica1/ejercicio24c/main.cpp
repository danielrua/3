/*este programa imprime un cuadrado vacio con
 * lado igual al número ingresado
#include <iostream>

using namespace std;

int main()
{
    int lado,pot=1;
    cout << "ingrese el tamaño del cuadrado" << endl;
    cin>>lado;
    for(int i=1;i<=lado;i++){
        pot*=lado;

    }
    cout<<pot;
    int cont1=1,cont2=0,mul=1 ;

    for(int i=0;i<pot;i++){

        if(i=cont1*lado+2+cont2 && i<pot-lado){

            while(i=cont1*lado+2+cont2 && i<pot-lado){

                if(cont2==(lado-3)+1){
                    cont2=0;cont1+=1;

                }
                cont2++;i++;

                cout<<" ";
            }
        }
        else if (i=mul*lado){
            mul++;cout<<"+";cout<<endl;
        }
        else
            cout<<"+";


    }

    return 0;
}*/
#include <iostream>

using namespace std;

int main(){
    int lado;

    cout<<"ingrse el lado";
    cin>>lado;
            for(int i=1;i<=lado;i++){//genera las filas

                   for(int j=1;j<=lado;j++){//genera los elementos de las columnas
                       if(i==1||i==lado||j==1||j==lado){/*la primera y ultima columna o fila
                                                          corresponde a los caracteres que conforman el perimetro del cuadrado*/
                            cout<<"+";}


                       else{
                           cout<<" ";
                       }
                   }



            cout<<endl;

            }

return 0;
}

