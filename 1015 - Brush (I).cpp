#include<stdio.h>
using namespace std;

int main()
{
    int x,i,j,sum,n,a;
    scanf("%d",&x);
    for(i=0;i<x;i++){
        sum=0;
        scanf("%d",&n);
        for(j=0;j<n;j++){
            scanf("%d",&a);
            if(a>0){
                sum=sum+a;
            }
        }
        printf("Case %d: %d\n",i+1,sum);
    }
}
