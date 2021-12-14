#include<iostream>
#include<cstring>
#include<queue>
using namespace std;

int l;

bool palindrom(string s){
    l=s.length();

    for(int i=0,j=l-1;i<l/2;i++){
        if(s[i]!=s[j])
            return false;
        j--;
    }
    return true;
}

string change(string s){

    for(int i=0;i<l-1;i++){
        if(s[i]!=s[i+1]){
            char c=s[i];
            s[i]=s[i+1];
            s[i+1]=c;
            return s;
        }
    }
    s="\0";
    return s;

}

int main(){

    queue<string>q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        bool p=palindrom(s);
        if(p==true)
             s=change(s);
        q.push(s);
    }

    while(!q.empty()){
        if(q.front()!="\0")
            cout<<q.front()<<endl;
        else
            cout<<-1<<endl;
        q.pop();
    }


    return 0;
}
