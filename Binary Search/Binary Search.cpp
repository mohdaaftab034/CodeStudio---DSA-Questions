// Problem - https://www.naukri.com/code360/problems/binary-search_972?interviewProblemRedirection=true&search=&leftPanelTabValue=PROBLEM&count=25&page=1&sort_entity=order&sort_order=ASC&customSource=studio_nav



// ---------------------Solution--------------------------
int search(vector<int> &nums, int target) {
    int n = nums.size();
    int start = 0;
    int end = n-1;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(nums[mid] == target) {
            return mid;
        } 

        else if(nums[mid] < target) {
            start = mid + 1;
        } 

        else {
            end = mid - 1;
        }

    }
    return -1;
}
