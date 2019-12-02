#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

int main ()
{
	int n, a, b, c;
	cin>>n;
	a=n/365;
	b=(n%365)/30;
	c=n%365%30;
	if (a>0){
		cout<<a<<" years"<<endl;
	}
	if (b>0){
		cout<<b<<" months"<<endl;
	}
	if (c>0){
		cout<<c<<" days";
	}
}
