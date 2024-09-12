#include <iostream>
#include<string>
using namespace std;

bool isLuckyNumber(int num) {
    string numStr = to_string(num);
    for (char digit : numStr) {
        if (digit != '4' && digit != '7') {
            return false;
        }
    }
    return true;
}

int main()
{
    long long n;
    int lucky_count=0;
    cin>>n;
    string s=to_string(n);
    
    for (char digit : s){
        if(digit== '4' || digit=='7'){
            lucky_count++;
          }
    }
    
    
    if(isLuckyNumber(lucky_count)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}