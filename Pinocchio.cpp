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
        int i,n,ans=0,x;
        cin>>n;
        vector<int>vec(n,0);
        for(i=0;i<n;i++){
            cin>>vec[i];
        }
        for(i=0;i<n;i++){
            if(!i){
                x = vec[i]-2;
                ans+=x/5;
                if(x%5!=0)ans++;
            }
            else if(vec[i]>vec[i-1]){
                x = vec[i]-vec[i-1];
                ans+=x/5;
                if(x%5!=0)ans++;
            }
        }
        cout<<ans<<endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
