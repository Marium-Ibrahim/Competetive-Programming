#include<bits/stdc++.h>
using namespace std;

#define sz 5

int main(){
    
    int n, count=0;
    cin>>n;
    
    count+=n/100;
    n=n%100;
    count+=n/20;
    n=n%20;
    count+=n/10;
    n=n%10;
    count+=n/5;
    n=n%5;
    count+=n/1;

    cout<<count<<endl;
    
    return 0;
}
