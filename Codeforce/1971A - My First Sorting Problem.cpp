#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    int x,y;
    for(int i=0;i<t;i++){
        cin>>x>>y;
        int minimum=min(x,y);
        int maximun=max(x,y);
        
        cout<<minimum<<" "<<maximun<<endl;
    }
    
 
    return 0;
}