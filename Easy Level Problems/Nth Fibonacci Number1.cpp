// Problem - https://www.naukri.com/code360/problems/nth-fibonacci-number_11302398?interviewProblemRedirection=true&leftPanelTabValue=PROBLEM&count=25&page=3&search=&sort_entity=order&sort_order=ASC&customSource=studio_nav



// ---------------------Solution------------------------
#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n;
        cin >> n;

        if(n == 1 || n == 2) {
                cout << 1;
                return 0;
        }

        long long a = 1, b = 1, c;

        for (int i = 3; i <= n; i++) {
                c = a + b;
                a = b;
                b = c;
        }

        cout << b;
        return 0;
}
