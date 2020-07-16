#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int t,k,i,j,n,x;
    scanf("%d",&t);
    for(k=0;k<t;k++){
        i=0;
        x=0;
        char bin[100];
        scanf("%d",&n);
        while(n!=0){
            if(n%2==0){
                bin[i]='0';
            }
            else{
                bin[i]='1';
            }
            i++;
            n/=2;
        }
        for(j=i-1;j>=0;j--){
            if(bin[j]=='1'){
                x++;
            }
        }
        if(x%2==0){
            printf("Case %d: even\n",k+1);
        }
        else{
            printf("Case %d: odd\n",k+1);
        }
    }
}
