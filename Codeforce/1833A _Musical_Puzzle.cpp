#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
    unordered_set<string>st;
    for(int i=0; i<n-1;i++){
        st.insert(s.substr(i,2));
    }
    cout<<st.size()<<endl;
        
    }

    return 0;
}