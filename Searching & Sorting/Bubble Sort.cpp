// Problem - https://www.naukri.com/code360/problems/bubble-sort_980524?interviewProblemRedirection=true&search=bubble&leftPanelTabValue=PROBLEM&count=25&page=1&sort_entity=order&sort_order=ASC&customSource=studio_nav



// ----------------------Solution -> 1----------------------------
#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}



// -------------------Solution---------------------
#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    for (int i = 0; i < n-1; i++) {

        bool swaped = false; // for breaking the loop so that we can solve that problem in order of n time complexiety in best case

        for (int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swaped = true;

            }
        }

        if(swaped == false) break;
    }
}
