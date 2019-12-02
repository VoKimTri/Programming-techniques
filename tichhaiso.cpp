#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

int main ()
{
	long a,b;
	long m;
	cin>>a>>b;
	m=(a*b)%2;
	if (m==0){
		cout<<"Even";
	}
	else {
		cout<<"Odd";
	}
	return 0;
}
