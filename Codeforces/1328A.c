#include<bits/stdc++.h>
using namespace std;

int countMove(int a, int b){
    
    if(a%b==0)
        return 0;
    
    int mod=a%b;
    return b-mod;
     
}

int main(){
    
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        
        int a,b;
        cin>>a>>b;
        int move=countMove(a,b);
        cout<<move<<endl;
        
    }
    
    return 0;
}
