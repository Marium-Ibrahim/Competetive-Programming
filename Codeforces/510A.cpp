#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m, turn=0;
    cin>>n>>m;
    char ar[n+1][m+1];
    
    for(int i=1;i<=n;i++){
       if(i%2)
         memset(ar[i], '#', sizeof(ar[i]));
       else{
            memset(ar[i], '.', sizeof(ar[i]));
            if(turn%2==0)
                 ar[i][m]='#';
            else
                ar[i][1]='#';
            turn++;    
       } 
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<ar[i][j];
        }
        cout<<endl;
    }

    return 0;
}
