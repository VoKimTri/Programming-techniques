#include <bits/stdc++.h>
#include <math.h>
#include <iostream>

using namespace std;

long long int x[100001], y[100001];

int main()
{
	long int n, i;
	long long int S;
	cin>>n;
	S=0;
	for (i=0; i<n; i++){
		cin>>x[i]>>y[i];
	}
	for (i=0; i<n; i++){
		for (int j=i+1; j<n;j++){
			S = S + pow((x[i]-x[j]),2)+ pow((y[i]-y[j]),2);
		}
	}
	cout<<S;

	return 0;
}
