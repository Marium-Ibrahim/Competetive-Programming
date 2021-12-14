#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    double n,m,a;
    cin>>n>>m>>a;
    
    double len = n/a;
    double wid = m/a;
    
   unsigned long long res = ceil(len) * ceil(wid);
    
    cout<<res;
    return 0;
}