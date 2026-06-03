#include <iostream>
#include <locale.h>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

int main(){
setlocale(LC_ALL, "pt_BR.UTF-8");
srand(time(0));
    int N;
    std::cout<<"Escreva o número de opções para sortear:"<<"\n";
        std::cin>>N;
    std::cout<<"escreva as opções que deseja sortear: "<<"\n";
    std::vector<std::string>o(N);
        for(int i=0;i<N;i++){
            std::cout<<i+1<<"-";
            std::cin>>o[i];
        }
    int x =(rand() % N);
    std::cout<<"a opção sorteada foi: "<<o[x]<<"\n";
}