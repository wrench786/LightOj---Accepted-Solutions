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


    int tc,t=0;
    cin>>tc;
    while(tc--){
    	double ox,oy,ax,ay,bx,by,r,ab,s;
    	cin>>ox>>oy>>ax>>ay>>bx>>by;
    	r = sqrt(((ox-ax)*(ox-ax))+((oy-ay)*(oy-ay)));
    	ab = sqrt(((ax-bx)*(ax-bx))+((ay-by)*(ay-by)));
    	double x = ab/2.0;
    	double theta = 2 * asin(x/r);
    	s = r*theta;
    	cout<<"Case "<<++t<<": "<<fixed<<setprecision(6)<<s<<"\n";
    }



#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
