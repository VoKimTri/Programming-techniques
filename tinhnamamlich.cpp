#include <math.h>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int a[100001];

int main()
{
	int n, i, k = 0;
	cin>>n;
	for (i = 0; i < n; i++){
		cin>>a[i];
		if (a[i]%19==0 || a[i]%19==3 || a[i]%19==6 || a[i]%19==9 || a[i]%19==11 || a[i]%19==14 || a[i]%19==17)
			k++;
	}
	cout<<k;
}
