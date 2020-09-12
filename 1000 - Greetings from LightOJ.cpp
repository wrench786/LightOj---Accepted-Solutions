#include<iostream>

int main()
{
    int t,i;
    std::cin>>t;
    for(i=1;i<=t;i++){
        int a,b;
        std::cin>>a>>b;
        std::cout<<"Case "<<i<<": "<<a+b<<std::endl;
    }
}
