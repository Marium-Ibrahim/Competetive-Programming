#include <iostream>
#include<cmath>
using namespace std;

int main()
{
  int n;
  cin>>n;
  char a[n+1], b[n+1];
  int oneA=0, oneB=0;
  for(int i=0;i<n;i++){
      cin>>a[i];
      if(a[i]=='1')
         oneA++;
  }
   for(int i=0;i<n;i++){
      cin>>b[i];
      if(b[i]=='1')
         oneB++;
  }
  int cost=0;
  //cout<<endl<<"------output-------"<<endl;

  for(int i=0;i<n;i++){
    if(a[i]==b[i])
        continue;
    for(int j=i+1;j<i+2;j++){
        if(b[i]==a[j] && b[j]!=a[j]){
            char c=a[i];
            a[i]=a[j];
            a[j]=c;
            cost=cost+abs(j-i);
            break;
        }
    }
    //cout<<a<<" "<<cost<<endl<<endl;
  }

  /*if(oneA==oneB){
    cout<<cost;
    return 0;
  } */
  for(int i=0;i<n;i++){
    if(b[i]!=a[i]){
        a[i]=b[i];
        cost++;
    }
  }

  cout<<cost;

    return 0;
}
