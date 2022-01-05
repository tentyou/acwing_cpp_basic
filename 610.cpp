#include<iostream>
#include<cstdio>
int main()
{
    std::string name;
    double a,b;
    std::cin>>name;
    std::cin>>a>>b;
    printf("TOTAL = R$ %.2lf",a+0.15*b);
    return 0;
}