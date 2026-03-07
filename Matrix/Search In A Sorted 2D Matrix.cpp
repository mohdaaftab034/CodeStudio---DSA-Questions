// Problem - https://www.naukri.com/code360/problems/search-in-a-sorted-2d-matrix_6917532?utm=codolio&count=25&page=1&search=Search%20in%20a%20&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM&customSource=studio_nav


// ------------------Solution---------------------
bool searchElement(vector<vector<int>> &MATRIX, int target) {
    int m = MATRIX.size();
    int n = MATRIX[0].size();

    int start = 0;
    int end = n*m - 1;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        int row = mid / n;
        int col = mid % n;

        if(MATRIX[row][col] == target) {
            return true;
        }

        else if(MATRIX[row][col] < target) {
            start = mid + 1;
        }

        else {
            end = mid - 1;
        }
    }
    return false;
}
