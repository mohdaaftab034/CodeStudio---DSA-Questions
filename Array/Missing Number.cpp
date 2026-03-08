// Problem - https://www.naukri.com/code360/problems/missing-number_6680467?interviewProblemRedirection=true&search=Missing%20&leftPanelTabValue=PROBLEM




// -------------------Solution------------------------
int missingNumber(vector<int>&a, int N) {
    int aSum = 0;

    for(int i = 0; i < N-1; i++) {
        aSum += a[i];
    }

    int ExpSum = (N)*(N+1)/2;

    int misNum = ExpSum - aSum;

    return misNum;
}
