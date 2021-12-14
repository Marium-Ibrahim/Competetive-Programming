#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int l1,l2;
string st1,st2;


int main(){

    cin>>st1>>st2;
    l1=st1.length();
    l2=st2.length();
    int Move=0, i=l1-1, j=l2-1;
    while(i>=0 && j>=0 && st1[i]==st2[j]){
        i--;
        j--;
        Move++;
    }

    cout<< (l1+l2-2*Move);

}
 
