#include <bits/stdc++.h>
using namespace std;
 
bool isVowels(char ch){
    char lower = tolower(ch);
    return ( lower=='a' ||lower=='e' ||lower=='i'||
             lower=='o' || lower=='u'||lower=='y'
           );
}
int main()
{
    string s,output;
    cin>>s;
 
    for(char ch:s){
       if(!isVowels(ch)){
           output+='.';
           output+=tolower(ch);
       } 
    }
    cout<<output;
    return 0;
}