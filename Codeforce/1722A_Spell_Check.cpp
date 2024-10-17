#include <iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    string s;
    string target = "Timur";
    sort(target.begin(), target.end());
    for(int i=0;i<t;i++){
        cin>>n>>s;
        sort(s.begin(), s.end());
        if(s==target){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}