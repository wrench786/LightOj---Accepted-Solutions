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
    while(tc--){
        cout<<"Case "<<++cases<<": ";
        int i,n,a,b,c,x,maxim=0,minim=0;
        string str,thief,victim;
        cin>>n;
        cin.ignore();
        for(i=0;i<n;i++){
            cin>>str>>a>>b>>c;
            if(!i){
                maxim = a*b*c;
                minim = maxim;
                thief = str;
                victim = str;
            }
            else{
                if(a*b*c>maxim){
                    maxim = a*b*c;
                    thief = str;
                }
                else if(a*b*c<minim){
                    minim = a*b*c;
                    victim = str;
                }
            }
        }
        if(maxim==minim){
            cout<<"no thief"<<endl;
        }
        else{
            cout<<thief<<" took chocolate from "<<victim<<endl;
        }
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
