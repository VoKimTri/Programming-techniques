#include <iostream>
#include <math.h>

using namespace std;

int dem(long a, long b){
	int k=0;
	for (int i=a; i<=b; i++){
		k++;
	}
	return k;
}

int main()
{
	long a, b;
	cin>>a>>b;
	if (a<=0 && b>=0)
		cout<<"Zero";
	if (a>0 && b>0)
		cout<<"Positive";
	else {
		if (a==b)
			cout<<"Positive";
		if (a==0 || b==0)
			cout<<"Zero";
		if (a<0 && b<0){
			if (dem(a,b)%2==0)
				cout<<"Positive";
			else
				cout<<"Negative";
		}
	}
	return 0;
}
