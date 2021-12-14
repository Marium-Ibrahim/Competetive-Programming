#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
       
       string s;
       cin>>s;
       int len = s.length();
       int cnt = count(s.begin(),s.end(),'0');
       cout<<len-cnt<<endl;
       
       for(int i=len-1,j=0;i>=0;i--,j++){
           
           if(s[i]!='0'){
               string s2(j,'0');
               cout<<s[i]+s2<<" ";
           }
       }
       cout<<endl;
       
    }
       
    return 0;
}
