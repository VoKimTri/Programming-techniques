#include <iostream>
using namespace std;

int dem(long long int n){
	int s,i=0, k=0;
	while(n){
		s = n % 10;
		if(s % 2 == 0)
			k++;
		n = n / 10;
		i++;
	}
	cout<<i-k;
}
int main()
{
	long long int n;
	cin>>n;
	dem(n);
	return 0;
}
