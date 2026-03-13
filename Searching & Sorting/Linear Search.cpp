// Problem - https://www.naukri.com/code360/problems/linear-search_624470?interviewProblemRedirection=true&search=&leftPanelTabValue=PROBLEM&count=25&page=1&sort_entity=order&sort_order=ASC&customSource=studio_nav




// ----------------------Solution------------------------
int linearSearch(int *arr, int n, int x)
{
    for (int i = 0; i < n; i++) {

        if(arr[i] == x) {
            return i;
        }
    }

    return -1;
}
