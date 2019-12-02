#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

int main ()
{
	float a, b, c;
	double m, S;
	cin>>a>>b>>c;
	if (a+b<=c||a+c<=b||b+c<=a){
		cout<<"No Solution";
	}
	else{
		m=(a+b+c)/2;
		S=sqrt((m-a)*(m-b)*(m-c)*m);
		cout<<fixed<<setprecision(6)<<S;
	}
	return 0;
}
