// Problem - https://www.naukri.com/code360/problems/search-in-a-grid_983645?utm=codolio&count=25&page=1&search=Search%20in%20a%20&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM&customSource=studio_nav


// ---------------------Solution----------------------------
#include <bits/stdc++.h> 
bool searchGrid(vector<vector<int>>& mat, int n, int m, int target)
{

    // start with Top right corner
    int row = 0;
    int col = m-1;

    while(row < n && col >= 0) {

        if(mat[row][col] == target) {
            return true;
        }

        else if(mat[row][col] < target) {
            row++;
        }

        else {
            col--;
        }
    }

    return false;
}



// -----------------Solution------------------
#include <bits/stdc++.h> 
bool searchGrid(vector<vector<int>>& mat, int n, int m, int target)
{
    for(int i = 0; i < n; i++) {
        if(mat[i][0] <= target && mat[i][m-1] >= target) {

            // Binary search
            int start = 0;
            int end = m-1;

            while(start <= end) {
                int mid = start + (end - start) / 2;

                if(mat[i][mid] == target) {
                    return true;
                }

                else if(mat[i][mid] < target) {
                    start = mid + 1;
                }

                else {
                    end = mid - 1;
                }
            }
        }
    }

    return false;
}
