#include <math.h>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
	long long n, s;
	int k = 0;
	cin>>n;
	while (n){
		s=n%10;
		if (s%2==0){
			k++;
		}
		n = n/10;
	}
	cout<<k;
	return 0;
}
