#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=0, p=0;
    cin>>n>>p;
    int pArr[p];
    
    for(int i=0;i<p;i++){
        cin>>pArr[i];
    }
    
    sort(pArr, pArr+p);
    int min=2000;
    
    for(int i=0;i<=p-n;i++){
        
        int diff=pArr[i+n-1]-pArr[i];
        if(diff<min){
            min=diff;
        }
    }

    cout<<min<<endl;
    return 0;
}
