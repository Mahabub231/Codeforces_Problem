#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int a[1000];
    int aa=0,bb=0,cc=0;
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(i%3==0){
            aa+=a[i];
        }else if(i%3==1){
            bb+=a[i];
        }else{
            cc+=a[i];
        }
    }
    if(aa>bb && aa>cc){
        cout<<"chest"<<endl;
    }else if(bb>aa && bb>cc){
        cout<<"biceps"<<endl;
    }else{
        cout<<"back"<<endl;
    }
    return 0;
}
