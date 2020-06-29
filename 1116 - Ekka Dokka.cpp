#include<stdio.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        long long int x,j,z,co=0;
        scanf("%lld",&x);
        if(x%2!=0){
            printf("Case %d: Impossible\n",i+1);
        }
        else{
            for(j=2;j<=x;j+=2){
                if(x%j==0 && (x/j)%2!=0){
                    co++;
                    break;
                }
            }
            if(co>0){
                printf("Case %d: %lld %lld\n",i+1,x/j,j);
            }
            else{
                printf("Case %d: Impossible\n",i+1);
            }
        }
    }
}
