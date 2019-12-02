#include <math.h>
#include <iostream>

using namespace std;

long long int a[21];

long long int sum(long long int i){
	int s = 0;
	while(i){
		long long int a=i%10;
		if (a%2==0){
			s+=i%10;
		}
		i=i/10;
	}
	cout<<s<<endl;
}

int main()
{
	int n;
	cin>>n;
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	for (int i=0; i<n; i++){
		sum(a[i]);
	}
	return 0;
}
