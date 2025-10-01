#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,v;
    cin>>n>>v;
    vector<int>p;
    int count=0;
    for(int i=0;i<n;i++){
        int K;
        cin>>K;
        bool deal = false;
        for(int j=0;j<K;j++){
            int S;
            cin>>S;
            if(v > S){
                deal = true;
            }
        }
        if(deal) p.push_back(i+1);
    }
    cout<<p.size()<<endl;
    for(int i=0;i<(int)p.size();i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
    return 0;
}