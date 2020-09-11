#include<iostream>
#include<math.h>

int main()
{
    int t,i;
    std::cin>>t;
    for(i=1;i<=t;i++){
        long long int n,x,y;
        std::cin>>n;
        x = std::ceil(std::sqrt(n));
        y = n - (x-1)*(x-1);
        if(x%2!=0){
            if(x>=y){
                std::cout<<"Case "<<i<<": "<<x<<" "<<y<<std::endl;
            }
            else{
                std::cout<<"Case "<<i<<": "<<2*x-y<<" "<<x<<std::endl;
            }
        }
        else{
            if(x>=y){
                std::cout<<"Case "<<i<<": "<<y<<" "<<x<<std::endl;
            }
            else{
                std::cout<<"Case "<<i<<": "<<x<<" "<<2*x-y<<std::endl;
            }
        }
    }
}
