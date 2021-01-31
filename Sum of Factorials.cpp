#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define LIMIT 1000000000
#define pb push_back
#define dot(x) fixed<<setprecision(x)
using namespace std;

vector<ll int>vec(20,1);
 void solve(){
    int i;
    for(i=2;i<20;i++){
        vec[i] = vec[i-1] * i;
    }
 }

int main(){
    wrench786

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

    solve();
    int tc,cases=0;
    cin>>tc;
    while(tc--){
        ll int n,i=19;
        cin>>n;
        vector<int>ans;
        cout<<"Case "<<++cases<<": ";
        while(n!=0 && i>=0){
            if(vec[i]<=n){
                n -= vec[i];
                ans.pb(i);
            }
            i--;
        }
        if(n>0) cout<<"impossible"<<endl;
        else{
            for(i=ans.size()-1;i>=0;i--){
                if(!i) cout<<ans[i]<<"!"<<endl;
                else cout<<ans[i]<<"!+";
            }
        }
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
