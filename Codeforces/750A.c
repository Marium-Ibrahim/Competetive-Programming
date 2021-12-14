#include <iostream>

using namespace std;

int main()
{
    int totalMint = 4*60;
    int n,k;
    cin>>n>>k;
    int leftMint = totalMint - k;
    
    int i=1, sumMint=0;
    for(;i<=n;i++){
        sumMint+=i*5;
        if(leftMint - sumMint <0)
            break;
        
    }
    
    cout<<i-1<<endl;
    return 0;
}
