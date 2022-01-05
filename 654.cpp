#include<iostream>
#include<cstdio>
int main()
{
    int n;
    std::cin>>n;
    int hours,minutes,seconds;
    hours=n/3600;
    minutes=(n-hours*3600)/60;
    seconds=n-hours*3600-minutes*60;
    printf("%d:%d:%d",hours,minutes,seconds);
    return 0;
}