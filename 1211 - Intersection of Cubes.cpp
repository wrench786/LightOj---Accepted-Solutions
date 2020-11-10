#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define i64 long long
#define PI (acos(-1.0))
#define LIMIT 1000000007
using namespace std;

int main(){
    wrench786

    int tc,t=0;
    cin>>tc;
    while(tc--){
    	int n,i,x1,x2,y1,y2,z1,z2,xa,xb,ya,yb,za,zb;
    	cin>>n;
    	for(i=0;i<n;i++){
    		cin>>x1>>y1>>z1>>x2>>y2>>z2;
    		if(i==0){
    			xa = x1;
    			xb = x2;
    			ya = y1;
    			yb = y2;
    			za = z1;
    			zb = z2;
    		}
    		else{
    			if(x1>xa) xa = x1;
    			if(x2<xb) xb = x2;
    			if(y1>ya) ya = y1;
    			if(y2<yb) yb = y2;
    			if(z1>za) za = z1;
    			if(z2<zb) zb = z2;
    		}
    	}
    	int ans = (xb-xa)*(yb-ya)*(zb-za);
    	if(ans<0) cout<<"Case "<<++t<<": "<<0<<"\n"
    	else cout<<"Case "<<++t<<": "<<ans<<"\n";
    }

}
