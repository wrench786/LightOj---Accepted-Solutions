#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
#define LIMIT 1000000000
using namespace std;

int leapyear(int n){
    if(n%4==0){
        if(n%100==0){
            if(n%400==0) return 1;
            else return 0;
        }
        else return 1;
    }
    else return 0;
}

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
        string s_month,e_month,ch;
        int s_date,e_date,s_year,e_year,i,ans=0,x,y;
        cin>>s_month>>s_date>>ch>>s_year;
        cin.ignore();
        cin>>e_month>>e_date>>ch>>e_year;
        cin.ignore();
        if( s_year==e_year && (s_month=="January" || s_month == "February") && (leapyear(s_year)) && e_month!="January"){
            if(e_month=="February"){
                if(e_date==29)ans++;
            }
            else{
                ans++;
            }
            cout<<ans<<endl;
        }
        else{
            if(leapyear(s_year)){
                if( s_month=="January" || s_month=="February" )ans++;
            }
            if(leapyear(e_year)){
                if(e_month!="January"){
                    if(e_month=="February"){
                        if(e_date==29) ans++;
                    }
                    else ans++;
                }
            }
            x = ((e_year-1)/4) + ((e_year-1)/400) - ((e_year-1)/100);
            y = ((s_year)/4) + ((s_year)/400) - ((s_year)/100);
            ans+= x - y;
            cout<<ans<<endl;
        }
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
