#include<iostream>
#include<cstdio>
int main()
{
    std::string a,b,c;
    std::cin>>a>>b>>c;
    if(a=="vertebrado")
    {
        if(b=="ave")
        {
            if(c=="carnivoro") printf("aguia");
            else if(c=="onivoro") printf("pomba");
        }
        if(b=="mamifero")
        {
            if(c=="onivoro") printf("homem");
            if(c=="herbivoro") printf("vaca");
        }
    }
    else if(a=="invertebrado")
    {
        if(b=="inseto")
        {
            if(c=="hematofago") printf("pulga");
            else if(c=="herbivoro") printf("lagarta");
        }
        if(b=="anelideo")
        {
            if(c=="hematofago") printf("sanguessuga");
            if(c=="onivoro") printf("minhoca");
        }
    }
}