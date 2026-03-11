// ---------------------Solution--------------------
#include <bits/stdc++.h> 
long long int reverseNumber(long long int n)
{
	long long r_num = 0;
	while(n) {
		long long rem = n % 10;
		n = n / 10;
		
		r_num = r_num * 10 + rem;
	}

	return r_num;
}
