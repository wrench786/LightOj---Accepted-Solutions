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
        vector<int>vec(26,0);
        string str1,str2;
        int i,flag=1;
        getline(cin,str1);
        getline(cin,str2);
        for(i=0;i<str1.size();i++){
            if(str1[i]>=65 && str1[i]<=90){
                vec[str1[i]-'A']++;
            }
            else if(str1[i]>=97 && str1[i]<=122){
                vec[str1[i]-'a']++;
            }
        }
        for(i=0;i<str2.size();i++){
            if(str2[i]>=65 && str2[i]<=90){
                vec[str2[i]-'A']--;
            }
            else if(str2[i]>=97 && str2[i]<=122){
                vec[str2[i]-'a']--;
            }
        }
        for(i=0;i<26;i++){
            if(vec[i]){
                flag = 0;
                break;
            }
        }
        (flag)?cout<<"Yes"<<endl:cout<<"No"<<endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
