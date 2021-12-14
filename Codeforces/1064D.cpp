#include<iostream>
#include<deque>
using namespace std;

char ar[2005][2005];
int vis[2005][2005];
int n,m;

struct Cell{
    int row,col,lft,rght;
};

deque<Cell>dq;

int bfs(int r, int c, int left, int right){

    int rslt=0;
    Cell cell={r,c,left,right};
    dq.push_back(cell);

    while(!dq.empty()){
        cell=dq.front();
        dq.pop_front();

        r=cell.row, c=cell.col, left=cell.lft, right=cell.rght;
        if(vis[r][c])
            continue;

        rslt++;
        vis[r][c]=1;

        if(r>1 && ar[r-1][c]=='.'){
            Cell nghbrCell={r-1,c,left,right};
            dq.push_front(nghbrCell);
        }
        if(r<n && ar[r+1][c]=='.'){
            Cell nghbrCell={r+1,c,left,right};
            dq.push_front(nghbrCell);
        }
        if(c>1 && ar[r][c-1]=='.' && left>0){
            Cell nghbrCell={r,c-1,left-1,right};
            dq.push_back(nghbrCell);
        }
        if(c<m && ar[r][c+1]=='.' && right>0){
            Cell nghbrCell={r,c+1,left,right-1};
            dq.push_back(nghbrCell);
        }


    }

    return rslt;

}

int main(){

    int r,c,left,right, result;
    cin>>n>>m>>r>>c>>left>>right;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
            cin>>ar[i][j];
    }

    result=bfs(r,c,left,right);
    cout<<result<<endl;

    return 0;

}
