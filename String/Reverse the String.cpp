// Problem - https://www.naukri.com/code360/problems/reverse-the-string_799927?interviewProblemRedirection=true&search=reverse&leftPanelTabValue=PROBLEM




// ------------------Solution--------------------
#include <bits/stdc++.h> 
string reverseString(string str)
{
	int i = 0;
	int j = str.size() - 1;

	while(i <= j) {
		swap(str[i], str[j]);
		i++;
		j--;
	}
	return str;
}
