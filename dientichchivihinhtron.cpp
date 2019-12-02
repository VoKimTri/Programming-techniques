#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

int main ()

{
	float r;
	float P, S, PI=3.14159;
	cin>>r;
	P=2*PI*r;
	S=PI*r*r;
	cout<<"Chu vi = "<<fixed<<setprecision(4)<<P<<endl;
	cout<<"Dien tich = "<<fixed<<setprecision(4)<<S;
	return 0;
}
