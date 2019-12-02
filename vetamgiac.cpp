#include<iostream>
using namespace std;
int main()
{
	int T,n;
	cin>>n;
	for(int k=0;k<n;k++){
		cin>>T;
	for(int i =0;i<T;i++){
		for(int j=0;j<=i;j++){
			cout<<"* ";
		}
		cout<<"\n";
	}
    for(int i = T-2;i>=0;i--){
    	for(int j =0 ;j<=i;j++){
    		cout<<"* ";
    	}
		cout<<"\n";
	}
}
	return 0;
} 
