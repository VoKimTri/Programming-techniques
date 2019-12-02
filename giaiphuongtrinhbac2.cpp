#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

int main ()
{
	float a, b, c;
	double M, x1, x2;
	cin>>a>>b>>c;
	M=b*b-4*a*c;
	if (M<0){
		cout << "No solution";
	}
	else{
		if (M==0){
			x1 = (-b)/(2*a);
			x2 = x1;
			cout<<fixed<<setprecision(4)<<x1;
		}
		else {
			x1 = (-b+sqrt(M))/(2*a);
			x2 = (-b-sqrt(M))/(2*a);
			cout<<fixed<<setprecision(4)<<x1<<endl;
			cout<<fixed<<setprecision(4)<<x2;
		}
	}
	return 0;
}
