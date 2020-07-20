#include <iostream>

using namespace std;

void referencia (const string& s1, const string& s2)
{
    const string& concatenar = s1 + s2;
    cout<< concatenar;
}

void referencia (string&& s1, string&& s2)
{
    string&& concatenar = s1 + s2;
    cout << concatenar;
}

int main()
{
    string  s1     = "Ciencia ";
    string  s2     = "de la Computacion";
    referencia(s1, s2);   
    cout<<endl;
    referencia("Hola", "Mundo");

}
