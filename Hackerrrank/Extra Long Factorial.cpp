#include <bits/stdc++.h>

using namespace std;

// Complete the extraLongFactorials function below.
void extraLongFactorials(int n) {

    string s="1";
    for(int i=1;i<=n;i++){
        int l = s.length(), carry=0;
        string rs="";
        for(int j=l-1;j>=0;j--){
            int x = (s[j]-'0')*i + carry;
            if(j>0)
                 rs = to_string(x%10)+rs;
            else
                 rs = to_string(x)+rs;     
            carry = x/10;
        }
        //cout<<rs<<endl;
        s=rs;
    }

   cout<<s<<endl;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    extraLongFactorials(n);

    return 0;
}
