// Problem - https://www.naukri.com/code360/problems/merge-sort_920442?interviewProblemRedirection=true&search=merge&leftPanelTabValue=PROBLEM





// ----------------------Solution-----------------------
void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> l(n1), r(n2);

    for(int i = 0; i < n1; i++) {
        l[i] = arr[left + i];
    }

    for(int i = 0; i < n2; i++) {
        r[i] = arr[mid + 1 + i];
    }

    int i = 0; 
    int j = 0;
    int k = left;

    while (i < n1 && j < n2) {
        if(l[i] <= r[j]) {
            arr[k] = l[i];
            i++;
        } else {
            arr[k] = r[j];
            j++;
        }
        
        k++;
    }

    while (i < n1) {
        arr[k] = l[i];
        i++;
        k++;
    }

    while(j < n2) {
        arr[k] = r[j];
        j++;
        k++;
    }
}

void findMergeSort(vector<int>& arr, int left, int right) {
    if(left < right) {
        int mid = (left + right) / 2;

        findMergeSort(arr, left, mid);
        findMergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

void mergeSort(vector < int > & arr, int n) {
    int left = 0;
    int right = n-1;

    findMergeSort(arr, left, right);

}
