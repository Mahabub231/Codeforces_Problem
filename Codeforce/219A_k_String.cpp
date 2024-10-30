#include <iostream>
#include <string>
using namespace std;

int main()
{
    int k,n[200]={0};
    string s;
    cin >>k>>s;
    
    for(char c:s){
        n[c]++;
    }
    for(char c='a';c<='z';c++){
        if(n[c] % k !=0){
            cout<<"-1"<<endl;
            return 0;
        }
    }
    for(int i=0;i<k;i++){
        for(char c='a';c<='z';c++){
            for(int j=0;j<n[c]/k;j++){
                cout<<c;
            }
        }
    }
    
    return 0;
}