//
// Created by jose on 21/05/20.
//
#include <iostream>

using namespace std;

class Calculator {

public:

    Calculator(){};

    void sumar(int a, int b){
        cout<<a<<"+"<<b<<" = "<<a+b<<endl;
    }

    void restar(int a, int b){
        cout<<a<<"-"<<b<<" = "<<a-b<<endl;
    }

    void multiplicar(int a, int b){
        cout<<a<<"*"<<b<<" = "<<a*b<<endl;
    }

    void dividir(int a, int b){
        cout<<a<<"/"<<b<<" = "<<a/b<<endl;
    }

};


int main() {
    cout<<"*****Calculator*****"<<endl;
    Calculator *calculator;
    calculator->sumar(2,4);
    calculator->restar(6,4);
    calculator->multiplicar(2,4);
    calculator->dividir(16,4);

    calculator->sumar(2,7);
}