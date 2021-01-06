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
        int i,n,p,q,tw=0,tn=0;
        cin>>n>>p>>q;
        vector<int>vec(n,0);
        for(i=0;i<n;i++){
            cin>>vec[i];
        }
        for(i=0;vec[i]+tw<=q && tn+1<=p && i<n ;i++){
            tw+=vec[i];
            tn+=1;
        }
        cout<<tn<<endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
