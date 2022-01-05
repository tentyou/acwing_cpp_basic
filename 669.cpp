#include<iostream>
#include<cstdio>
int main()
{
    double sal;
    std::cin>>sal;
    if (sal>=0 && sal<=400.00) printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%",sal*1.15,sal*0.15);
    else if (sal>=400.01 && sal<=800.00) printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%",sal*1.12,sal*0.12);
    else if (sal>=800.01 && sal<=1200.00) printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%",sal*1.1,sal*0.1);
    else if (sal>=1200.01 && sal<=2000.00) printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%",sal*1.07,sal*0.07);
    else if (sal>=2000.01) printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%",sal*1.04,sal*0.04);
    return 0;
}