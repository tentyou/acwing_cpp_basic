#include<iostream>
#include<cstdio>
int main()
{
    int number,time;
    float salary;
    std::cin>>number>>time>>salary;
    printf("NUMBER = %d\nSALARY = U$ %.2f",number,time*salary);
    return 0;
}