#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define LIMIT 1000000000
using namespace std;


ll int solve(string str,ll int n){
    int i;
    ll int remainder = 0;
    for(i=0;i<str.size();i++){
        remainder = (remainder*10 + (ll int)(str[i]-'0'))%n;
    }
    return remainder;
}

int main(){
    wrench786

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

    ll int tc,cases=0;
    cin>>tc;
    cin.ignore();
    while(tc--){
        cout<<"Case "<<++cases<<": ";
        ll int n,ans;
        string str;
        cin>>str>>n;
        cin.ignore();
        if(str[0]=='-'){
            str.erase(str.begin());
        }
        if(n<0){
            n = -n;
        }
        ans = solve(str,n);
        if(ans) cout<<"not divisible"<<endl;
        else cout<<"divisible"<<endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
