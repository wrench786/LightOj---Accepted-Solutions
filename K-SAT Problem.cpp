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
        int n,m,k,i,j,l,p,flag,co,x;
        cin>>n>>m>>k;
        vector<vector<int>>vec(n,vector<int>(k));
        for(i=0;i<n;i++){
            for(j=0;j<k;j++){
                cin>>vec[i][j];
            }
        }
        cin>>p;
        vector<int>ans(p,0);
        for(i=0;i<p;i++){
            cin>>ans[i];
        }
        flag=1;
        for(i=0;i<n;i++){
            for(j=0;j<k;j++){
                x = vec[i][j];
                if(x>0){
                    co=0;
                    for(l=0;l<p;l++){
                        if(ans[l]==x){
                            co=1;
                            break;
                        }
                    }
                }
                else{
                    co=1;
                    for(l=0;l<p;l++){
                        if(ans[l]== -x){
                            co=0;
                            break;
                        }
                    }
                }
                if(co){
                    break;
                }
            }
            if(!co){
                flag = 0;
                break;
            }
        }
        (flag)?cout<<"Yes"<<endl:cout<<"No"<<endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
