#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int vis[n+1];
    memset(vis,0,sizeof(vis));
    
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        int elem;
        cin>>elem;
        vis[elem]=1;
    }
    int y;
    cin>>y;
    for(int i=0;i<y;i++){
        int elem;
        cin>>elem;
        vis[elem]=1;
    }
    
    for(int i=1;i<=n;i++){
        if(vis[i]==0){
            cout<<"Oh, my keyboard!"<<endl;
            return 0;
        }
    }
    
    cout<<"I become the guy."<<endl;
    return 0;
    
}
