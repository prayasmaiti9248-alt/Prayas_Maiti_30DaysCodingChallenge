#include <bits/stdc++.h>
using namespace std;

vector<int> rotateLeft(int d, vector<int> arr) {
    int n = arr.size();
    int r = d % n;

    for(int i = 0; i < r; i++) {
        int temp = arr[0];
        arr.erase(arr.begin());
        arr.push_back(temp);
    }

    return arr;
}