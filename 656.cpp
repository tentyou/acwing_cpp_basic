#include<iostream>
#include<cstdio>
#include<cmath>
int main()
{
    double n;
    int n1,n2;
    std::cin>>n;
    n1=n/1;
    int notas[6]={100,50,20,10,5,2};
    int moedas[6]={100,50,25,10,5,1};
    std::cout<<"NOTAS:\n";
    for (int i=0;i<6;i++)
    {
        printf("%d nota(s) de R$ %d.00\n",n1/notas[i],notas[i]);
        n-=n1/notas[i]*notas[i];
        n1%=notas[i];
    }
    printf("MOEDAS:\n");
    n2=(int)round(n*100);
    for (int i=0;i<6;i++)
    {
        printf("%d moeda(s) de R$ %.2f\n",n2/moedas[i],moedas[i]/100.0);
        n2%=moedas[i];
    }
    return 0;
}