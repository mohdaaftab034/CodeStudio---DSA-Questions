// Problem  - https://www.naukri.com/code360/problems/nth-fibonacci-number_74156?interviewProblemRedirection=true&leftPanelTabValue=PROBLEM&count=25&page=3&search=&sort_entity=order&sort_order=ASC&customSource=studio_nav


// ------------------Solution---------------------
#include<bits/stdc++.h>
using namespace std;

int fibonacciNumber(int n) {
        if(n == 1 || n == 2) {
                return 1;
        }

        return fibonacciNumber(n-1) + fibonacciNumber(n-2);
}

int main()
{
        int n;
        cin >> n;

        cout << fibonacciNumber(n);

}
