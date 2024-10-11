#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int events[100000];
    for(int i=0;i<n;i++){
        cin>>events[i];
    }
    
    int available_officers=0;
    int untreatedCrimes =0;
    for(int i=0;i<n;i++){
        if(events[i]==-1){
            if(available_officers>0){
                available_officers--;
            }else{
            untreatedCrimes++;
                 }
        }else{
            available_officers+=events[i];
        }
    }
    cout<<untreatedCrimes<<"\n";
   return 0;
}