#include<iostream>
#include<cstdio>
#include<math.h>
int main()
{
    double x1,y1,x2,y2;
    std::cin>>x1>>y1>>x2>>y2;
    double distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("%.4lf",distance);
    return 0;
}