#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
	long m, R;
	R=1;
	cin>>m;
	if (m==0 || m==1){
		cout << 1;
	}
	else {
		if (m%2==0){
			for (int i=2; i<=m;i+=2)
				R=R*i;
		}
		else for (int i=1; i<=m;i+=2)
			R=R*i;
			cout<<R;
	}
return 0;
}
