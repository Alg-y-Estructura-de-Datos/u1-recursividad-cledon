#include <iostream>

void exchange(int n, int& ext);

int main() {
    int num, r=0;
    std::cout<<"Ingrese el numero que desea invertir"<<std::endl;
    std::cin>>num;
    if (num<0){
        std::cout<<"Error, no se permiten numeros negativos";
        return 1;
    } else{
        exchange(num,r);
        std::cout<<"El numero invertido es: "<<r;
    }
}

void exchange(int n, int& ext){
    if (n==0){
        return;
    } else{
       ext=ext*10+n%10;
        exchange(n/10,ext);
    }
}
