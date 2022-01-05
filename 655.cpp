#include<iostream>
int main()
{
    int n;
    std::cin>>n;
    int days[3]={365,30,1};
    std::string names[3]={"ano(s)","mes(es)","dia(s)"};
    for (int i=0;i<3;i++)
    {
        std::cout<<n/days[i]<<" "<<names[i]<<std::endl;
        n%=days[i];
    }
    return 0;
}