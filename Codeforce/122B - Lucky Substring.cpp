#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    int n=s.size();
    int F=0,S=0,FS=0;
    for(int i=0;i<n;i++){
        if(s[i]=='4'){
            F++;
        }else if (s[i]=='7'){
            S++;
        }else if((s[i]=='4' && s[i+1]=='7') && i+1<n){
            FS++;
        }
    }
    
    if((F==0 && S==0) && FS==0 ){
        cout<<-1<<endl;
    }else{
        int ans=0;
        ans=max(F,max(S,FS));
        if(ans==F || F== S){
            cout<<4<<endl;
        }else if(ans==S){
            cout<<7<<endl;
        }
    }
    
    return 0;
}