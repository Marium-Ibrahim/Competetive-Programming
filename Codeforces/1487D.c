#include <bits/stdc++.h>
using namespace std;

//using 2 equations
// a = sqrt(b+c), b, c are also within max limit n, so, used a = sqrt(2*n)
// a*a = 1+2c, as a square is odd, a will also be odd
// c = (a*a-1)/2, b=1+c

int main()
{
    int t;
    cin>>t;
    
    while(t--){
       
        int n, count=0;
        cin>>n;
        int limit = sqrt(2*n);
        
        for(int i=1;i<=limit;i=i+2){
            
            double a, b, c;
            a = (double)i;
            c = (a*a - 1)/2;
            b = 1+c;
            
            if(c==(int)c && b==(int)b && c!=0.0 && b!=0.0)
                count++;
            
        }
        cout<<count<<endl;
    }
    

    return 0;
}
