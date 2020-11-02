#include<iostream>
#include<math.h>

int main()
{
    int n,t;
    std::cin>>n;
    for(t=1;t<=n;t++){
        int r1,c1,r2,c2,ans;
        std::cin>>r1>>c1>>r2>>c2;
        if(std::abs(r1-r2)==std::abs(c1-c2)){
            std::cout<<"Case "<<t<<": "<<1<<std::endl;
        }
        else{
            ans = std::abs(r1-r2) + std::abs(c1-c2);
            if(ans%2!=0){
                std::cout<<"Case "<<t<<": "<<"impossible"<<std::endl;
            }
            else{
                std::cout<<"Case "<<t<<": "<<2<<std::endl;
            }
        }
    }
}
