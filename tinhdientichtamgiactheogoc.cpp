#include <math.h>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
	float a, b, x, PI=3.14159;
	double S;
	cin>>a>>b>>x;
	S = a*b*0.5*sin(x*PI/180);
	cout<<fixed<<setprecision(4)<<S;
	return 0;
}
