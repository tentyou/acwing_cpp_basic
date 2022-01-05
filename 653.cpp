#include<iostream>
#include<cstdio>
int main()
{
    int num;
    std::cin>>num;
    int money[7]={100,50,20,10,5,2,1};
    printf("%d\n",num);
    for(int i=0;i<7;i++)
    {
        printf("%d nota(s) de R$ %d,00\n",num/money[i],money[i]);
        num%=money[i];
    }
    return 0;
}