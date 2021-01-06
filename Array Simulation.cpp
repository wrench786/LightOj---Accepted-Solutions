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
        cout<<"Case "<<++cases<<":"<<endl;
        int n,m,i,j;
        cin>>n>>m;
        vector<int>vec(n,0);
        for(i=0;i<n;i++){
            cin>>vec[i];
        }
        cin.ignore();
        char ch;
        while(m--){
            cin>>ch;
            if(ch=='R'){
                reverse(vec.begin(),vec.end());
            }
            else if(ch=='S'){
                int x;
                cin>>x;
                for(i=0;i<n;i++){
                    vec[i]+=x;
                }
            }
            else if(ch=='M'){
                int x;
                cin>>x;
                for(i=0;i<n;i++){
                    vec[i]*=x;
                }
            }
            else if(ch=='D'){
                int x;
                cin>>x;
                for(i=0;i<n;i++){
                    vec[i]/=x;
                }
            }
            else if(ch=='P'){
                int x,y;
                cin>>x>>y;
                swap(vec[x],vec[y]);
            }
        }
        for(i=0;i<n;i++){
            if(i==n-1){
                cout<<vec[i]<<endl;
            }
            else{
                cout<<vec[i]<<" ";
            }
        }
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
