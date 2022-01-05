#include<iostream>
#include<cstdio>
#include<cmath>
int main()
{
    int a,b;
    std::cin>>a>>b;
    if(a-b!=0)
    {
        if(a-b>0) printf("O JOGO DUROU %d HORA(S)",24-(a-b));
        else printf("O JOGO DUROU %d HORA(S)",b-a);
    }
    else printf("O JOGO DUROU 24 HORA(S)");
    return 0;
}