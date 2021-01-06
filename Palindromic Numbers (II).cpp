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
    cin.ignore();
    while(tc--){
        cout<<"Case "<<++cases<<": ";
        string str;
        int i,j,flag=1;
        cin>>str;
        for(i=0,j=str.size()-1;i<=j;i++,j--){
            if(str[i]!=str[j])flag=0;
        }
        (flag)?cout<<"Yes"<<endl:cout<<"No"<<endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
