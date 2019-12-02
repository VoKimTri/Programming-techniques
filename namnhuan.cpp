#include <math.h>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;



bool nhuan(int n){
	if (n%100==0){
		if (n%400==0){
			cout<<"leap year"<<endl;
		}
		else{
			cout<<"none"<<endl;
		}
	}
	else{
		if (n%4==0){
			cout<<"leap year"<<endl;
		}
		else{
			cout<<"none"<<endl;
		}
	}
	return 0;
}

int a[11];

int main()
{
	int n, i;
	cin>>n;
	for (i = 0; i < n; i++){
		cin>>a[i];
	}
	for (i = 0; i < n; i++){
		nhuan(a[i]);
	}
	return 0;
}
