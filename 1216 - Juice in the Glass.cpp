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
    	int r1,r2,h,p;
    	cin>>r1>>r2>>h>>p;
    	double theta = atan((r1-r2)/(double)h);
    	double new_r1 = r2 + tan(theta)*p;
    	double ans = (PI/3)*p*(new_r1*new_r1 + r2*r2 + new_r1 * r2);
    	cout<<"Case "<<++tc<<": "<<fixed<<setprecision(10)<<ans<<"\n";
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
}
