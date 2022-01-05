#include<iostream>
#include<cstdio>
int main()
{
    int x,y1,y2;
    float z1,z2;
    std::cin>>x>>y1>>z1>>x>>y2>>z2;
    printf("VALOR A PAGAR: R$ %.2f",y1*z1+y2*z2);
    return 0;
}