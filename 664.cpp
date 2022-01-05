#include<iostream>
#include<cstdio>
int main()
{
    double a,b,c;
    std::cin>>a>>b>>c;
    if(a+b>c && a+c>b && b+c>a) printf("Perimetro = %.1lf",a+b+c);
    else printf("Area = %.1f",(a+b)*c/2.0);
    return 0;
}