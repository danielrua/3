/*este programa imprime un rombo con tamaño igual a un numero ingresado*/
# include <iostream>
using namespace std ;

int main ()
{
    int number ;
    cout << " Ingrese un numero impar: " ;
    cin >> number ;//numero impar para un rombo uniforme
    for (int fila = 0; fila < number ; ++fila) {//generar triangulo superior
        for (int i = 0; i < number-fila-1; ++i)
            cout << " ";//si la fila aumenta los espacios disminuyen
        for (int i = 0; i < 2*fila+1; ++i)
             cout << "*" ;//si la fila aumenta los asteriscos aumentan
        cout << endl ;//salto de linea
    }

    for (int fila=number-2; fila>=0; --fila) {//generar triangulo inferior inverso
        for (int i=0; i<number-fila-1; ++i)
            cout << " " ;//si la fila aumenta los espacios aumentan
        for (int i=0; i<2*fila+1; ++i)
            cout << "*" ;//si la fila aumenta los asteriscos disminuyen
        cout << endl ;
    }
    return 0;//salto de linea
}
