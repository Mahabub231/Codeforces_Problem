#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<char> c(s.begin(), s.end());
    string find="hello";
    int i=0;
    for(char ch : c){
        if(ch==find[i]){
            i++;
        }
    }
    if(i==find.size()){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}