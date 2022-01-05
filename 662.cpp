#include<iostream>
#include<cstdio>
int main()
{
    double x,y;
    std::cin>>x>>y;
    if (x!=0 && y!=0)
    {
        if (x>0 && y>0) printf("Q1");
        else if (x>0 && y<0) printf("Q4");
        else if (x<0 && y>0) printf("Q2");
        else if (x<0 && y<0) printf("Q3");
    }
    else if (x==0 && y!=0) printf("Eixo X");
    else if (x!=0 && y==0) printf("Eixo Y");
    else printf("Origem");
}