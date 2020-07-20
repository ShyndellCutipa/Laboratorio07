#include <iostream>
using namespace std;

int main()
{
    int a = 1, b; //a y b son lvalue
    //a + 1 = b;error, la expresión de la izquierda
               // no es una variable(a+1)
    int *p, *q; //*p, *q son lvalue
    *p = 1; //asignación de lvalue válida, 1 es rvalue
    q = p + 5; //válido 'p+5' es una rvalue
    int x, y; 
    cout<<"Ingrese valor de x: "<<endl;
    cin>>x;
    cout<<"Ingrese valor de y: "<<endl;
    cin>>y;
    (  x < y ? y : x) = 0; //es válido ya que el operador
                           //ternario mantiene la escencia de lvalue
    cout<<"Valor de x ahora: "<<x<<endl;
    cout<<"Valor de y ahora: "<<y<<endl;
}