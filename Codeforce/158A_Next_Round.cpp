#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int score[50];
    
   for(int i=0;i<n;i++){
       cin>>score[i];
   }
   int score_up=score[k-1];
   int count=0;
   for(int i=0;i<n;i++){
       if(score[i]>=score_up && score[i]>0){
           count++;
       }
   }
   cout<<count<<"\n";
    return 0;
}