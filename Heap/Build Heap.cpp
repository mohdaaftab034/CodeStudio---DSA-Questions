// Problem Link - https://www.naukri.com/code360/problems/build-heap_975375?utm=codolio&count=25&page=1&search=build%20heap&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM&customSource=studio_nav



// --------------------Solution-----------------------
#include <bits/stdc++.h> 

void heapify(vector<int>& arr, int n, int i) {
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	if(left < n && arr[largest] < arr[left]) {
		largest = left;
	}

	if(right < n && arr[largest] < arr[right]) {
		largest = right;
	}

	if(largest != i) {
		swap(arr[i], arr[largest]);
		heapify(arr, n, largest);
	}
}

vector<int> buildHeap(vector<int> arr, int n)
{	
	for(int i = n / 2 - 1; i >= 0; i--) {
		heapify(arr, n, i);
	}

	return arr;
}
