#include<iostream>
using namespace std;
int main(){
    int number[1000];
    int t;
    int num=1;
    int index=0;
    while(index<1000){
        if(num%3 !=0 && num%10 !=3){
        number[index]=num;
        index++;
            
        }
        num++;
    }
    cin>>t;
    for(int i=0;i<t;i++){
       int k;
       cin>>k;
       cout<<number[k-1]<<endl;
    }
    return 0;
}