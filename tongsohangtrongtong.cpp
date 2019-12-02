#include <math.h>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int tongchuso(int n){
	int a = 0;
	while (n){
		a+=n%10;
		n/=10;
	}
	return a;
}

int main()
{
	int n, a, b, S = 0;
	cin>>n>>a>>b;
	for (int i = 0; i <= n; i++){
		if (tongchuso(i) >=a && tongchuso(i)<=b){
			S = S + i;
		}
	}
	cout<<S;
	return 0;
}
