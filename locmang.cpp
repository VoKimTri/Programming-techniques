#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
//Khai bao array
int a[100];
int tg[100];

int main (){
	//Khai bao va nhap so n
	int n, i, j, t, r, k;
	cin>>n;
		//Nhap mang a[] va copy sang mang tg[]
		for (i=1; i<=n;i++){
			cin>>a[i];
		}
		for (i=1; i<=n;i++){
			tg[i]=a[i];
		}
	//Loc trung lap trong mang tg[]
	t=n;
	for (i=0; i<t; i++){//
		for (j=i+1;j<t;j++){
			if(tg[i] == tg[j]){
				for(r=j; r<t; r++){
					tg[r] = tg[r + 1];
				}
				t--;
				j--;
			}
		}
	}
	//Sap xep mang tang dan
    for(int i = 0; i < t ; i++){
        for(int m = i + 1; m <= t; m++){
            if(tg[i] > tg[m]){
                k = tg[i];
                tg[i] = tg[m];
                tg[m] = k;        
            }
        }
    }
    
    for (int i=1;i<=n;i++){
		for (int j=1;j<=t;j++)
		if (a[i]==tg[j]){
			cout<<t-j+1<<endl;
			break;
		}
		else{
			continue;
		}
	}
	
	//Xuat mang
	/*
	for (int i = 1; i <= t; i++){
		cout<<tg[i];
	}
	*/
	return 0;
}
