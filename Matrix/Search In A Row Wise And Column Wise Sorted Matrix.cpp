// Problem - https://www.naukri.com/code360/problems/search-in-a-row-wise-and-column-wise-sorted-matrix_839811?utm=codolio&count=25&page=1&search=Search%20in%20a%20&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM&customSource=studio_nav


// ----------------Solution--------------------
#include <bits/stdc++.h> 
pair<int, int> search(vector<vector<int>> matrix, int x)
{
    int m = matrix.size();
    int n = matrix[0].size();


    for(int i = 0; i < m; i++) {
        if(matrix[i][0] <= x && matrix[i][n-1] >= x) {

            // binary search in every row

            
            int start = 0;
            int end = n-1;


            while(start <= end) {
                int mid = start + (end - start) / 2;

                if(matrix[i][mid] == x) {
                    return {i, mid};
                }
                
                else if(matrix[i][mid] < x) {
                    start = mid + 1;
                }

                else {
                    end = mid - 1;
                }
            }
        }
    }

    return {-1, -1};
}



//-----------------------Solution----------------------------
#include <bits/stdc++.h> 
pair<int, int> search(vector<vector<int>> matrix, int target)
{
    int m = matrix.size();
    int n = matrix[0].size();

    int row = 0;
    int col = n-1;

    while(row < m && col >= 0) {
        
        if(matrix[row][col] == target) {
            return {row, col};
        }

        else if(matrix[row][col] < target) {
            row++;
        } 
        else {
            col--;
        }
    }

    return {-1, -1};
}
