#include <bits/stdc++.h>
using namespace std;
 
// odd-odd = even, any even other than 2 is composite, the first odd composite is 9, the result will be greater than 2 as n starts from 12
//even-even = even, 4 is first even composite, n starts from 12, 12-4=8>2, then the other results will obviously greater than 2
 
int main()
{
    int n;
    cin>>n;
    
    if(n&1)
        cout<<9<<" "<<(n-9);
    else
        cout<<4<<" "<<(n-4);
       
    return 0;
}
