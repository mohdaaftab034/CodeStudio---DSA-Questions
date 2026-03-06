// problem Link - https://www.naukri.com/code360/problems/k-largest-element_1062624?utm=codolio&leftPanelTabValue=PROBLEM



// --------------------Solution------------------------
#include <bits/stdc++.h> 
vector<int> Klargest(vector<int> &a, int k, int n) {
    vector<int> ans;

    if(k > n) return ans;

    // Sort the array
    sort(a.begin(), a.end());

    for(int i = n-k; i < n; i++) {
        ans.push_back(a[i]);
    }

    return ans;
}
