#include<iostream>
using namespace std;

int main()
{
    long long int n,i,a,b,sum;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>b;
        sum=0;
        if(b==1){
            sum = a/2;
            cout<<"Case "<<i+1<<": "<<sum<<endl;
        }
        else if(b%2==0){
            sum = (b/2)*a;
            cout<<"Case "<<i+1<<": "<<sum<<endl;
        }
        else{
            sum = (a*b)/2;
            cout<<"Case "<<i+1<<": "<<sum<<endl;
        }
    }
}
