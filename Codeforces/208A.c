#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<char>vec;
    
    for(int i=0;s[i]!='\0';){
        
        if(s.substr(i,3)=="WUB"){
            vec.push_back(' ');
            i+=3;
        }
        else{
            vec.push_back(s[i]);
            i++;
        }
        
    }
    
    int l = vec.size();
 
    for(int i=0;i<l;){
     
          if(i==0 && vec[i]==' '){
              while(vec[i]==' ' && i<l) //remove all front spaces
                  i++;
          }
          else if(i!=0 && vec[i]==' ' && i<l){
              cout<<vec[i];
              while(vec[i]==' ' && i<l) //remove more than one space
                  i++;
          }
          else if(i<l){
            cout<<vec[i];
            i++;
          }
      
    }
        
   
    return 0;
}
