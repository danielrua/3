/*probar que un caracter ingresado  sea vocal, consonante o ninguna
 *  de las dos*/

#include <iostream>

using namespace std;

int main()
{

    char caracter;//inicializar variables
    cout<<"ingrese un caracter:";
    cin>>caracter;

        switch(caracter){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout<<"no es una consonante"<<endl<<caracter<<" es una vocal"; break;
        case 'b'://si el caracter es una vocal cualquiera para en case u
        case 'c':
        case 'd':
        case 'f':
        case 'g':
        case 'h':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'ñ':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z': cout<<" no es una vocal"<<endl<<caracter<<"  es una consonante";break;/*si el caracter es cualquier
                                                                                          consonante para en case z*/
        default: cout<<caracter<<" no es ni vocal ni consonante";break;}//si no es vocal ni consonante para en default

            return 0;

}
