#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b,c,mid=0;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
        if(a>=b && a>=c){
            if(b<=c){
                mid=c;
            }else{
                mid=b;
            }
        }else if(b>=a && b>=c){
            if(a<=c){
                mid=c;
            }else{
                mid=a;
            }
        }else{
            if(a<=b){
                mid=b;
            }else{
                mid=a;
            }
        }
     cout<<mid<<endl;
    }
    
    return 0;
}