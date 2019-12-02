#include <math.h>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int a[100001];

int main()
{
	int n, i, k = 0;
	cin>>n;
	for (i = 0; i < n; i++){
		cin>>a[i];
	}
	for (i = 0; i < n; i++){
		if (a[i]%3==0 || a[i]%7==0){
			k++;
		}
	}
	cout<<k;
	return 0;
}
