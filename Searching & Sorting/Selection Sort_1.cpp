// Problem - https://www.naukri.com/code360/problems/selection-sort_981162?interviewProblemRedirection=true&search=selection%20sort&leftPanelTabValue=PROBLEM&count=25&page=1&sort_entity=order&sort_order=ASC&customSource=studio_nav



// --------------------Solution------------------------
#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    for (int i = 0; i < n-1; i++) {
        int mini = i;

        for (int j = i+1; j < n; j++) {

            if(arr[j] < arr[mini]) {
                mini = j;
            }
        }

        swap(arr[i], arr[mini]);
    }
}
