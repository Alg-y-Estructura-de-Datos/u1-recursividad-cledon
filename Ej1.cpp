#include <iostream>

int e(int base, int exp);

int main() {
    int b,ne;
    std::cout<<"Ingrese la base del exponente"<<std::endl;
    std::cin>>b;
    std::cout<<"Ingrese el numero al que desea elevar la base"<<std::endl;
    std::cin>>ne;
    std::cout<<e(b,ne);
}

int e(int base, int exp){
    if (exp==0){
        return 1;
    }
    else {
        return base*e(base,exp-1);
    }
}
