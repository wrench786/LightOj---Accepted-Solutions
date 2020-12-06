#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define mod 10000007
using namespace std;

int main(){
    wrench786

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

    int n,tc,cases=0,i,a,b,c,d,e,f;
    vector<int>vec(10001,0);
    cin>>tc;
    while(tc--) {
        cin>>a>>b>>c>>d>>e>>f>>n;
        vec[0] = a%mod;
        vec[1] = b%mod;
        vec[2] = c%mod;
        vec[3] = d%mod;
        vec[4] = e%mod;
        vec[5] = f%mod;
        for(i=6;i<=n;i++){
            vec[i] = (vec[i-1]+vec[i-2]+vec[i-3]+vec[i-4]+vec[i-5]+vec[i-6])%mod;
        }
        cout<<"Case "<<++cases<<": "<<vec[n]<<"\n";
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
}
