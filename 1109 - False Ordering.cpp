#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
using namespace std;

vector<int>ma;
vector<vector<int >>vec(1001);
void solve(){
    int i,j;
    for(i=1;i<1001;i++){
        int co=0;
        for(j=1;j*j<=i;j++){
            if(j*j==i)co++;
            else if(i%j==0)co+=2;
        }
        vec[co].push_back(i);
    }
    for(i=0;i<1001;i++){
        if(vec[i].size()){
            sort(vec[i].begin(),vec[i].end(),greater<int>());
            for(j=0;j<vec[i].size();j++){
                ma.push_back(vec[i][j]);
            }
        }
    }
}

int main(){
    //wrench786

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

    solve();
    int tc,co=0,n;
    cin>>tc;
    while(tc--){
        cin>>n;
        cout<<"Case "<<++co<<": "<<ma[n-1]<<"\n";
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
