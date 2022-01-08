#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double n;
    long long k,res;
    cin>>n>>k;
    
    long double mid = ceil(n/2);
    
    if(k<=(long long)mid){
        res = 2*k-1;
        cout<<res<<endl;
    }
    else{
        k=k-(long long)mid;
        res = 2*k;
        cout<<res<<endl;
    }

    return 0;
}
