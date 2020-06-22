#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        long int a,b,c;
        scanf("%ld %ld %ld",&a,&b,&c);
        if(a>b && a>c){
            if(a*a==b*b+c*c){
                printf("Case %d: yes\n",i+1);
            }
            else{
                printf("Case %d: no\n",i+1);
            }
        }
        else if(b>a && b>c){
            if(b*b==a*a+c*c){
                printf("Case %d: yes\n",i+1);
            }
            else{
                printf("Case %d: no\n",i+1);
            }
        }
        else if(c>a && c>b){
            if(c*c==b*b+a*a){
                printf("Case %d: yes\n",i+1);
            }
            else{
                printf("Case %d: no\n",i+1);
            }
        }
        else{
            printf("Case %d: no\n",i+1);
        }
    }
}
