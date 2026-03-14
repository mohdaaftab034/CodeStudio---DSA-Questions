// Problem - https://www.naukri.com/code360/problems/heap-sort_1262153?interviewProblemRedirection=true&search=heap%20&leftPanelTabValue=PROBLEM&count=25&page=1&sort_entity=order&sort_order=ASC&customSource=studio_nav



// ----------------Solution-----------------
#include <bits/stdc++.h> 

void heapify(vector<int>& arr, int n, int i) {
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	if(left < n && arr[left] > arr[largest]) {
		largest = left;
	}

	if(right < n && arr[right] > arr[largest]) {
		largest = right;
	}

	if(largest != i) {
		swap(arr[i], arr[largest]);
		heapify(arr, n, largest);
	}
}

vector<int> heapSort(vector<int>& arr, int n) {
	
	// Build max-heap
	for (int i = n/2 - 1; i >= 0; i--) {
		heapify(arr, n, i);
	}

	for (int i = n-1; i > 0; i--) {
		swap(arr[i], arr[0]);
		heapify(arr, i, 0);
	}

	return arr;
}
