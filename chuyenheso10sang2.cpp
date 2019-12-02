#include <bits/stdc++.h>
#include <math.h>
#include <iostream>

using namespace std;

int a[1000];

int main ()
{
	int n, i, k;
	cin>>n;
	i=0;
	while (n>0){
		a[i]=n % 2;
		n = n / 2;
		i++;
	}
	for (int j = i - 1; j >= 0; j--) 
        cout << a[j]; 
    return 0;
}
