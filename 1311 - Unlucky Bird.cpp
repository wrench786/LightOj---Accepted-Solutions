#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define i64 long long
#define PI (acos(-1.0))
#define LIMIT 1000000007
using namespace std;

int main(){
    wrench786

#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

    int t,tc=0;
    cin>>t;
    while(t--){
    	double v1,v2,v3,a1,a2,s1,s2,t1,t2,t;
    	cin>>v1>>v2>>v3>>a1>>a2;
    	t1 = v1/a1;
    	t2 = v2/a2;
    	s1 = (v1*t1)-(0.5*a1*t1*t1);
    	s2 = (v2*t2)-(0.5*a2*t2*t2);
    	t = max(t1,t2);
    	cout<<"Case "<<++tc<<": "<<fixed<<setprecision(10)<<s1+s2<<" "<<v3*t<<"\n";
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
}
