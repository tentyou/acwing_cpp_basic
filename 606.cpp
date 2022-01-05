#include<iostream>
#include<stdio.h>
int main()
{
    float a,b;
    std::cin>>a>>b;
    double answer=(a*3.5+b*7.5)/11;
    printf("MEDIA = %.5lf",answer);
    return 0;
}