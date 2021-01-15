#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define decimal(x) fixed<<setprecision(x)
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
        double r1,r2,r3,ab,ac,bc,a,b,c,area,s,ans,x;
        cin>>r1>>r2>>r3;
        ab = r1+r2;
        bc = r2+r3;
        ac = r1+r3;
        a = acos(((ab*ab)+(ac*ac)-(bc*bc))/(2*ab*ac));

        b = acos(((ab*ab)+(bc*bc)-(ac*ac))/(2*ab*bc));

        c = acos(((bc*bc)+(ac*ac)-(ab*ab))/(2*bc*ac));

        s = (ab+bc+ac)/2.0;
        area = sqrt(s*(s-ab)*(s-bc)*(s-ac));
        ans = area - (0.5*r1*r1*a) - (0.5*r2*r2*b) - (0.5*r3*r3*c);
        cout<<decimal(8)<<ans<<endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
