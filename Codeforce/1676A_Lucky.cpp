#include <iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int sum=0;
    for(int i=0;i<t;i++){
            string s;
            cin>>s;
            
       int s1=s[0]+s[1]+s[2];
       int s2=s[3]+s[4]+s[5];
            if(s1==s2){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
    }
    return 0;
}