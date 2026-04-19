#include <bits/stdc++.h>
using namespace std;

vector<int> matchingStrings(vector<string> stringList, vector<string> queries) {
    
    unordered_map<string,int> m;
    vector<int> ans;
    for(int i=0;i<stringList.size();i++){
        m[stringList[i]]++;
    }
    for(int i=0;i<queries.size();i++){
       ans.push_back(m[queries[i]]);
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    
    vector<string> stringList(n);
    for (int i = 0; i < n; i++) {
        cin >> stringList[i];
    }
    
    int q;
    cin >> q;
    
    vector<string> queries(q);
    for (int i = 0; i < q; i++) {
        cin >> queries[i];
    }
    
    vector<int> res = matchingStrings(stringList, queries);
    
    for (int x : res) {
        cout << x << endl;
    }
    
    return 0;
}