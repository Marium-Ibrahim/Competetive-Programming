#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    
    if(a!=1 && b!=1 && c!=1){
        cout<<a*b*c<<endl;
    }
    else{
        int max=-1;
        int ar[6];
        ar[0]=a*b+c;
        ar[1]=a*(b+c);
        ar[2]=a+b*c;
        ar[3]=(a+b)*c;
        ar[4]=a+b+c;
        ar[5]=a*b*c;
        
        for(int i=0;i<6;i++){
            if(ar[i]>max)
                max=ar[i];
        }
        cout<<max<<endl;
    }
    
    return 0;
}
