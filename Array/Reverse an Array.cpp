// Problem - https://www.naukri.com/code360/problems/reverse-an-array_8365444?interviewProblemRedirection=true&search=reverse&leftPanelTabValue=PROBLEM



// ----------------------Solution----------------------
vector<int> reverseArray(int n, vector<int> &nums)
{
    int i = 0;
    int j = n-1;

    while(i < j) {
        swap(nums[i], nums[j]);
        i++;
        j--;
    }
    return nums;
}
