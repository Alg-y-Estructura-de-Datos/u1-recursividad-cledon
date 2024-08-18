#include <iostream>
#include <vector>

int search(const std::vector<int>& vec, int n);

int main() {
    int length;
    std::cout<<"Ingrese el tamaño del vector"<<std::endl;
    std::cin>>length;
    std::vector<int> vec(length);
    if(length==0){
        std::cout<<"El tamaño del vector debe ser mayor a cero";
    }else {
    std::cout<<"Ingrese los elementos del vector"<<std::endl;
    for (int i=0;i<length;i++){
        std::cin>>vec[i];
    }
    std::cout<<"El mayor elemento del arreglo es: "<<search(vec,length);
        }
}

int search(const std::vector<int>& vec, int n){
    int maximo;
    if (n==1){
        return vec[0];
    }
    maximo=search(vec,n-1);
    if (vec[n-1]>maximo){
        return vec[n-1];
    } else {
        return maximo;
    }
}
