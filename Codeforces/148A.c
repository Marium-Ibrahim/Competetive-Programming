#include <bits/stdc++.h>
using namespace std;

int main()
{
    int dgs[4];
    
    for(int i=0;i<4;i++){
        cin>>dgs[i];
    }
        
    int d;
    cin>>d;
    
    for(int i=0;i<4;i++){
        if(dgs[i]==1){
            cout<<d<<endl;
            return 0;
        }
    }
    
    int vis[d+1];
    memset(vis,0,sizeof(vis));
    
    for(int j=0;j<4;j++){
        int dgrn = dgs[j];
        for(int i=dgrn;i<=d;i=i+dgrn)
            vis[i]=1;
    }
    
    int count=0;
    for(int i=1;i<=d;i++){
        if(vis[i]==1)
            count++;
    }
    
    cout<<count<<endl;    
    
    return 0;
    
}
