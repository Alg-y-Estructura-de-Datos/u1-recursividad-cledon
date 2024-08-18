#include <iostream>

int n(int natural);
void show(int period);

int main() {
    int num;
    std::cout<<"Ingrese el numero que desea calcular su suma"<<std::endl;
    std::cin>>num;
    show(num);
    std::cout<<n(num);
}

void show(int period){
    for (int i=1;i<=period;i++){
        if (i<period) {
            std::cout<<i<<"+";
        } else{
            std::cout<<i<<"=";
        }
    }
}

int n(int natural){
    int su=0;
    if (natural==0){
        return 0;
    }
    else {
        return su=natural+n(natural-1);
    }
}
