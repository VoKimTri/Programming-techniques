#include <math.h>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

double a[100];

void nhap(int n){
	for (int i=0; i<n*6; i++){
		cin>>a[i];
	}
}

int main()
{
	int n;
	cin>>n;
		nhap(n);
	for (int k=0; k<n; k++){
		double D, Dx, Dy, x, y;
		D  = a[6*k] * a[6*k+4] - a[6*k+3] * a[6*k+1];
		Dx = a[6*k+2]* a[6*k+4] - a[6*k+5] * a[6*k+1];
		Dy = a[6*k] * a[6*k+5] - a[6*k+3] * a[6*k+2];
		if (D == 0) {
       		if (Dx - Dy == 0)
				cout << "Many solutions"<< endl;
			else
				cout << "No solution"<<endl;
	    }
		else {
			x = Dx / D;
			y = Dy / D;
			cout <<	fixed << setprecision(6) << x << " ";
			cout <<	fixed << setprecision(6) << y<<endl;
   		}
	}
	return 0;
}
