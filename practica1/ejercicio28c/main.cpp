/*este programa calcula el numero pi segun la aproximacion
 * que se le ingrese*/
#include <iostream>

using namespace std;

int main()
{
    float num,pi=0,apro,pot=-1;
    cout << "ingrese el numero que quiere utilizar "
            "para calcular pi" << endl;
    cin>>num;
    for(int i=0;i<num;i++){
        pot*=-1;
        apro=4*(pot/(2*i+1));
        pi+=apro;
    }
    cout<<"pi es aproximadamente: "<<pi;
    return 0;
}
