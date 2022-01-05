#include<iostream>
#include<cstdio>
int main()
{
    double a,b,c;
    std::cin>>a>>b>>c;
    if (a+b>c && a+c>b && b+c>a)
    {
        if(a*a==b*b+c*c) printf("TRIANGULO RETANGULO\n");
        else if(a*a>b*b+c*c) printf("TRIANGULO OBTUSANGULO\n");
        else if(a*a<b*b+c*c) printf("TRIANGULO ACUTANGULO\n");
        if (a==b && b==c) printf("TRIANGULO EQUILATERO");
        else if (a==b || b==c) printf("TRIANGULO ISOSCELES")
    }
    else printf("NAO FORMA TRIANGULO");
    return 0;
}