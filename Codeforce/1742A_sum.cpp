#include<iostream>
using namespace std;
int main(){
    int t,a,b,c;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>a>>b>>c;
        if(a+b==c || a+c==b || b+c==a){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
        
    }
    return 0;
}