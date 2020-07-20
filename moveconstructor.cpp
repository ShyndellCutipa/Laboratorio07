#include <iostream>
using namespace std;

class Billetera 
{
    public:
    int nroDolares;
    Billetera() = default; //default constructor
    Billetera(Billetera &&otro) {
    this->nroDolares = otro.nroDolares;
    otro.nroDolares = 0;
    }
};
int main()
{
    Billetera a;
    a.nroDolares = 1;
    Billetera b (std::move(a)); //llamando a B(B&& otro);
    cout << a.nroDolares << endl; //0
    cout << b.nroDolares << endl; //1

}