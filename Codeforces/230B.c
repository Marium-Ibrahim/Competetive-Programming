#include <bits/stdc++.h>
using namespace std;
# define sz 1000001
 
int main()
{
    // sieve prime
    bitset<sz>composite;
    composite.set(1);
    
    int sqr = sqrt(sz);
    
    for(int i=2;i<sqr;i++){
        
        if(composite[i])
            continue;
        for(int j=i*i;j<sz;j=j+i)
            composite.set(j);
    }
    ///
    
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        
        double c;
        cin>>c;
        
        double sqr2 = sqrt(c);
        
        if(sqr2==(int)sqr2 && composite[sqr2]==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
        
    }
 
    return 0;
}
