// Problem - https://www.naukri.com/code360/problems/reverse-string-word-wise_624402?interviewProblemRedirection=true&search=reverse&leftPanelTabValue=PROBLEM&count=25&page=1&sort_entity=order&sort_order=ASC&customSource=studio_nav




// ----------------------Solution------------------------
#include <cstring>

void reversePart(char input[], int start, int end) {
    while(start < end) {
        char temp = input[start];
        input[start] = input[end];
        input[end] = temp;
        start++;
        end--;
    }
}

void reverseStringWordWise(char input[]) {
    
    int n = strlen(input);

    // Step 1: reverse whole string
    reversePart(input, 0, n - 1);

    int start = 0;

    // Step 2: reverse each word
    for(int i = 0; i <= n; i++) {
        if(input[i] == ' ' || input[i] == '\0') {
            reversePart(input, start, i - 1);
            start = i + 1;
        }
    }
}
