#include<iostream>
#include<cstdio>
int main()
{
    int a,b;
    std::cin>>a>>b;
    if(a%b==0||b%a==0) printf("Sao Multiplos");
    else printf("Nao sao Multiplos");
    return 0;
}