#include<iostream>
#include<cstdio>
int main()
{
    int n;
    std::cin>>n;
    if(n==61) printf("Brasilia");
    else if(n==71) printf("Salvador");
    else if(n==11) printf("Sao Paulo");
    else if(n==21) printf("Rio de Janeiro");
    else if(n==32) printf("Juiz de Fora");
    else if(n==19) printf("Campinas");
    else if(n==27) printf("Vitoria");
    else if(n==31) printf("Belo Horizonte");
    else printf("DDD nao cadastrado");
}