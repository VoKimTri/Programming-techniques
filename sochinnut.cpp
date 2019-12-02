#include <math.h>
#include <iostream>

using namespace std;

int so(int n)
{
	int s = 0;
	while (n){
		s+=n%10;
		n/=10;
	}
	return s;
}

int main()
{
	int n, k = 0;
	cin>>n;
	for (int i = 1; i<=n; i++){
		if (so(i)%10 == 9)
			k++;
	}
	cout<<k;
	return 0;
}
