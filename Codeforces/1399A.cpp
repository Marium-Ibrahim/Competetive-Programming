#include <bits/stdc++.h>
using namespace std;
int arr[51];

int main()
{
    int tt;
    cin>>tt;
    for(int t=0;t<tt;t++){
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr, arr+n);
        bool no=false;
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]>1){
                cout<<"NO"<<endl;
                no=true;
                break;
            }
        }
        if(!no)
         cout<<"YES"<<endl;
    }

    return 0;
}
