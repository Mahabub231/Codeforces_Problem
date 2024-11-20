#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    string s;
    for(int i=0;i<t;i++){
        cin>>s;
        string r;
        r=s;
        sort(s.begin(),s.end());
        if(s.front()==s.back()){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            if(r==s){
                swap(s.front(),s.back());
            }
            cout<<s<<endl;
        }
    }
 
    return 0;
}