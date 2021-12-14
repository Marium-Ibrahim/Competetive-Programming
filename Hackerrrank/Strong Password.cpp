#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string pass) {
    int digit=0,low=0,up=0,sp=0,cnt=0;
    for(int i=0;i<n;i++){
        if(pass[i]>='a' && pass[i]<='z')
            low++;
        else if(pass[i]>='A' && pass[i]<='Z') 
            up++;
        else if(pass[i]>='0' && pass[i]<='9') 
            digit++;
        else if( (pass[i]>='(' && pass[i]<='+') || (pass[i]>='#' && pass[i]<='&') ||                    pass[i]=='-' || pass[i]=='!' || pass[i]=='^' || pass[i]=='@' ) 
            sp++;        

    }
    if(digit==0)
        cnt++;
    if(low==0)
        cnt++;
    if(up==0)
        cnt++;
    if(sp==0)
        cnt++;
    if(n+cnt<6)
        cnt=cnt+(6-(n+cnt));
    return cnt;       


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}
