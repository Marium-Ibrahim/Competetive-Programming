#include<bits/stdc++.h>
using namespace std;

#define sz 4

int main(){
    
    unordered_set<int>s;
    for(int i=0;i<sz;i++){
        int color;
        cin>>color;
        s.insert(color);
    }
    
    cout<<(sz-s.size())<<endl;
    
    return 0;
}
