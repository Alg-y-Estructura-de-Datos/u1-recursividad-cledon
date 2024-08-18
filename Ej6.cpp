#include <iostream>

int par(int n, int size);

int main() {
    int d,num;
    std::cout<<"Ingrese el tamaño del numero (cantidad de digitos)"<<std::endl;
    std::cin>>d;
    std::cout<<"Ingrese el numero"<<std::endl;
    std::cin>>num;
    std::cout<<"La cantidad de numeros pares en posiciones impares es: "<<par(num,d);
}

int par(int n, int size){
    int sizep;
    if (n==0){
        return 0;
    }
    sizep=n%10;
    if (size%2!=0 and n%2==0){
        return 1+par(n/10,size-1);
    }
    else{
        return par(n/10,size-1);
    }
}
