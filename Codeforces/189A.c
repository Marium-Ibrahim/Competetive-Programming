#include <bits/stdc++.h>
using namespace std;

//Idea: n=ax+by+cz,
//we need to maximize x+y+z
//using loop we are trying different values of x,y and find value for z, and store maximum x+y+z

int main()
{
    double n,a,b,c;
    int ans=0;
    cin>>n>>a>>b>>c;
    
    for(int x=0;x<=4000;x++){
        for(int y=0;y<=4000;y++){
            double zc = n - (a*x+b*y);
            if(zc<0)
                break;
            double z = zc/c;
            if(z==(int)z){
                int eq = x+y+z;
                ans=max(ans,eq);
            }
            
        }
    }
    
    cout<<ans<<endl;

    return 0;
}
