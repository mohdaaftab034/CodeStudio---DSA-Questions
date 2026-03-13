// Problem - https://www.naukri.com/code360/problems/insertion-sort_3155179?interviewProblemRedirection=true&search=insertio&leftPanelTabValue=PROBLEM&count=25&page=1&sort_entity=order&sort_order=ASC&customSource=studio_nav



// -----------------------Solution-------------------------
#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i-1;

        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }
}
