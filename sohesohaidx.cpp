#include <bits/stdc++.h>
#include <math.h>
#include <iostream>

using namespace std;

int a[101], x[101];

int main ()

{
	int n, i;
	cin >> n;
	for (i = 0; i < n; i++){
		cin >> a[i];
	}
	
	for (i = 0; i < n; i++){
		while (n>0){
			x[i]= a[i] % 2;
			a[i] = a[i] / 2;
			i++;
		}	
	}
	
	int t, r, s = 0;
	for(t=x[i];x[i]!=0;x[i]=x[i]/10){
		r=x[i]%10;
		s=s*10+r;
    }
    
    if(t==s){
        cout << "Yes";
    }
    else{
    	cout << "No";
	}
	
	return 0;
}
