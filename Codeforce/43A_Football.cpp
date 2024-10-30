#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int goal(0);
    string t,win;
    for(int i=0;i<n;i++){
       if(goal !=0){
           cin>>t;
           if(t==win){
               goal++;
           }else{
               goal--;
           }
       }else{
           cin>>win;
           goal=1;
       }
    }
   cout<<win<<endl;
    return 0;
}