#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    int day=0;
    int same=0;
    
    cin>>a>>b;
    if(a>=b){
       day=b;
       c=a-b;
       same=c/2;
       cout<<day<<" "<<same<<endl;
    }else if(b>=a){
       day=a;
       c=b-a;
       same=c/2;
       cout<<day<<" "<<same<<endl;
    }

    return 0;
}