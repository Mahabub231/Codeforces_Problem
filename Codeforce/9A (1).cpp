#include <iostream>
using namespace std;

int main() {
    int Y, W;
    cin >> Y >> W;
    int M = max(Y,W);
    M=6-M;
    M++;
    int d=6;
    if(M==6){
        M/=6;
        d/=6;
    }else if(M==4){
        M/=2;
        d/=2;
    }else if(M==3){
        M/=3;
        d/=3;
    }else if(M==2){
        M/=2;
        d/=2;
    }
    
    cout<<M<<"/"<<d;
    
    return 0;
}
