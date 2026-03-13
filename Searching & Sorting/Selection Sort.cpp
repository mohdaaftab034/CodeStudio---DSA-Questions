// Problem - https://www.naukri.com/code360/problems/selection-sort_624469?interviewProblemRedirection=true&search=selection%20sort&leftPanelTabValue=PROBLEM


// ----------------------Solution-----------------------
void selectionSort(vector<int>&arr) {
    int n = arr.size();

    // Selection Sort
    for(int i = 0; i < n-1; i++) {

        int mini = i; // For storing the minimum element index

        for(int j = i+1; j < n; j++) {

            if(arr[j] < arr[mini]) {
                
                mini = j;
            }
        }

        swap(arr[i], arr[mini]);
    }
}
