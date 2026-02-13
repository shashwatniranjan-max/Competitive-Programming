#include <bits/stdc++.h>
using namespace std;
bool check(vector<int>&  nums) {
    int count = 0;
    int n = nums.size();
    
    for(int i = 0; i < n; i++) {
        // Use % n to compare the last element (n-1) with the first element (0)
        if(nums[i] > nums[(i + 1) % n]) count++;
    }
    
    return count <= 1;
}