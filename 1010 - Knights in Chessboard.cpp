#include<iostream>
using namespace std;

int main()
{
    int n,i,a,b,x;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a>>b;
        if(a==1 || b==1){
            cout<<"Case "<<i<<": "<<a+b-1<<endl;
        }
        else if(a==2 || b==2){
            x = a+b;
            if(x==4 || x==5){
                cout<<"Case "<<i<<": "<<4<<endl;
            }
            else if((x-2)%4==0){
                cout<<"Case "<<i<<": "<<x-2<<endl;
            }
            else if((x-2)%2==0){
                cout<<"Case "<<i<<": "<<x<<endl;
            }
            else if((x-2)%2!=0){
                cout<<"Case "<<i<<": "<<x-1<<endl;
            }
        }
        else{
            x = a*b;
            if(x%2==0){
                cout<<"Case "<<i<<": "<<x/2<<endl;
            }
            else{
                cout<<"Case "<<i<<": "<<(x+1)/2<<endl;
            }
        }
    }
}
