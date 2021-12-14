#include<bits/stdc++.h>
using namespace std;
vector<int>g[1000];
int vis[1000];
int dep[1000];

int bfs(int s, int d){

    vis[s]=1;
    dep[s]=0;
    queue<int>q;
    q.push(s);
    while(!q.empty()){

        int p=q.front();
        q.pop();

        if(p==d)
            return dep[p];

        for(int i=0;i<g[p].size();i++){

            int c=g[p][i];
            if(vis[c]==1)
                continue;
            vis[c]=1;
            dep[c]=dep[p]+6;
            q.push(c);

        }


    }

    return -1;

}


int main(){

    int q;
    cin>>q;

    for(int i=1;i<=q;i++){
        int n,m;
        cin>>n>>m;
        for(int j=0;j<1000;j++){
            g[j].clear();
        }
        for(int j=0;j<m;j++){
            int e1,e2;
            cin>>e1>>e2;
            g[e1].push_back(e2);
            g[e2].push_back(e1);
        }
        int s;
        cin>>s;
        for(int k=1;k<=n;k++){
           if(k==s)
                continue;
           memset(vis,0,sizeof(vis));
           int result =  bfs(s,k);
           cout<<result<<" ";
        }

        cout<<endl;
    }




    return 0;
}
