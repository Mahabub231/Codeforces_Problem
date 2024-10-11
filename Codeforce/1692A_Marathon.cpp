#include<iostream>
using namespace std;
int main(){
    int t,a,b,c,d;
    cin>>t;
    int count=0;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c>>d;
       
        if(a<b){
            count++;
        }
        if(a<c){
            count++;
        }
        if(a<d){
            count++;
        }
        cout<<count<<endl;
        count=0;
    }
   
    return 0;

}