#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int height=0;
    int cubesUsed =0;
    for(int level=1; ;level++){
        int cubesForLevel =(level*(level+1))/2;
        if(cubesUsed+cubesForLevel>n){
            break;
        }
        cubesUsed+=cubesForLevel;
        height++;
    }
    cout<<height<<"\n";
    
   return 0;
}