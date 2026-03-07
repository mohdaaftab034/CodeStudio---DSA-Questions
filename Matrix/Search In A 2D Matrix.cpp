// Problem - https://www.naukri.com/code360/problems/search-in-a-2d-matrix_980531?utm=codolio&count=25&page=1&search=search%20&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM&customSource=studio_nav


// ---------------Solution------------------
bool searchMatrix(vector<vector<int>>& mat, int target) {
    int m = mat.size();
    int n = mat[0].size();

    int start = 0;
    int end = n*m - 1;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        int row = mid / n;
        int col = mid % n;

        if(mat[row][col] == target) {
            return true;
        }

        else if(mat[row][col] < target) {
            start = mid + 1;
        } 

        else {
            end = mid - 1;
        }
    }

    return false;
}
