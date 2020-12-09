#include <bits/stdc++.h>
#define wrench786 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define PI (acos(-1.0))
using namespace std;

int main(){
   // wrench786
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif

    int tc,cases=0;
    cin>>tc;
    cin.ignore();
    while(tc--){
    	cout<<"Case "<<++cases<<":"<<"\n";
    	vector<string>vec;
    	vec.push_back("http://www.lightoj.com/");
    	string str;
    	int co=0;
    	while(getline(cin,str) && str!="QUIT"){
    		if(str[0]=='V'){
    			str.erase(str.begin(),str.begin()+6);
    			co++;
    			vec.erase(vec.begin()+co,vec.end());
    			vec.push_back(str);
    			cout<<vec[co]<<"\n";
    		}
    		else if(str[0]=='B'){
    			co--;
    			if(co<0){
    				cout<<"Ignored\n";
    				co=0;
    			}
    			else{
    				cout<<vec[co]<<"\n";
    			}
    		}
    		else if(str[0]=='F'){
    			co++;
    			if(vec.size()==co){
    				cout<<"Ignored\n";
    				co=vec.size()-1;
    			}
    			else{
    				cout<<vec[co]<<"\n";
    			}
    		}
    	}
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

}
