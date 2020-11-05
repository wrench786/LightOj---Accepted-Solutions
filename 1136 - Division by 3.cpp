#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define i64 long long
#define PI (acos(-1.0))
#define LIMIT 1000000007
using namespace std;

int call(int n){
    if(n==0)return 0;
    int ans = (n/3)*2;
    if(n%3==2)ans++;
    return ans;
}

int main(){
    wrench786

    int tc,t;
    cin>>tc;
    for(t=1;t<=tc;t++){
    	int a,b,ans=0,i;
    	cin>>a>>b;

    	cout<<"Case "<<t<<": "<<call(b)- call(a-1)<<endl;
    }
}
