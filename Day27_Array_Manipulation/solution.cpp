#include<bits/stdc++.h>
using namespace std;
long arrayManipulation(int n, vector<vector<int>> queries) {
    
    vector<long> ar(n + 2, 0);
    
    for(int i = 0; i < queries.size(); i++){
        
        int a = queries[i][0];
        int b = queries[i][1];
        int k = queries[i][2];
        
        ar[a] += k;
        ar[b + 1] -= k;
    }
    
    long sum = 0;
    long mx = 0;
    
    for(int i = 1; i <= n; i++){
        
        sum += ar[i];
        mx = max(mx, sum);
    }
    
    return mx;
}