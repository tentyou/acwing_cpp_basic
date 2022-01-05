#include<iostream>
#include<cstdio>
int main()
{
    int x,y;
    std::cin>>x>>y;
    if(x==1)
    {
        printf("Total: R$ %.2lf",4.00*y);
    }
    else if(x==2)
    {
        printf("Total: R$ %.2lf",4.50*y);
    }
    else if(x==3)
    {
        printf("Total: R$ %.2lf",5.00*y);
    }
    else if(x==4)
    {
        printf("Total: R$ %.2lf",2.00*y);
    }
    else if(x==5)
    {
        printf("Total: R$ %.2lf",1.50*y);
    }
    return 0;
}