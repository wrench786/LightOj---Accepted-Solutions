#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    while(n--){
        int a;
        scanf("%d",&a);
        if(a<=10){
            printf("%d %d\n",a,0);
        }
        else if(a>10 && a<=20){
            printf("%d %d\n",10,a-10);
        }
    }
}
