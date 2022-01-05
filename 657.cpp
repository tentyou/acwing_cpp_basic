#include<iostream>
#include<cstdio>
int main()
{
    int a,b,c,d;
    std::cin>>a>>b>>c>>d;
    if(b>c&&d>a&&c+d>a+b&&c>0&&d>0&&a%2==0) printf("Valores aceitos");
    else printf("Valores nao aceitos");
    return 0;
}