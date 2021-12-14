#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the climbingLeaderboard function below.
vector<int> climbingLeaderboard(vector<int> scores, vector<int> alice,int scores_count,int alice_count) {
   
    vector<int> ret;
    map<int,int>position; 
    int pos=1;
    position[scores[0]]=pos;
    for(int i=1;i<scores_count;i++){
        if(scores[i]!=scores[i-1]){
            pos++;
            position[scores[i]]=pos;
        }
    }
    for(int i=0;i<alice_count;i++){
        int cmpVal = alice[i];
        int begin=0, end=scores_count-1;
        if(cmpVal>=scores[0]){
             ret.push_back(1);
             continue;
        }
        else if(cmpVal==scores[end]){
             ret.push_back(position[scores[end]]);
             continue;
        }
        else if(cmpVal<scores[end]){
             ret.push_back(position[scores[end]]+1);
             continue;
        }
        while(begin<=end){
            int mid = (begin+end)/2;
            if(scores[mid]==cmpVal){
                ret.push_back(position[scores[mid]]);
                break;
            }
            else if(cmpVal>scores[mid] && cmpVal<scores[mid-1]){
                ret.push_back(position[scores[mid]]);
                break; 
            }
            else if(cmpVal<scores[mid] && cmpVal>scores[mid+1]){
                ret.push_back(position[scores[mid+1]]);
                break; 
            }
            else if(cmpVal>scores[mid]){
                end = mid-1;
            }
            else if(cmpVal<scores[mid]){
                begin = mid+1;
            }
        }
        
    }

    return ret;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int scores_count;
    cin >> scores_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string scores_temp_temp;
    getline(cin, scores_temp_temp);

    vector<string> scores_temp = split_string(scores_temp_temp);

    vector<int> scores(scores_count);

    for (int i = 0; i < scores_count; i++) {
        int scores_item = stoi(scores_temp[i]);

        scores[i] = scores_item;
    }

    int alice_count;
    cin >> alice_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string alice_temp_temp;
    getline(cin, alice_temp_temp);

    vector<string> alice_temp = split_string(alice_temp_temp);

    vector<int> alice(alice_count);

    for (int i = 0; i < alice_count; i++) {
        int alice_item = stoi(alice_temp[i]);

        alice[i] = alice_item;
    }

    vector<int> result = climbingLeaderboard(scores, alice, scores_count,alice_count);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
