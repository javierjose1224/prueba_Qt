#include <iostream>
/*imprimir los numero pares entre 0 y 100*/
using namespace std;

int main()
{
    int mues,sum=0;
    float prom;//AQUIIIIIIIIII
    for(int con=0; con<10; con=con+1)
    {
        cout<<"ingrese una muestra: ";
        cin>>mues;
        sum=sum+mues;
        cout<<"la suma va en: "<<sum<<endl;
    }
    cout<<"la suma final es: "<<sum<<endl;
    prom=sum/10;
    cout<<"el promedio es: "<<prom<<endl;
    if (prom>=151 && prom<=200)
    {
        cout<<"encinde led rojo"<<endl;
    }
    else if (prom>=101 && prom<=150)
    {
        cout<<"encinde led naranja"<<endl;
    }
    else if (prom>=51 && prom<=100)
    {
        cout<<"encinde led amarillo"<<endl;
    }
    else if (prom>=50)
    {
        cout<<"encinde led verde"<<endl;
    }

    return 0;
}
