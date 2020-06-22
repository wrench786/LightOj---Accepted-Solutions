#include<stdio.h>
int main()
{
    int i,x,j;
    scanf("%d",&x);
    for(i=0;i<x;i++){
        int x1,y1,x2,y2,x3,y3,n;
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        scanf("%d",&n);
        printf("Case %d:\n",i+1);
        for(j=0;j<n;j++){
            scanf("%d %d",&x3,&y3);
            if(x3>x1 && x3<x2 && y3>y1 && y3<y2){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
        }
    }
}
