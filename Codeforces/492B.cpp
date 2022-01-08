#include <bits/stdc++.h>
using namespace std;

double arr[1000];

int main()
{
    double n,l, maxi;
    cin>>n>>l;
    int intN = (int)n;
 
    for(int i=0;i<n;i++)
        cin>>arr[i];
      
    sort(arr,arr+intN);
    
    double firstDis=arr[0]-0, lastDis=l-arr[intN-1];
    maxi=max(firstDis,lastDis);
    
    for(int i=0;i<n-1;i++){
       double dis = (arr[i+1]-arr[i])/2;
       maxi = max(maxi,dis); 
    }
    cout<<fixed<<setprecision(10)<<maxi<<endl;
    
    return 0;
}
