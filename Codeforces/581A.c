#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a,b;
    cin>>a>>b;
    
    int fash = min(a,b);
    int left = (max(a,b)-fash)/2;
    cout<<fash<<" "<<left<<endl;
    
    return 0;
}
