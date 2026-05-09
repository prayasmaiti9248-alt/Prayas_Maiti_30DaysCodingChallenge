#include<bits/stdc++.h>
using namespace std;
int cookies(int k, vector<int> A) {
    multiset<long long> s;
    
    for(int i = 0; i < A.size(); i++){
        s.insert(A[i]);
    }
    
    int ans = 0;
    
    while(s.size() >= 2 && *s.begin() < k){
        
        auto i1 = s.begin();
        long long l1 = *i1;
        s.erase(i1);
        
        auto i2 = s.begin();
        long long l2 = *i2;
        s.erase(i2);
        
        long long ns = l1 + 2 * l2;
        
        s.insert(ns);
        
        ans++;
    }
    
    if(!s.empty() && *s.begin() >= k){
        return ans;
    }
    
    return -1;
}