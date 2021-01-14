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
    int ax,ay,bx,by,cx,cy,dx,dy,tc,cases=0,x,area;
    cin>>tc;
    while(tc--){
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        int diff_x = abs(ax-bx);
        int diff_y = abs(ay-by);
        if(bx>ax){
            dx = cx-diff_x;
        }
        else{
            dx=cx+diff_x;
        }
        if(by>ay){
            dy = cy - diff_y;
        }
        else{
            dy=cy+ diff_y;
        }
        x = ((ax*by)+(bx*cy)+(cx*dy)+(dx*ay))-((ay*bx)+(by*cx)+(cy*dx)+(dy*ax));
        if(x<0) x = -x;
        area = 0.5 * x;
        cout<<"Case "<<++cases<<": "<<dx<<" "<<dy<<" "<<area<<endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
