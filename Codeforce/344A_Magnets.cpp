#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    int magnets[n];
    for(int i=0;i<n;i++){
        cin>>magnets[i];
    }
    for(int j=0;j<n;j++){
        if(magnets[j]!=magnets[j+1]){
            count++;
        }
    }
    cout<<count<<endl;
}