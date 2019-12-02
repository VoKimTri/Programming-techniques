#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
	double x1, y1, x2, y2 , S;
	cin>>x1>>y1>>x2>>y2;
	S=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	cout <<fixed<<setprecision(4)<<S;
return 0;
}
