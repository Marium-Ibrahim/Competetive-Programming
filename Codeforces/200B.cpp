#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    cin>>n;
    double sum=0;
    
    for(int i=0;i<n;i++){
        double x;
        cin>>x;
        sum+=x;
    }
   
   cout<<(sum/n)<<endl;
   
    return 0;
}
