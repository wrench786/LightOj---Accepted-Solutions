#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define LIMIT 1000000000
using namespace std;

int main(){
    wrench786

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

    int tc,cases=0;
    cin>>tc;
    cin.ignore();
    while(tc--){
        cout<<"Case "<<++cases<<": ";
        string str1,str2;
        int i,j,flag=1,a=0,b=0,c=0,d=0,co,x=0;
        getline(cin,str1);
        getline(cin,str2);
        for(i=str1.size()-1,co=1,j=1;i>=0;i--){
            if(str1[i]=='.'){
                co++;
                j=1;
            }
            else{
                if(co==1){
                    d+=j*(str1[i]-48);
                }
                else if(co==2){
                    c+=j*(str1[i]-48);
                }
                else if(co==3){
                    b+=j*(str1[i]-48);
                }
                else if(co==4){
                    a+=j*(str1[i]-48);
                }
                j*=10;
            }
        }
        for(i=str2.size()-1,x=0,j=1,co=1;i>=0;i--){
            if(str2[i]=='.'){
                if(co==1 && x!=d)flag=0;
                else if(co==2 && x!=c)flag=0;
                else if(co==3 && x!=b)flag=0;
                co++;
                j=1;
                x=0;
            }
            else{
                x+= j*(str2[i]-48);
                j*=2;
            }
            if(i==0 && x!=a)flag=0;
        }
        (flag)?cout<<"Yes"<<endl:cout<<"No"<<endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
