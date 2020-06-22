#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int man,lift,result;
        scanf("%d %d",&man,&lift);
        if(man<=lift){
            result = 19+lift*4;
        }
        else{
            result = 19+(2*man-lift)*4;
        }
        printf("Case %d: %d\n",i+1,result);
    }
}
