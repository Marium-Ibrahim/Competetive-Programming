#include <bits/stdc++.h>
using namespace std;
#define ll long long

unordered_map<ll,ll>cubes;

bool _cube(ll x){
    
    for(ll i=1;i*i*i<=x;i++){
        
        ll comp = x - i*i*i;
        unordered_map<ll,ll>:: iterator it = cubes.find(comp);
        if(it!=cubes.end()){
            return true;
        }
    }  
   return false; 
}


int main()
{
    for(ll i=1;i*i*i<=10000000000000;i++)
        cubes[i*i*i]=i;
    
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        ll x;
        cin>>x;
        
        if(_cube(x))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
