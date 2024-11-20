#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b;
    cin>>n>>m;
    a=n*m;
    if(m>n){
        b=a/m;
    }else{
        b=a/n;
    }
    if(b%2==0){
        cout<<"Malvika"<<endl;;
    }else{
        cout<<"Akshat"<<endl;
    }
    return 0;
}