#include <iostream>

 bool search(int n, int d);

int main() {
     int num, numbusq;
     std::cout<<"Ingresa un numero"<<std::endl;
     std::cin>>num;
    if(num<0){
        std::cout<<"Error, el numero ingresado debe ser positivo";
        return 1;
    } else
    {
        std::cout<<"Ingrese el numero que desea buscar"<<std::endl;
        std::cin>>numbusq;
        bool result = search(num, numbusq);
        if (result) {
            std::cout<<"El numero a buscar: "<<numbusq<<", se encuentra en: "<<num<<std::endl;
        } else {
            std::cout<< "El numero a buscar: "<<numbusq<<", no se encuentra en: "<<num<<std::endl;
        }
    }
}

 bool search(int n, int d){
    if(n==0){
        return false;
    }
    if (n%10==d){
        return true;
    }
    return search(n/10,d);
}
