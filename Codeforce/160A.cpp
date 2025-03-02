#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    
    cin>>n;
    vector<int>a(n);
    int total=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        total+=a[i];
    }
    int sum=0;
    sort(a.begin(), a.end(), greater<int>());
    int i=0;
    while(i<n){
        sum+=a[i];
        int l=total-sum;
        if(sum > l){
            break;
        }
        i++;
    }
    cout<<i+1<<endl;
    return 0;
}